#include<stdio.h>

int main ()
{

//    int a = -5;
//    printf("As signed decimal=%d and unsigned hex=%X\n",a,a);
//    unsigned int b = a;
//    printf("As unsigned decimal=%u and unsigned hex=%X\n",b,b);


    // char a = 99; //'c'; 99
    // char a = -99;
    // char a = 1210;
    // char a = 42; //'*'  = 42 = 0x2A = 052 = 0b101010;

//    printf("As char=%c\n",a);
//    printf("As signed decimal=%d and hex=%X\n",a,a);
//    unsigned char b = a;
//    printf("As unsigned decimal=%u and hex=%X\n",b,b);

    int c = 9;
    printf("Shorthand increment c += 2 is equal to %d\n",c += 2);
    printf("Shorthand increment c *= 2 is equal to %d\n",c *= 2);

    int i = 1;
    printf("pre increment case is %d\n", ++i);

    i = 1;
    printf("post increment case is %d\n", i++);
    printf("now i is %d\n", i);

    i = 10;
    c = i--;
    printf("now c is %d and i is %d\n", c, i);


    int x = 3;
    printf("%d\n", 3 -2 / 4);
    printf("%f\n", 3 -2.0 / 4);
    printf("%d\n", -27 / -5 + 4 / 3);
    printf("%d\n", 16 % -5 + 7 * 6);
    printf("%d\n", -12 * 3 % 5 * -23 / +6 - 5 * 2);
    printf("%d\n", x-- * 2 + 5);
    printf("%d\n", x);
    printf("%d\n", --x * 2 + 5);
    printf("%d\n", 3 % 5 / (5 % 3));


    int a = 33333, b = -77777;
    printf("a & b is %d\n", a & b);
    printf("a ^ b is %d\n", a ^ b);
    printf("a | b is %d\n", a | b);
    printf("~(a | b) is %d\n", ~(a | b));
    printf("~a & ~b is %d\n", ~a & ~b);

    unsigned char u = 211;
    printf("shifted signed=%d and unsigned=%u and after type-conversion=%u \n", u>>3, u<<3,(unsigned char) (u<<3));
    unsigned int s = 1 << 31;
    printf("shifted signed=%d and unsigned=%u\n", s, s);
    printf("shifted signed=%d and unsigned=%u\n", s>>3, s>>3);
}
