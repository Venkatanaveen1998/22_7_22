#include <stdio.h>
int k=0;
int main()
{
   int i,j;
   for(i=0;i<5;i++)
   {
      for(j=0;j<=i;j++)
      if(i==0) printf("0");
      else printf("%d ",k=k+2);
      printf("\n");
   }
}
