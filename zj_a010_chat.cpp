#include <iostream>

int main() {
    int a;
    std::cin >> a;

    if (a == 1) {
        std::cout << "1" << std::endl;
        return 0;
    }

    int f = 0;
    for (int i = 2; i <= a; ++i) {
        int pow = 0;
        while (a % i == 0) {
            pow++;
            a /= i;
        }

        if (pow) {
            if (f > 0) {
                std::cout << " * ";
            }

            std::cout << i;
            if (pow > 1) {
                std::cout << "^" << pow;
            }

            f++;
        }

        if (a == 1) {
            break;
        }
    }

    std::cout << std::endl;
    return 0;
}
