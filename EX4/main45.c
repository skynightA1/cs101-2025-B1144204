/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void hanoi(int n, char from_rod,char to_rod, char aux_rod){
    if(n==1){
        printf("\n Move disk 1 from rod %c to rod %c" , from_rod, to_rod);
        return;
    }
    hanoi(n-1, from_rod,aux_rod,to_rod);
    printf("\n Move disk %d from rod %c to rod %c" , n , from_rod, to_rod);
    hanoi(n-1, aux_rod,to_rod,from_rod);
}
int main()
{
    int n = 3;
    hanoi(n,'a','b', 'c');
    return 0;
}
