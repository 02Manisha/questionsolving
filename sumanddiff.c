#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
int m,n,s,d;
float a,b,S,D;	
 scanf("%d %d \n %f %f",&m, &n, &a, &b);
 s=m+n;
 d=m-n;
 S=a+b;
 D=a-b;
 printf("%d %d\n%0.1f %0.1f",s,d,S,D);    
    return 0;
}

