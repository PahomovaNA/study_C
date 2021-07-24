#include <stdarg.h>
#include <stddef.h>
#include <setjmp.h>
#include <stdio.h>
int a=99;
int b=7;
int c=14;
int d=100;

int main(void) {
int x, y, z;
if(a>=b)
    x=a;
if (b>a)
x=b;
if (c>=d)
y=c;
if (d>c)
y=d;
if (x>=y)
z=x;
if (y>x)
z=y;
printf ("maximum %d",z);
return z;
}
