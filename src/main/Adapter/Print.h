#ifndef SRC_ADAPTER_PRINT_H_
#define SRC_ADAPTER_PRINT_H_

class Print {
 public:
  virtual ~Print() {}
  virtual void printWeak() = 0;
  virtual void printStrong() = 0;
};

#endif  // SRC_ADAPTER_PRINT_H_
