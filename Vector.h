template <class T> class Vector {
public:
  Vector() = default;
  Vector(const size_t size);
  Vector(std::initializer_list<T> args);
  Vector(T *begin, T *end);
  Vector(const Vector &rhs);
  ~Vector();
  Vector &operator=(const Vector &);

  const T *begin();
  const T *end();
  void push_back(const T value);
  void push_front(const T value);

  template <class T1> void emplace_back(T1 args);

  T *insert(size_t pos, T value);
  int *erase(size_t pos);
  T *erase(int *pos);
  T *erase(T *begin, T *end);
  T back();
  T front();

  T &operator[](size_t pos);
  const T &operator[](size_t pos) const;
  void resize(size_t count);
  void reserve(size_t new_cap);
  size_t size();
  size_t capacity();
  bool empty();

private:
  size_t capacity_{10};
  T *data_{};
  size_t size_{};
};

template <class T> class Stack {
public:
  Stack() = delete;
  Stack(size_t size);
  Stack(const Stack &st);
  ~Stack();
  Stack &operator=(const Stack &st);

private:
  T *data_ = nullptr;
  int current_position = -1;
  int SIZE_STACK = 5;
};

template <class T>
Vector<T>::Vector(size_t size)
    : data_{new T[size]{}}, capacity_{size}, size_{size} {}

template <class T>
Vector<T>::Vector(const Vector &rhs)
    : data_{new T[rhs.size_]{}}, capacity_{rhs.capacity_}, size_{rhs.size_} {}

template <class T>
Vector<T>::Vector(std::initializer_list<T> args) : capacity_{args.size()} {
  data_ = new T[args.size()];
  size_ = 0;
  for (T x : args) {
    data_[size_++] = x;
  }
}

template <class T> Vector<T>::Vector(T *begin, T *end) {
  if (begin == nullptr || end == nullptr || begin == end) {
    return;
  }
  size_ = std::distance(begin, end);
  capacity_ = size_;
  data_ = new int[size_];
  for (size_t i = 0; i < size_; ++i) {
    data_[i] = *begin++;
  }
}

template <class T> Vector<T>::~Vector() { delete[] data_; }

template <class T> Vector<T> &Vector<T>::operator=(const Vector &arg) {
  if (this == &arg) {
    return *this;
  }
  delete[] data_;
  size_ = arg.size_;
  capacity_ = arg.capacity_;
  data_ = new T[capacity_];
  for (size_t i = 0; i < size_; ++i) {
    data_[i] = arg.data_[i];
  }
  return *this;
}

template <class T> const T *Vector<T>::begin() { return data_; }

template <class T> const T *Vector<T>::end() { return data_ + size_; }

template <class T> void Vector<T>::push_back(T value) {
  data_[size_++] = value;
}

template <class T> void Vector<T>::push_front(T value) { data_[0] = value; }

template <class... Args> void emplace_back(Args... args) {
  new (data_[size_++]) T(args...);
}

template <class T> T *Vector<T>::insert(size_t pos, T value) {
  if (size_ < pos) {
    return 0;
  }
  ++size_;
  for (size_t i = size_; i > pos; --i) {
    if (i >= pos) {
      std::swap(data_[i - 1], data_[i]);
    }
  }
  data_[pos] = value;
  return data_;
}

template <class T> int *Vector<T>::erase(size_t pos) {
  if (size_ < pos) {
    return 0;
  }
  for (int i = pos; i < size_; ++i) {
    data_[i - 1] = data_[i];
  }
  --size_;
  return data_;
}

template <class T> T *Vector<T>::erase(int *pos) {
  if (pos == nullptr) {
    return 0;
  }
  for (size_t i = 0; i < size_; ++i) {
    if (data_[i] == *pos) {
      data_[i] = data_[i + 1];
    }
  }
  --size_;
  return data_;
}

template <class T> T *Vector<T>::erase(T *begin, T *end) {
  if (begin == nullptr || end == nullptr || begin == end) {
    return 0;
  }
  T *end_erase = end;
  const T *const new_end = begin + std::distance(begin, end);
  while (begin != new_end) {
    *begin++ = *end_erase++;
    --size_;
  }
  return begin;
}

template <class T> T Vector<T>::back() { return data_[size_ - 1]; }

template <class T> T Vector<T>::front() { return data_[0]; }

template <class T> T &Vector<T>::operator[](size_t pos) { return data_[pos]; }

template <class T> const T &Vector<T>::operator[](size_t pos) const {
  return data_[pos];
}

template <class T> void Vector<T>::resize(size_t count) {
  int i = size_;
  if (size_ < count) {
    size_ = count;
    for (; i < count; ++i) {
      data_[i] = 0;
    }
  } else if (size_ > count) {
    size_ = count;
  }
}
template <class T> void Vector<T>::reserve(size_t new_cap) {
  T *newData_ = new T[new_cap];
  for (size_t i = 0; i < size_; ++i) {
    newData_[i] = data_[i];
  }

  capacity_ = new_cap;
  delete[] data_;
  data_ = newData_;
}

template <class T> size_t Vector<T>::size() { return size_; }

template <class T> size_t Vector<T>::capacity() { return capacity_; }

template <class T> bool Vector<T>::empty() {
  return size_ == 0 ? false : true;
};
