/*function demo within c*/

int main() { /*declare main function*/
 int a = 5; /*initilze int var a with val 5*/
 int b = 10; /*initlze int var with val 10*/
 int c; /*declare c var*/

 c = add(a, b); /*assign c return val of add function with a and b as args*/

 printf("Added values = %d", c); /*print formatted output with c as dec value*/


 return 0;
}

int add(int first, int second) { /*define function add taking two int params*/

 return first + second; /*return added params*/
}