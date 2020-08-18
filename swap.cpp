#include <iostream>

int a[] = {1,2,3};

void swap(int& a, int& b) {

  int temp = a;
  a = b;
  b = temp;
};
int main() {
  swap(a[0], a[2]);
  for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    std::cout << a[i] << ' ';
  return 0;
}
