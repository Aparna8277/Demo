#include <stdio.h>

int main()
{                         //number=binary 
    int a = 60;    // 60 = 0011 1100 
    int b = 13;    //13 = 0000 1101 
    int c;
    p   //0001 0000     0000 0001
    
    c= a&p;
    c = a & b;      // 12 = 0000 1100 
    printf("a & b = %d\n", c);

    c = a | b;      // 61 = 0011 1101 
    printf("a | b = %d\n", c);

    c = a ^ b;      // 49 = 0011 0001 
    printf("a ^ b = %d\n", c);

    c = ~a;         // -61 = 1100 0011 
    printf("~a = %d\n", c);

    c = a << 2;     //240 = 1111 0000 
    printf("a << 2 = %d\n", c);

    c = a >> 2;     //15 = 0000 1111 
    printf("a >> 2 = %d\n", c);

    return 0;
}
