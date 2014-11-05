#ifndef count_H
#define count_h

class Refptr_count {
public:
  Refptr_count(): count(new std::size_t(1)) { }

  std::size_t val() const { return *count; }
  void operator ++() const { ++*count; }
  void operator --() const { if (--*count == 0) delete count; }

private:
  std::size_t* count;
};
#endif // count_H
