// smallest unit of memory is bit, modern computer architecture uses sequential order of bits (memory add) for each memory which is 8 bits.
// memory is a place where u put info , retrive it.
// there are two types of collection of data types (fundamental and compound)
// data types
/* 
includes both signed and unsigned type
int, short, long, long long 
float, double, long double
char
bool
voidc
*/

// suprisingly c++ don't define a fixed size of fundamentals data types. means size of data types can vary and it's vary device to device.
// but it has smth called minimum size. like for int it's 8 bits, for float it is 16 bits.. etc..

#include <iomanip> // for std::setw (which sets the width of the subsequent output)
#include <iostream>
#include <climits> // for CHAR_BIT

int main()
{
     std::cout << "A byte is " << CHAR_BIT << " bits\n\n";

    std::cout << std::left; // left justify output

    std::cout << std::setw(16) << "bool:" << sizeof(bool) << " bytes\n";
    std::cout << std::setw(16) << "char:" << sizeof(char) << " bytes\n";
    std::cout << std::setw(16) << "short:" << sizeof(short) << " bytes\n";
    std::cout << std::setw(16) << "int:" << sizeof(int) << " bytes\n";
    std::cout << std::setw(16) << "long:" << sizeof(long) << " bytes\n";
    std::cout << std::setw(16) << "long long:" << sizeof(long long) << " bytes\n";
    std::cout << std::setw(16) << "float:" << sizeof(float) << " bytes\n";
    std::cout << std::setw(16) << "double:" << sizeof(double) << " bytes\n";
    std::cout << std::setw(16) << "long double:" << sizeof(long double) << " bytes\n";

    std::cout <<"======================================================\n";

    // more of int data type
    int a;
    short int b;
    long int c;
    long long d;
    std::cout << "size of a : " << sizeof(a) << " bytes\n"; 
    std::cout << "size of b : " << sizeof(b) << " bytes\n";  
    std::cout << "size of c : " << sizeof(c) << " bytes\n";  
    std::cout << "size of d : " << sizeof(d) << " bytes\n"; 

    // we have one more thing : signed and unsigned data types : 
    // signed int data type (holds -,+ and 0 intgeres)
    // unsigned int data type (holds non negative integers only.)
    signed int e{2};
    signed short int f{2000};
    signed long int g{2885};
    signed long long int h{100};
    
    unsigned int i{1};
    unsigned short int j{34};
    unsigned long int k{24};
    unsigned long long l{13};
    std::cout << j - i<< '\n'; 
    std::cout << i - j<< '\n'; //garbage value as the output will go out of range!

    std::cout << e << '\n';
    std::cout << f << '\n';
    std::cout << g << '\n';
    std::cout << h << '\n';
    std::cout << i << '\n';
    std::cout << j << '\n';
    std::cout << k << '\n';
    std::cout << l << '\n';

    // talking about range so in general it's for n bits it's -(2^n-1) to (2^n-1 - 1). if it's unsigned then it's just start with 0 . 
    // let's break the code

    std::cout << "==========================" << '\n';
    int x {2147483647};
    std::cout << x << '\n';
    x = x+1;
    std::cout << x << '\n';
    // this is known as overflow... when you give data beyond the rage of the variable.

    // integer division
    std::cout << 20/5 << '\n';
    std::cout << 16/5 << '\n'; //it happens because c++ always put an integer results and drop all fraction part by deafault until specified..
 
    //the game os signed and unsigned int witin airthmatic
    unsigned int num;
    signed int num1;
    std::cout << "write two numbers: \n";
    std::cout << "number: \n";
    std::cin >> num ;
    std::cout << "number: \n";
    std::cin >> num1;


    int positive(num - num1);
    if (positive) {
        std::cout << num-num1 << '\n';
    }else {
    std::cout << num1-num << '\n' ;  
     };

    // explaination:
    /* In C++, if a mathematical operation (e.g. arithmetic or comparison) has one signed integer 
    and one unsigned integer, the signed integer will usually be converted to an unsigned integer. 
    And the result will thus be unsigned.  */
    return 0;
}