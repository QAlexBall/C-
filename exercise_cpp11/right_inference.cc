#include <iostream>
using namespace std;
void process_value (int& i) {
  std::cout << "LValue processed: " << i << std::endl;
}

void process_value (int&& i) { // 接受右值引用
  std::cout << "RValue processed: " << i << std::endl;
}

int main() {
  int a = 0;
  int&& ri = 1;
  string c = "c";
  // int&& ri1 = c; error can't bind lvalue
  cout << ri << endl;
  
  process_value(1);
}
