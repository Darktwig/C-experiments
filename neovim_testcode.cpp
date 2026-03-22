#include <iostream>
#include <ostream>

template <int i>
void a() {
  a<i+1>();
}

void foo() {
  a<0>();
}

int main() {
  std::cout << "This is hard but fun!" << std::endl;
  return 0;
}
