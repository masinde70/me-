#include<fstream>
#include<iostream>
#include<string>
#include<vector>

using namespace std;


int main() {
   vector<string> lines{};

   ifstream inputfile{"strings.txt"};
   string line{};
   while(getline(inputfile, line)) {
   	lines.push_back(line);
   }

   for (const auto& x : lines) {
    	cout << x << '\n';
   }

}
