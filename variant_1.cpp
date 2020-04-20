#include<iostream>
#include<string>
#include<variant>

using namespace std;

struct PrintVistor {
  void operator()(int i){cout << "int: " << i << '\n';}
  void operator()(float f){ cout << " float " << f << '\n';}
  void operator()(const string& s){cout << "str: " << s << '\n';}
};
