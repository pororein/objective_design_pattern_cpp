#ifndef SRC_BUILDER_DIRECTOR_H_
#define SRC_BUILDER_DIRECTOR_H_

#include "Builder.h"

class Director
{
private:
  Builder *builder;

public:
  explicit Director(Builder *builder);
  void construct();
};

#endif // SRC_BUILDER_DIRECTOR_H_
