#include <iostream>

// implicit type conversion
//The process of converting data from one type to another type is called type conversion.
// When the compiler does type conversion on our behalf without us explicitly asking, we call this implicit type conversion

void print(double x){ //reminder: thing inside round bracket called paramenter.
    std::cout << x << '\n';   
}

int main() {

    print(5.0); //note: By default, floating point values whose decimal part is 0 print without the decimal places (e.g. 5.0 prints as 5).
    print(5);
    print(1.2);
    // here happen implicit type conversion. that double get convert into int
    return 0;
}