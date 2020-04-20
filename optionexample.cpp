#include "optionals.hpp"
#include <iostream>

int main(){
  std::optional<UserName> oEmpty;

  //emplace
  oEmpty.emplace("Steve");

  //calls ~Steve and creates a new Mark:
  oEmpty.emplace("Mark");

  //reset so it's empty again
  oEmpty.reset();

  oEmpty.emplace("masinde");
  oEmpty = UserName("Joe");
}
