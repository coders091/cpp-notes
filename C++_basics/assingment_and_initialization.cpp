#include <iostream>

int main(){

        // if a variable is not used but present inn code. warning: Wunused-variable will pop up.orr simply remove it!
    
    
    [[maybe_unused]] int x;              //deafault initialization
    [[maybe_unused]] int a = 1;          //copy initialiation
    [[maybe_unused]] int b (1);          //direct initialization
    [[maybe_unused]] int c {1};          // List initialization (Most preferred as it prevents data loss via narrowing conversion).
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
    // std::cout << p << '\n';
  
    return 0;
}