#include <stdio.h> /*include standard i/o*/
#include <conio.h> /*include console i/o for reading keyboard inpts*/
#include <string.h> /*include String header*/

int main() { /*define main method*/
 char kc = 0; /*initlze char variable to 0*/
 char key[255]; /*declair String (char array) of max length 255*/

 clrscr(); /*clear DOS CLI screen*/



 while ( kc != 0x1b ) { /*start while loop with condition kc != hex for esc*/

 if (kbhit()) { /*checks if keyboard input pressed*/

   kc = getch(); /*store character input via keyboard into kc*/
   /*create switch to print specified statements for W A S D*/

    switch ( kc ) { /*switch statement on kc variable*/
     case 0x77: /*w key*/
      strcpy(key, "W (UP KEY)"); /*copy to String key value*/
      break; /*break out of switch*/
     case 0x61: /*a key*/
      strcpy(key, "A (LEFT KEY)");
      break;
     case 0x73: /*s key*/
      strcpy(key, "S (DOWN KEY)");
      break;
     case 0x64: /*d key*/
      strcpy(key, "D (RIGHT KEY)");
      break;
     default: /*all other keys*/
      sprintf(key, "%02x", kc); /*sends output to variable key*/
      break;

    }

   printf("Key pressed: %s\n", key); /*print hex value of key pressed stored in Key String (char array)*/

  }
 }

 return 0; /*return 0 to signal to OS that application successfully terminated*/
}