#include <stdio.h>

int main()
{
   int i,j;
   for(i=0;i<5;i++)
   {
      for(j=0;j<=i;j++)
      if(i%2==0) printf("%d",i+1);
      else printf("%c",96+i+1);
      printf("\n");
   }
}
