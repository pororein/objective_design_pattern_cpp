#ifndef SRC_BRIDGE_IMPLEMENTATION_DISPLAYIMPL_HPP
#define SRC_BRIDGE_IMPLEMENTATION_DISPLAYIMPL_HPP

namespace implementation
{
  class DisplayImpl
  {
  public:
    virtual void rawOpen() = 0;
    virtual void rawPrint() = 0;
    virtual void rawClose() = 0;
  };
}; // namespace implementation

#endif // SRC_BRIDGE_IMPLEMENTATION_DISPLAYIMPL_HPP