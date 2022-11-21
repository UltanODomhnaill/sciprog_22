#include <stdio.h>
#include <stdlib.h>

void hanoi(int n, int source, int destination, int interim)
{
   //base cases first
   if(n==1)
   {
      printf("Move disk from %d to %d\n", source, destination);
   }
   else
   {
      hanoi(n-1,source,interim,destination);
      printf("Move disk from %d to %d\n", source, destination);
      hanoi(n-1,interim, destination, source);
   }
}
int main(void)
{
   int h = 8;
   printf("Solution for %d discs\n", h);
   hanoi(h,1,3,2);
   return 0;
}
