#include <iostream>

int main() {
    int file_size = 777; // name is from Snake Case
    int FileSize = 0; // Pascal Case
    int fileSize = 0; // Camel Case
    int counter = 2;
    double sales = 9.99;
    std::cout << file_size;
    return 0;
}


//int change_variables() {
//    int a=3;
//    int b=5;
//    int temp=a;
//    a=b;
//    b=temp;
//    std::cout << a;
//    std::cout << b;
//    return 0;
//}

int constants() {
    const double pi = 3.41;
//    pi = 0; //this dont work as const ensures the variable does not change
    return 0;
}

