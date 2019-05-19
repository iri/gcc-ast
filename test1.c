#include <stdio.h>

int du(int x) {
   int x2;
   x2 = x+x;
   return x2;
}

int main()
{
struct abc {
    int a;
    int b;
} s;

s.a = 3;
s.b = 4;
printf("%d %d %d\n",s.a,s.b,du(s.a));


    int x,y;

    x = 5;   y=8;
    printf("%d %d\n",x,y);

    x = x + 0; 
    printf("%d\n",x);

    x = x + 2; 
    printf("%d\n",x);

    y = x + y - 1; 
    printf("%d\n",x);

    printf("Hello world!\n");
    return 0;
}

