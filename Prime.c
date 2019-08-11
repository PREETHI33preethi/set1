#include <stdio.h>
void main()
{
   int n,c=2;
   printf("");
   scanf("%d",&n);
   for(c=2;c<=n-1;c++)
   {
      if(n%c==0)
      {
         printf("no\n");
       break;
      }
   }
   if(c==n)
      printf("yes\n");  
   return 0;
}
