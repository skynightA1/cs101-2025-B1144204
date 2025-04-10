/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int my_strlen(char* s){
    if(!*s) return 0;
    return 1 + my_strlen(s+1);
}
int main()
{
    char s[] = "IU is a girl!";
    printf("%slen = %d\n", s, my_strlen(s));
    return 0;
}
