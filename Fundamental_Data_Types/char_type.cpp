#include <iostream>

int add(int x, int y) {
    return (x+y);
}

//The char data type was designed to hold a single character. A character can be a single letter, number, symbol, or whitespace
//The char data type is an integral type, meaning the underlying value is stored as an integer
//the integer stored by a char variable are intepreted as an ASCII character.

//Initializing chars
int main() {
    char ch{5};
    char ch1{'5'};
    std::cout << ch << '\n';
    std::cout << ch1 << '\n';
    //We can also output char literals directly:
    std::cout << 'c' << '\n' ;

    //Inputting chars
    // we need to do 
    std::cout << "do you want burger?\n";
    char ch3{};
    std::cin>> ch3;
    std::cout<< "response: " << ch3;
    std::cin>> ch3;
    std::cout << ch3;
    std::cin>> ch3;
    std::cout << ch3 << '\n';
    std::cout<< "===================\n";

 // by default compiler ignore whitespaces between charaters in char data type. we use cin.get to get that whitespace.
    std::cout << "enter the character from a keyboard.\n";
    char ch4;
    std::cin>> ch4;
    std::cout << "you entered: " << ch4 << '\n';
    std::cin.get(ch4);
    std::cout<< "you entered: " << ch4 << '\n';


    //escape sequence
    //There are some sequences of characters in C++ that have special meaning. These characters are called escape sequences. 
    //An escape sequence starts with a ‘\’ (backslash) character, and then a following letter or number. 
    // for eg. \n for new line, \t for horizontal tab

    std::cout << "S.no.\tName\tClass\tPhone no.\n";
    // \' for single quote, \" for a double quote, \\ for a backslash
    // many more
    std::cout << "it\'s\n";
    std::cout<< "\"water is colourless\"\n";
    std::cout << "\a\n";
    
    //What’s the difference between putting symbols in single and double quotes?
    /* Text between single quotes is treated as a char literal, 
    which represents a single character. For example, 'a' represents the character a, '+' represents 
    the character for the plus symbol, '5' represents the character 5 (not the number 5), and '\n' represents the newline character.
    Text between double quotes (e.g. “Hello, world!”) is treated as a C-style string literal, which can contain multiple characters. */

    std::cout<< '56' << '\n'; //Avoid multicharacter literals (e.g. '56').
    std::cout << 3+4 << '!\n';
    
    std::cout << add(3,4) << "/n" << '\n'; // it's a backword slash for charatercs not forward. it will compile but maynot give any desired result.
    

    return 0;
}
