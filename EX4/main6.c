/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int fac(int n){
        if(n==1) return 1;
        return n * fac(n-1);

}
int main()
{

    
        int n = 5;
        int m = fac(n);
        printf("fac %d = %d", n, m);
        return 0;
}
