#include <stdio.h>
#include <stdlib.h> // Used for the exit function in the code

// Input arguments: f(n-1) and f(n-2)
// On exit, they will have values of f(n) and f(n-1)
void fibonacci(int *a, int *b);

// Start Main code
int main()
{
   int n, i;
   int f1=1, f0=0;

   printf("Enter a positive integer n\n");
   scanf("%d", &n);

   if(n<1)
   {
      printf("The number is not positive\n");
      exit(1);
   }

   printf("The fibonacci sequence is: \n");
   printf("%d, %d, ", f0, f1);


   for(i = 2; i<=n; i++)
   {
      fibonacci(&f1, &f0);
      printf("%d, ", f1);

      if(((i+1)%10) == 0) printf("\n");
   }
   return 0;
}

void fibonacci(int *a, int *b)
{
   int next;

   //*a=f(n-1) and *b=f(n-2)
   next = *a + *b; //next = *a+*b = F(n)

   //*a=f(n), *b=f(n-1)
   *b = *a;
   *a = next;
}
