#pragma_once
#include <optional>
#include <iostream>
#include <string>

class UserName {
public:
  explicit UserName(std::string str) : mName(std::move(str)){
    std::cout << "UserName::UserName('" << mName << "')\n";
  }
  ~UserName(){
    std::cout << "UserName::~UserName('" << mName << " ')\n";
  }
private:
  std::string mName;
};
