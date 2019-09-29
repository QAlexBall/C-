#include <iostream>
typedef int (*f_p)(int, int);
int* foo (int x) {
  int* p = &x;
  static int call_num = 0;
  call_num = call_num + 1;
  std::cout << x << std::endl;
  std::cout << call_num << std::endl;
  return p;
}

int add (int a, int b) {
  return a + b;
}

int sub (int a, int b) {
  return a - b;
}

void func (int e, int d, f_p f) {
  std::cout << f(e, d) << std::endl;
}

int main () {
  int* (*func_ptr[5])(int) = {&foo, &foo, &foo, &foo, &foo};
  for (int i = 0; i < 5; i++) {
    (*func_ptr[i])(i);
  }

  func(2, 3, add);
  func(2, 3, sub);
  return 0;
}
