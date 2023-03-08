/*function demo within c*/

float divid(float first, float second) { /*define funct outputs float takes floats*/
  float output = first / second; /*create local float var assign first param div by second*/
  return output; /*return output float*/
}

int main() { /*declare main function*/
 int a = 5; /*initilze int var a with val 5*/
 int b = 10; /*initlze int var with val 10*/
 int c; /*declare c var*/
 float d; /*declare float var*/

 clrscr(); /*clear screen*/

 c = add(a, b); /*assign c return val of add function with a and b as args*/

 printf("Added values %d and %d to prod: %d\n", a, b, c); /*print formatted output with c as dec value*/

 c = mult(a, b); /*assign output from mult of a and b to int var c*/

 /*print output a, b, and multiplied result of a and b stored in c*/
 printf("Multiplied values %d and %d to prod: %d\n", a, b, c);

 d = divid(a, b); /*assign output of a divided by b to float var d*/

 /*print values a and b and quotent stored in var d*/
 printf("Divided values %d and %d to prod: %f\n", a, b, d);

 return 0; /*return a 0 to signal that main function has terminated correctly*/
}

int add(int first, int second) { /*define function add taking two int params*/

 return first + second; /*return added params*/
}

int mult(int first, int second) {
 return first * second;
}