#include <stdio.h>

int main() {
  int a = 1;
  const int* a1 = &a; // *a 不能变，但是a可以赋值为其他地址
  // *a1 = 3; error *a read only
  int a3 = 5;
  a1 = &a3; // right a 可以赋值为其他地址
  a3 = 8;
  printf("%d", *a1);
}
