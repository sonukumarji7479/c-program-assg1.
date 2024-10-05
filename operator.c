#include <stdio.h>
// first run assingment operatoes
/*OPRATORS
Unary operators
two types of unary operators
1. increment operators +,-,x++, ++x
2. dcrement operators x-- , --x  */
int a1()
{
    int x = 5;
    printf("%d", x); // 5
    x++;
    printf("%d", x); // 5 x++; , 5+1=6
    ++x;
    printf("%d", x); // 6 ++x;  ,  6+1=7
    return 0;
}


// first run assingment operatoes
int a2()
{
    int x = 5, y;
    y = x++; // less priority so first run asssingment (=) operators.
    printf("OUTPUT:\n%d%d", x, y);
    return 0;
}



// first run ++x;
int a3()
{
    int x = 8, y;
    y = ++x; // high priority so run first (++x) increment.
    printf("OUTPUT: %d%d\t", x, y);
    return 0;
}
// Decrement operators
int a4()
{
    int x=7,y;
    y = x--; // less priority so first run assingment (=) operators;
    printf("OUTPUT:%d%d\t",x,y);
    return 0;
}
// write a program to solve the problem
int main()
{
    int x=10,y;
    y=--x; // high priority so first run (--x) decement operators.
    printf(" OUTPUT: %d%d\t",x,y);
    return 0;
}
