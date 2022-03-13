#ifndef SRC_FACTORY_IDCARD_IDCARDFACTORY_H_
#define SRC_FACTORY_IDCARD_IDCARDFACTORY_H_

#include <vector>
#include <string>
#include "../framework/Factory.h"
#include "../framework/Product.h"
#include "IDCard.h"

namespace idcard {

class IDCardFactory: public framework::Factory {
 public:
  std::vector<std::string>* getOwners();
 protected:
  framework::Product* createProduct(const std::string &owner) override;
  void registerProduct(framework::Product *product) override;
 private:
  std::vector<std::string> owners;
};
}  // namespace idcard

#endif  // SRC_FACTORY_IDCARD_IDCARDFACTORY_H_
