# include <stdio.h>
# include <stdlib.h>
void swap(int a, int b) { int t = a; a = b; b = t; }
void main()
{
    system("cls");
    int x = 5, y = 9;
    int *px = &x, *py = &y;
    printf("x is %x \t\t<-->  y is %x\n", x, y);
    printf("*px is %x\t<-->  *py is %x\n", *px, *py);
    printf("px is %x  <-->  py is %x\n", px, py);
    printf("&x is %x  <-->  &y is %x\n", &x, &y);
    printf("&px is %x <-->  &py is %x\n", &px, &py);
    *px = 0x82bffadc;
    *py = 0x82bffae0;
    printf("px is %x  <-->  py is %x\n", px, py);
    printf("*px is %x <-->  *py is %x\n", *px, *py);
    printf("*px is %x <-->  *py is %x\n", *px, *py);
    printf("x is %x   <-->  y is %x\n", x, y);
    printf("&x is %x  <-->  &y is %x\n", &x, &y);
    *px = 10;   /* sets x = 10 via px */
    y = *px;    /* y gets the value of x via px */
    printf("%x\n", *px);
    x = 2, y = 3;
    swap(x, y);
    printf("%x %x\n", x, y);
}