// Note that by default, floating point literals default to type double. An f suffix is used to denote a literal of type float.

#include <iomanip> // for output manipulator std::setprecision()
#include <iostream>
int main() {
    float f {1.3f}; // if you don't use 'f' suffic compiler will treat it as double instead of float! it's of 4 byte. 
    //it's a matter of exceeding the range when it shows the error. 
    //else it won't show any error even if u use int, doublt with data type float, double or long double

    double d {1.2345678901234567890e142}; // it's of 8 byte

    long double ld {1.2345678901234567890e232}; // it's of 8,12 or 16 bytes... depending on the system hence avoid it!

 // std::cout has by default setprecision of 6 digits so to check the precision more than 6 use the header iomanip and std::setprecision(#).
    std::cout << f << " | " << d << " | " << ld << '\n';

    std::cout << 2.3 << '\n';
    std::cout << 2.0 << '\n'; // compiler wont' show 2.0 it will show 2.
    std::cout << 2 << '\n';
    std::cout << 23.2313423f << '\n'; //float has aorund 6-7 

    //EXPLORING ROUNDING ERRORS
    std::cout << std::setprecision(30) << d << '\n'; // double has precision of 15-16 significant value
    std::cout << std::setprecision(30)<<ld << '\n'; // it has around 15, 18 or 33 
     
    /* double eg {1.1};
    std::cout << std::setprecision(14);
    std::cout << eg << '\n'; i'm not understanding this*/

    double eg1 {12.2};
    std::cout << std::setprecision(17);
    std::cout << eg1 << '\n';

    double eg2 {12.2};
    std::cout << std::setprecision(142);
    std::cout << eg2 << '\n'; 

    // pls note: rounding error = it happen when we set precision more than the data type can handle.
    // for eg if we set precision of 9 to a float which has precision of 6 only it will put random no.s after 6 digits.

    std::cout << std::setprecision(17);
    d = 1.0;
    std::cout << d << '\n';
    double dd {0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1};
    double dd1 {0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1 * 0.1};
    std::cout << dd << '\n';
    std::cout << dd1 << '\n';



    // NAN,INF
    std::cout << " =========================== \n";
    double zero{0.0};
    double posinf {5.0/zero};
    std::cout << posinf << '\n';

    double neginf {-5.0/zero} ;
    std::cout << neginf << '\n';

    double z1 {zero/posinf};
    double z2 {zero / neginf};
    std::cout << z1 << " | " << z2 << " | \n"; 

    std::cout << zero/zero << '\n';
    std::cout << -zero/-zero << '\n';

 /* =================================================================================================================================== */
        //CONCEPT OF BOOLEAN
    /* it holds two only things true == 1 or false == 0 , '!' reverse the value. !true == false and !false = true*/
    bool b1 {true};
    bool b2 {false};
    bool b3 {!true};
    bool b4 {!false};
    std::cout << b1 << " | " <<  b2 << " | " << b3 << " | " <<  b4 << " | \n"; 

    // std::boolalpha : it's used to get true or false instead of 1 /0 in the terminal.
    std::cout << std::boolalpha;
    std::cout << true << " | " << false << " | " << !true << " | " << !false << '\n';

    //noboolalpha to turn it back off
    std::cout << std::noboolalpha;
    std::cout << true << " | " << false << " | " << !true << " | " << !false << '\n';



    return 0; 
    
}