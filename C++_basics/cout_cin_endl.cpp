#include <iostream>

int main(){
    int x;
    int y;
    int z;

    std::cout << "Enter a number :  \n" ;
    std::cin >> x >> y >> z ;
    std::cout << "you entered : " << x << ", " <<y << " and " << z <<  std::endl;

    int a{};
    std::cout << a << '\n';

    return  0;
}