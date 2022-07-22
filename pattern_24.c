#include <stdio.h>

int main()
{
   int i,j;
   for(i=0;i<5;i++)
   {
      for(j=0;j<=i;j++)
      if(i%2==0) printf("%c",97);
      else printf("%c",65);
      printf("\n");
   }
}
