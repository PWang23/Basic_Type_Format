#include <stdio.h>

int main(){
char letter = 'E';
int negNumber = -1;
unsigned int age = 33;

printf("My name begin with %c\n",letter);
printf("Look,I'm negative!-->%d\n",negNumber);
printf("I am %d years old!\n",age);
printf("\t in octal(base 8) = %o\n",age);
printf("\t in hex(base 16) = %x\n",age);

printf("E's numeric value is %d\n",letter);
printf("-1 as hex is %x\n",negNumber);
printf("-1 as an unsigned is %u\n",negNumber);
printf("33 as a letter is %c\n",age);

float p1=3.141592;
double p2=3.14159265258979323;

printf("p1: \t decimal floating point=%f\n",p1);
printf("\t scientific notation=%e\n",p1);
printf("\t 100 pi=%e\n",100*p1);
printf("\t 10 decimal places=%.10f\n",p1);
printf("p2: \t default floating point=%f\n",p2);
printf("\t 10 decimal places=%.10f\n",p2);
}