/*testing looping structure within C*/

#include <stdio.h> /*import standard i/o for keyboard input*/

int main() {
 int i; /*declare counter variable outside for loop structure*/
 int test = 0; /*declare container variable for user input in do/while loop*/
 clrscr(); /*clear screen*/

 for (i = 0; i < 10; i++) { /*initlze for loop structure with i var*/
  printf("%d\n", i); /*print formatted counter variable in decimal form*/
 }

 do { /*initlze do while loop structure*/
  printf("input a number greater than zero:\n"); /*output prompt for user*/
  scanf("%d", &test); /*parse keyboard input via scanf and save to test var*/

 } while (test <= 0); /*while loop conditional referencing test var*/

 printf("Number input: %d", test); /*output valid value of test in printf*/

 i = 0; /*reassign the value of i to 0*/

 while (i < 10) { /*define while loop condition*/
   printf("%d\n", i); /*print f value of i*/
   i++; /*increment value of i on every iteration*/
 }

 return 0;
}