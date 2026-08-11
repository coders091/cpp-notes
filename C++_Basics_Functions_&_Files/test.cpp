#include <iostream>

int readNumber(int x) {
    std::cout << "enter your 1st integer: \n";
    std::cin >> x;
    return x;
}

int main () {
    std::cout << readNumber(9) << '\n';
    return 0;
}