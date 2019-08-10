#include <stdio.h>
int main()
{
int a,r=0,b;
printf("\n");
scanf("%d",&a);
b=a;
while(b!=0)
{
 r=r*10;
 r=r+b%10;
b=b/10;
}
if(a==r)
printf("yes\n");
else
printf("no\n"); 
return 0;
}
