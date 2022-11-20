#include <stdio.h>
#include <math.h>

int main(void) {

/* Declare variables */
   int N=12, i; //Used to compute distances for Q3
   float a=0.0, b_deg=60.0; //Mathematics functions are calculated in radians, so pi/3 must be converted
   float b_rad, area, mult_rad;

   /*Convert b_deg=pi/3 to radians */
   b_rad=(M_PI * b_deg)/180.0;
   printf("pi/3 in Radians = %f\n", b_rad);


/* Get the first part of the sum tan(0) + tan(pi/3) */
   area=tan(a)+tan(b_rad);

/* Create a loop that calculates the area from x1 -> x11  0->pi/3. */
   for (i=5; i<60; i=i5) {
     area=area+2*tan((M_PI*i)/180.0);
   }

  //Multiply partial area by (pi/3)/(2*12) (but must be converted to radians)
  mult_rad=(M_PI*((b_deg)/(2*N)))/180.0;
  area=mult_rad*area;

  printf("Approximated=%f, Exact=%f\n", area, log(2.0));

   return 0;
}
