#include <iostream>

int abs (int x) {
    if (x < 0)
    return -x;

    return x;
}

int main(){

    // if statement:
/*     int x;
    std::cout<< "enter the value of x : \n";
    std::cin >> x; */

/*     if (x == 0) {
        std::cout << "the number is zero. \n";
    };
    if (x != 0) {
        std::cout << "The number is non zero. \n";
    }; */

    // you can also make a var for condition and write the var name in place of condition. such as let x == 0 be zero.

/*     bool zero {x == 0};
     if (zero) {
        std::cout << "the number is zero. \n";
    };
    if (!zero) {
        std::cout << "The number is non zero. \n";
    };
 */
// ========================================================================================

// if else statement + chain of ifs
/*     int y;
    std::cout << "Enter value : \n";
    std::cin >> y;
    bool zero1 (y == 0);
    if (zero1){
        std::cout << "value of zero. \n";    
    } else {
        std::cout << "Value of non zero. \n";
    };

    int p;
    std::cout << "P = ";
    std::cin >> p;
    if (p>0){
        std::cout<< "P is postive. \n";
    } 
    else if (p <0) {
        std::cout<< "P is negative. \n";
    }
     else {
        std::cout << "P is zero. \n";
    }; */

    // bool return value and if statement 
/*     int q{};
    int w{};
    std::cout << "enter q and w. \n";
    std::cin >> q >>  w;
    if (q == w) {
        std::cout << q << " and " << w  << "are equal. \n";
    }else {
        std::cout << q << " and " << w << " are not equal. \n";
    }; */


    //Non-Boolean conditionals
    //In such a case, the result of the conditional expression is converted to a Boolean value: non-zero values get converted to Boolean true, and zero-values get converted to Boolean false.
    
   /*  int e {};
    if (e) {
        std::cout << "hi\n";
    }else {
        std::cout << "bie\n";
    }; */
    
    //If-statements and early returns . NOTE: I DON'T REALLY GET THIS CONCEPT.
    // A return-statement that is not the last statement in a function is called an early return.
    std::cout << abs(2) << '\n';
    std::cout << abs(-2) << '\n';
    std::cout << abs(0) << '\n';
    return 0;
}