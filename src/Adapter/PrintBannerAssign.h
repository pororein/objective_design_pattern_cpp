#ifndef SRC_ADAPTER_PRINTBANNERASSIGN_H_
#define SRC_ADAPTER_PRINTBANNERASSIGN_H_

#include <string>
#include "Print.h"
#include "Banner.h"

class PrintBannerAssign: public Print {
 public:
  explicit PrintBannerAssign(const std::string &str) {
    this->banner = new Banner(str);
  }
  void printWeak() override;
  void printStrong() override;

 private:
  Banner *banner;
};

#endif  // SRC_ADAPTER_PRINTBANNERASSIGN_H_
