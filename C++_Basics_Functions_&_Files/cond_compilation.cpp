// basically directing compiler what to compiler and what to ignore by defining things.. in a way given below

#include <iostream>

#define PRINT_JOE //this is object like macro w/o substituion.

int main() {
#ifdef PRINT_JOE // Checking if a macro exists
    std::cout << "Joe\n"; // will be compiled since PRINT_JOE is defined
#endif

#ifdef PRINT_BOB
    std::cout << "Bob\n"; // will be excluded since PRINT_BOB is not defined
#endif



std::cout << "bob\n" ;
#if 1 //this basically stop the below blocks of code fromc compiling. NOTE: 0 mens block,1 means enable
std::cout <<"michel\n";
#endif //until this appears!
            //This provides a convenient way to “comment out” code that contains multi-line comments 
            //(which can’t be commented out using another multi-line comment due to multi-line comments being non-nestabl.
std::cout << "raven\n";




#define FOO 9 // Here's a macro with substitution.. previously we used macro w/o subs

#ifdef FOO // This FOO does not get replaced with 9 because it’s part of another preprocessor directive
    std::cout << FOO << '\n'; // This FOO gets replaced with 9 because it's part of the normal code
#endif

    return 0;
}