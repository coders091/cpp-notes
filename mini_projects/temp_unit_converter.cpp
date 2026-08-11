#include <iostream>

int main () {
    double temC;
    std::cout << "What's the temperature in °C\n";
    std::cin >> temC ;
   // std::cout << temC << "°C\n";  i wanted to make unit with degree symbol next to cin in input (not in next line... right next to it) 

   double temF {(temC*1.8)+32};

   std::cout << "In farenhiet it will be \n";
   std::cout <<"      " <<temF << " F\n"; 

   std::cout << "code ends here." << "\n";

    return 0;
}