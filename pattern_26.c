#include <stdio.h>

int main()
{
   int i,j;
   for(i=0;i<5;i++)
   {
      for(j=0;j<=i;j++)
      if(i%2==0) printf("%c",97+i);
      else printf("%d",i+1);
      printf("\n");
   }
}
