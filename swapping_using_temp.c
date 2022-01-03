//#include <stdio.h>
int printf(const char * restrict, ...) __attribute__((__format__ (__printf__, 1, 2)));
int scanf(const char * restrict, ...) __attribute__((__format__ (__scanf__, 1, 2)));

int main()
{int a=2,b=3,temp;
temp=a;
a=b;
b=temp;
printf("%d %d",a,b);
return 0;
}