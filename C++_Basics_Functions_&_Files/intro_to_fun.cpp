#include <iostream>

void function_name() {
    std::cout << "In doprint()\n";
}
  /* FEW THINGS TO KEEP IN MIND.
1. () beside the name of the identifier states that this identifier is a function.
2. function helps in make smaller modules of codes that are going to repeat again and again in the code.
3. it execute code sequenctially. */


void doA() {
    std::cout << "Hello\n";
}

void doB() {
    std::cout << "World";
}

int main() {
    std::cout << "starting main()\n";
    function_name(); // writing it hear mean after executing starting main() cout, whatever present inn thsi funcation_name() will be executed!
    std::cout << "ending main()\n";
    function_name();
    function_name();


    std::cout << "=================================================================\n";

    
   /*    // what happen here? --> function can call another funcation!
    doA(); {
        doA();
    } */

    //  NOTE: nested fun is not allowed. means you can define a fun inside int main but can't it there. you need to define a fun outsdie of int main to use in inside it.

    return 0;
}