#ifndef SRC_COMPOSITE_FILETREATMENTEXCEPTION_HPP_
#define SRC_COMPOSITE_FILETREATMENTEXCEPTION_HPP_

#include <stdexcept>
#include <string>

class FileTreatmentException : public std::runtime_error
{
public:
  explicit FileTreatmentException(const std::string &_Message, int res)
      : _Errinfo(res), runtime_error(_Message)
  {
  }

  int returncode();

private:
  int _Errinfo;
};

#endif // SRC_COMPOSITE_FILETREATMENTEXCEPTION_HPP_