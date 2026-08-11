//The duplicate definition problem
// defining same identifier or fun or even .h files.. (ODR persist) causes compilation error.
// and to aviod this error.....header gaurds!!

/* so what and how it do?
0. preproceess go line by line and check.. we use the given below stuff in .h file
1. ifndef - it means if not defined... it will define it by 
2. #deifne then it exist (#endif)

note. if the fun/identifer / .h file is already defined it IGNORE THE ENTIRE FILE. 

it prevents from dublication of  fun/identifer / .h  */

/* THERE IS ONE THIGN NEED MORE DETAIELD EXPLAINATION
so preprocessor runs code line by line and file by file even if we compile multiple files together.
it's called translation unit. what it do under the hood?

A Translation Unit is simply: One .cpp file + all the headers it includes, treated as one single batch.

When that batch is finished compiling, all the #define names (like SQUARE_H) are thrown in the trash. 
They are completely forgotten. The next .cpp file starts with a completely blank slate.

THAT'S IT!*/