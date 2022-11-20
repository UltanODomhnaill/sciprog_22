#include <stdio.h>

int main()
{
   // Struct declaration
   struct Person
   {
      char namesurname[100];
      int age;
      float height, weight;
   };

   //Struct variables
   struct Person person1={"John Smith", 50, 165.78, 80.5};
   //Pointer to structure
   struct Person *personptr;
   personptr=&person1;

   //Printing
   printf("\nDisplaying sll information:\n");
   printf("Name: %s\n", personptr->namesurname);
   printf("Age=%d, Height=%f, Weight=%f\n\n",person1.age, person1.height, personptr->weight);





   return 0;
}
