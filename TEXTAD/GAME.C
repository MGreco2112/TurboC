/*create a format for a text adventure*/
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

char new[2] = "\n"; /*create string holding new line for easy appending*/
char outputStr[10] = "";
char name[10] = "";
char inst[10] = "";

char *strInp(char *prompt) { /*returns char array, '*' signifies arr args*/

  printf("%s%s", prompt, new);
  scanf("%s", outputStr);

  return outputStr;
}

int numInp(char *prompt) {
  int outputNum = 0;

  printf("%s%s", prompt, new);
  scanf("%d", &outputNum);

  return outputNum;
}

void waitInp() {
  char key = 0;

  printf("Press 'Enter' to continue...\n");

  while (key != 13) {
    key = getch();
  }
}

void displProm(char *prompt) {
  printf("%s%s", prompt, new);

  waitInp();
}

int main() {
  int instSel = 0;

  clrscr();

  displProm("NeoPort: 2105");

  strcpy(name, strInp("|Net Portal Login|\nEnter your User Name:"));

  printf("Welcome back, %s, loading your Landing Pane%s", name, new);
  displProm("Net Nagivagtion commences\nAnother day of exploring a digital space begins.");

  instSel = numInp("Instrument Selection:\n1) Guitar\n2) Bass\n3) Keys");

  switch (instSel) {
    case 1:
      strcpy(inst, "Guitar");
      break;
    case 2:
      strcpy(inst, "Bass");
      break;
    case 3:
      strcpy(inst, "Keyboard");
      break;
  }

  printf("Character Customization ended, %s selected%s", inst, new);
  displProm("Entering Information Download Stage... Please Standby...");

  clrscr();

  displProm("Light enters your eyes, your room comes back into focus. This is no longer the\nnet...");

  printf("'%s!' A voice calls to you from inside your mind%s", name, new);

  displProm("A tall man with flowing hear, wearing white robes, holds a white Fender\nStratocaster. His image flickers, digitally imposed upon your vision.");

  printf("You ask the man who he is, running antivirus diagnostics on your augments.\n");
  printf("Intrusions into personal augments are rare, but can be devistating to the mind.\n");
  displProm("The projection continues speaking, 'You're attracting attention,\nsomeone's coming and you need to be prepared. Grab your Instrument and get ready!!'");

  clrscr();

  printf("Before you can even question him the floor below you begins to glow.\nA firey pentagram ignites below your feet. You run to your %s and prepare.%s", inst, new);
  printf("As the fire erupts, the man downloads a book to your internal memory.\nGlancing at the contents you see musical notation with words like\n'Attack' and 'Defense'.\n");
  displProm("The fire explodes towards the ceiling,\na silouette of a man is projected against the wall of hot fire.");

  clrscr();

  printf("A 23 year old stands, menacingly, inside the pentagram, holding a microphone.\n");
  printf("His robe aflame at the tale end, spiked gauntlets caked in dried blood\n");
  printf("One tooth, a snaggled fang, pokes out from his top\njaw and descends over his lower lip\n");
  displProm("He gives a Black Metal screech, 'That FUCKIN' hurt, you little shit!\nLet's finish this!'");


  /*TODO
   create basic combat logic to finish out this scene
  */

  return 0;

}