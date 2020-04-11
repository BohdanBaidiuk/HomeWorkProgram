#include <algorithm>
#include <functional>
#include <iostream>
#include <numeric>
#include <random>
#include <thread>
#include <vector>

namespace {
const size_t VectorSize{100};
const size_t Min{1};
const size_t Max{100};
} // namespace

void generate_vector(std::vector<int> &v) {
  std::random_device rd;
  std::mt19937 generator(rd());
  std::uniform_int_distribution<int> distribution(Min, Max);
  v.reserve(VectorSize);
  std::generate_n(
      std::back_inserter(v), VectorSize,
      [&distribution, &generator] { return distribution(generator); });
}

int main() {
  auto count = std::thread::hardware_concurrency();
  auto count_thr = count % 2 == 0 ? count : count - 1;

  std::vector<int> v;
  v.reserve(VectorSize);
  generate_vector(v);

  std::vector<int> threads_sum(count_thr);
  std::vector<std::thread> threds;
  threds.reserve(count_thr);

  int step = v.size() / count_thr;

  for (auto i = 0; i < count_thr; ++i) {
    std::thread th([i, step, &v, &threads_sum] {
      threads_sum[i] =
          std::accumulate(v.begin() + i * step, v.begin() + (i + 1) * step, 0);
    });
    threds.emplace_back(std::move(th));
  }

  std::for_each(threds.begin(), threds.end(),
                [](std::thread &threds) { threds.join(); });

  int sum = 0;

  std::for_each(threads_sum.begin(), threads_sum.end(),
                [&sum](int &vs) { return sum += vs; });

  std::cout << sum << std::endl;

  return 0;
}
