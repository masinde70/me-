#include<fstream>
#include<iostream>
#include<vector>

int main() {
   std::vector<int> v{};

   std::ifstream inputfile{"data.txt"};
   int n{};

   while (inputfile >> n) {
    	v.push_back(n);
   }

   for (auto x : v) {
      std::cout << x << '\n';
   }


}
