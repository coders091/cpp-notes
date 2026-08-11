#include <iostream>
int main () {

    int user_input{};
    
    std::cout << "Enter an Integer --> ";
    std::cin >> user_input;

    std::cout << "Two times of your number is : " << user_input*2 << '\n';
    std::cout << "thrice the number is : " << user_input*3 <<'\n';

    int a{}, b{};
    std::cout << "Enter an integer: ";
    std::cin >> a;
    std::cout << "Enter another integer: ";
    std::cin >> b;

    std::cout << a << " + " << b << " is " << a+b << ".\n";
    std::cout << a << " - " << b << " is " << a-b << ".\n";

    return 0;
}