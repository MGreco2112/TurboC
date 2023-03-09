/*create file that walks user through basic text choices*/
#include <stdio.h> /*include standard i/o header*/
#include <conio.h> /*include console i/o header*/
#include <string.h> /*include string header*/

typedef enum {false, true} bool; /*define type bool and assign possible enum values as true or false*/
/*enum values index from 0 to n, 0 is treated as falsey, 1 as truthy*/

int main() {
 bool choice = false; /*declare bool variable set to false for choices*/
 char input; /*declare char variable for taking user choices*/
 char name[10] = ""; /*declare char arr of max size 10 for storing username*/
 char end[2] = "\n";

 clrscr(); /*clear screen command when program is run*/

 printf("Enter your first name below:%s", end); /*print prompt for input*/
 scanf("%s", name); /*accept keyboard input until white space or enter key*/

 printf("You entered %s as your name.%s", name, end); /*print stored value in name*/

 /*print basic yes or no prompt*/
 printf("Make a selection, enter 'y' or 'n':%s", end);
 input = getch(); /*capture user input as char using getch function*/

 switch (input) { /*open switch statement on input*/
  case 121: /*check for int ascii values of y or n key, assign bool values accordingly*/
   choice = true;
   break;
  case 110:
   choice = false;
   break;
  default:
   printf("Invalid selection, learn to read directions.%s", end);
 }

 if (choice) { /*check bool val of choice, print statements accordingly*/
  printf("%s chose to enter Yes.%s", name, end);
 } else {
  printf("%s chose to enter No.%s", name, end);
 }

 return 0;
}