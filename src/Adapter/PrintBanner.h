#ifndef SRC_ADAPTER_PRINTBANNER_H_
#define SRC_ADAPTER_PRINTBANNER_H_

#include <string>
#include "Banner.h"
#include "Print.h"

class PrintBanner: public Print, Banner {
 public:
  explicit PrintBanner(const std::string &str) : Banner(str) {}
  void printWeak() override;
  void printStrong() override;
};

#endif  // SRC_ADAPTER_PRINTBANNER_H_
