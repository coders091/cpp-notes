/* #include <iostream>

int getvaluefromuser() {
    std::cout << "enter the integer : " << '\n';
    int input{};
    std::cin >> input;
    return input; // w/o this the fun will not return a the value and the entered value will not get used anywhere.
    
}

int main() {
    int num {getvaluefromuser()}; 
    std::cout << "value of num: " << num << '\n';

    std::cout << "twice of num is : " << num*2<<'\n' ;
    return 0;

} */

// EXPLORING VOID FUNCATION MORE!! or non-value returning 

#include <iostream>

/* void printhi() { // this void funcation is usefull when there is no need of user to interact with set of codes.
    //the does only pop up like untoucble data and exist there wihtout any interfernece,
    std::cout << "HELLO" << '\n';
    std::cout << "hi" << '\n';
}

int main () {
    printhi();

    return 0;
} */

// introducing parameters and arguments into the functions
/* int add(int x, int y) { //things inside () is called parameter.
    return x + y;
}

int multiply(int q , int w) {
    return q*w;
}

int main() {
    std::cout << "hello again world!\n";
    std::cout << add (3, add( add(1,4),4)) << '\n';
    std::cout << multiply (3,5) << '\n';  //<--this is called aregument. like what to do
    std::cout<< multiply(add(1,5) , multiply(4,6)) << '\n';
    int a(2);
    std::cout << add(a,a);
}
 */
// few stuff --> unrefrenced and unnamed parameter
// void dosomething(int call) this is a unrefrenced parameter
//void dosomething (int /* call */) this is unnamed parameter.. note: that call under comment is intentially there. just int is called unnamed paramter.

int doubleNumber(int x) {
    return 2*x;
}
int main() {
    std::cout<< "Enter an integer: " << '\n';
    int x;
    std::cin >>x ;
    std::cout << doubleNumber(x) << '\n';
    return 0;
}

//local variable is a term used for variables which is assigned to the paramenter to future use it.
//for eg. if a fun has int x int y as para then return can be z {argument of fun}
// "out of scope" term used for idetnifiers 
// "going out of scope" used for objects ... basically not being accessed by code region
// imp: we can use variables of same name considering they are in different fun. they will not clash as they have seperate identity. THEY ARE CALLED LOCAL VARIABLES