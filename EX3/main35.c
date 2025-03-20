/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

int main() {
    char v = 'A';
    int* p = NULL;
    p = &v;

    printf("Address of v: %x\n", v);
    printf("Address stored in p: %x\n", p);
    printf("Address of p: %x\n", &p);
    printf("Value of *p: %d\n", *p);

    return 0;
}