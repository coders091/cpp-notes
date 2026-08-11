// so basically as we know that c++ reads codes sequentially so if we write a main fun which has another fun but we haven't defined it
// it will show error now to get rid of this thing either we add define fun before main OR we use for. dec. aka fun. prototype.
// for eg
#include <iostream>

/* int mult (int x, int y); //this is for.dec. it has fun type, name, parametername (optionnal but helpful) but not body!  
int main () {
    std::cout << "2 times 4 is : " << mult(2,4) << '\n';
    return 0;
} */

// there are few things to note:
// 1. you can't degine the same fun. twice & you can degine same variables twices

int doMath (int, int, int, int);
int main (){
    std::cout << "ANSWER: " << doMath(1,2,4,4) << '\n';
    return 0;
}

int doMath(int first, int second, int third, int fourth)
{
     return first + second * third / fourth;
}