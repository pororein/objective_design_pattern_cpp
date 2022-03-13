#ifndef SRC_TEMPLATE_ABSTRACTDISPLAY_H_
#define SRC_TEMPLATE_ABSTRACTDISPLAY_H_

class AbstractDisplay {
 public:
  virtual void open() {}
  virtual void print() {}
  virtual void close() {}
  void display();
};

#endif  // SRC_TEMPLATE_ABSTRACTDISPLAY_H_
