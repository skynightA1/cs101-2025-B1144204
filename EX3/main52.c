/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby,
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/


#include <stdio.h>

void func(int* i, int* j) {
    printf("in func, i = %d, j = %d\n", *i, *j);
    int t;
    t = *j;
    *j = *i;
    *i = t;
    printf("in func, i = %d, j = %d\n", *i, *j);
}

int main() {
    int n = 1, m = 2;
    func(&n, &m);
    printf("in main, n = %d, m = %d\n", n, m);
    return 0;
}