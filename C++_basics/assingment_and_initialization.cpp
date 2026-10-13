#include <iostream>

int main(){

        // if a variable is not used but present inn code. warning: Wunused-variable will pop up.orr simply remove it!
    
    
    [[maybe_unused]] int x;              //deafault initialization

    [[maybe_unused]] int a = 1;          //copy initialiation

    [[maybe_unused]] int b (1);          //direct initialization
    
    [[maybe_unused]] int c {};          //  VALUR INITIALIZATION (Most preferred as it prevents data loss via narrowing conversion). it assumes the value as 0. 
    // ex. of narrowing conversions, say int a (1.2); here narrowing conversion will happena nd output will be 1 instead of 1.2
    // but here in direct initialization 1.2 will be 1.2


    [[maybe_unused__]] int d{1};         // this is direct list initialization... 
  /*   int d (123.11);
    std::cout<<d << '\n'; */


    int m,n; // it do create two variables with dafault initialization..
    int p,q = 0;    //only q equals 0 not p and q.

  //one more thing there is difference between {} and {0}
  int w {}; // this is value initialization which is temporary and get replaced later "maybe by user's input"
  
  int e{0}; // this is direct list initialization, it has initial value givenn is 0

  // Initialization vs Assignment
    int target_var { 50 }; // Initialization
    target_var = 100;      // Assignment (Overwriting an existing memory object)
    [[maybe_unused]] int control_var = target_var;

    // 2. Undefined Behavior (UB)
    // CRITICAL: Reading an uninitialized variable like 'p' results in Undefined Behavior.
    // The compiler can output garbage data, crash, or introduce unpredictable bugs.
     std::cout << p << '\n';
  
    return 0;
}