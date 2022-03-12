#ifndef SRC_BUILDER_BUILDER_H_
#define SRC_BUILDER_BUILDER_H_

#include <string>
#include <vector>
#include <exception>

class Builder
{
public:
  virtual void makeTitle(const std::string &title)
  {
    throw new std::runtime_error("Doesn't override method: Builder::makeTitle");
  };
  virtual void makeString(const std::string &str)
  {
    throw new std::runtime_error("Doesn't override method: Builder::makeString");
  };
  virtual void makeItems(const std::vector<std::string> &items)
  {
    throw new std::runtime_error("Doesn't override method: Builder::makeItems");
  };
  virtual void close()
  {
    throw new std::runtime_error("Doesn't override method: Builder::close");
  };
};

#endif // SRC_BUILDER_BUILDER_H_