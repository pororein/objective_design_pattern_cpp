#ifndef SRC_BUILDER_HTMLBUILDER_H_
#define SRC_BUILDER_HTMLBUILDER_H_

#include "Builder.h"
#include <string>
#include <vector>

class HTMLBuilder : public Builder
{
private:
  std::string buffer;

public:
  void makeTitle(const std::string &title) override;
  void makeString(const std::string &str) override;
  void makeItems(const std::vector<std::string> &items) override;
  void close() override;
  std::string getResult();
};

#endif // SRC_BUILDER_HTMLBUILDER_H_
