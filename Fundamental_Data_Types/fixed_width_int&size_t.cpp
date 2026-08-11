// self note: if u open it. i must go and read article 4.6 again. i didn't able to understand it fully.

#include <iostream>
#include <cstddef> // for size_t
#include <cstdint> //this is usefull to fix the range of the integer.

/*  I STILL DIDN'T GET THIS PART THOUGH!!
  std::int8_t and std::uint8_t typically behave like chars
 Due to an oversight in the C++ specification, modern compilers
 typically treat std::int8_t and std::uint8_t 
 (and the corresponding fast and least fixed-width types, which we’ll introduce in a moment)
  the same as signed char and unsigned char respectively. Thus on most modern systems,
 the 8-bit fixed-width integral types will behave like char types. 

 */
int main() {

   /*  std::int8_t x {123}; //size of this int if fixed for 8 bits or 1 byte.
    std::int16_t y {123}; // similarly here it's 16bits or 2 byte.
    std::int32_t z {123};
    std::int64_t a {123};

    // there is one more thing which uint#_t.. which is for unsigned. hence it smallest int will be 0 here
    std::uint8_t q {123};
    std::uint16_t w {123};
    std::uint32_t e {123};
 */
    // this "above" stuff have it's downsides hence two new things came into picture.. for downsides reffer cpp
    
    //fast and least int.. it simply this std::int_fast/least#_t where # is 8,16,32,64.

    //though is still not able understand why it is like this
    /* You can see that std::int_least16_t is 16-bits, 
    whereas std::int_fast16_t is actually 32-bits. 
    This is because on the author’s machine, 32-bit integers are faster to process than 16-bit integers.
    
    As another example, let’s assume we’re on an architecture that has only 16-bit and 64-bit integral types.
    std::int32_t would not exist, whereas std::least_int32_t (and std::fast_int32_t) would be 64 bits.
    */

    //cpp advices.
    //Our stance is that it’s better to be correct than fast, and better to fail at compile time than runtime. Therefore, if you need an integral type with a guaranteed range, we recommend avoiding the fast/least types in favor of the fixed-width types. If you later discover the need to support an esoteric platform for which a specific fixed-width integral type won’t compile, then you can decide how to migrate your program (and thoroughly retest) at that point



    // LET'S TALK ABOUT size_t.
    const int we {5};
    std::size_t s {we}; //size_t is an alias to unsigned long or long long int
    std::cout << s << '\n';
 // running the abv code as it is will throw narrowing conversion error. BUT WHY? ==> because compiler check the possibility ke vo variable
 // kya values le skta hai as it's not a matter ke abhi value kya assign hai but kya kay assign ke ja skti hai ... it chekcs whole range of that variable.
 // but if we  put "const" we restrict that range hence it works if we put in above code



    return 0;
}