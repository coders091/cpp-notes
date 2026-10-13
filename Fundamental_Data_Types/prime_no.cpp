#include <iostream>
int main () {

/*     int number;
    std::cout<< "Enter a number between 0 to 9, inclusive. \n";
    std::cin >> number;

    int cond1 {number / number ==1  && number / 1 == number};
    int cond2 {number > 9 || number <0};

    if (cond2){
        std::cout << "Please enter number within the range mentioned. \n";
    };

    if (cond1 && cond2 == true ) {
        std::cout << "The number is prime. \n";
    }else {
        std::cout << "The number is not prime. \n";
    } */


    // YOU ARE OVERCOMPLICATING THE STUFF. READ THE QUESTION PROPERLY. 
    //YOU DONT NEED TO INVENT A FORMULA.. YOU JUST NEED TO EVALUTE FOR PN BETWEEN 0 TO 9 WHICH IS 2,3,5,7 THAT'S IT.

    int number;
    std::cout<< "Enter a number between 0 to 9, inclusive. \n";
    std::cin >> number;



    if(number == 2 || number == 3 || number == 5 || number == 7) {
        std::cout << number << " is a prime number. \n";
    } else if (number == 0 || number == 1 || number == 4 || number == 6 || number == 8 || number== 9) {
        std::cout << number << " not a prime number.  \n";
    } else {
        std::cout << "number is out of range.\n";
    }
    return 0;

}