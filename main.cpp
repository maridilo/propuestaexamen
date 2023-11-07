#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cstdlib>

int main() {
    for (int a = 2; a < 9; a++) {
        std::cout << a << std::endl;
        printf("a=%d\n", a);
    }
    for (int b = 3; b < 16; b++) {
        std::cout << b << std::endl;
        printf("b=%d\n", b);
    }

    return 0;
}