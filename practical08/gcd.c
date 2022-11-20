// Iterative and recursive version of Euclid's Algorithm
#include <stdio.h>
#include <stdlib.h>

int iterGCD(int a, int b);
int recGCD(int a, int b);

int main()
{
   int a, b, ierror;

/*
   printf("Please input two positive integers:\n");
   ierror=scanf("%d %d", &a, &b);
   if(ierror != 2)
   {
      printf("Error: Please enter two positive integers:\n");
      return 1;
   }

   if(a<=0 || b<=0)
   {
      printf("These numbers are not positive!\n");
      return 1;
   }
*/

   //Generate random positive intergers between 1 and 12
   srand(time(NULL));
   a=(rand()%12)+1;
   b=(rand()%12)+1;
   int x=(rand()/RAND_MAX);


   //Call the functions
   printf("IterGCD(%d, %d)=%d\n",a, b, iterGCD(a,b));
   printf("recGCD(%d, %d)=%d\n",a, b, recGCD(a,b));


   return 0;
}

int iterGCD(int a, int b)
{
   int temp;
   while(b != 0)
   {
      temp = b;
      b = a%b;
      a = temp;
   }
   return a;
}

int recGCD(int a, int b)
{
   if(b == 0)
   {
      return a;
   }
   else
   {
      return(recGCD(b, a%b));
   }
}
