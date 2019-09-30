#include<stdio.h>
#include<limits.h>
int main ()
{
int a = 50000;//50,000
int b = 1000000;//1,000,000
int c = a * b;//kaadsirsgaidaamsrezultaats?

printf ("int datu tipa izmers ir: %lu baiti \n", sizeof(int) );
printf (" Apreekjinam a un b reizinaajumu: \n");
printf ("a = %d, b = %d \n", a, b);
printf ("c = a*b = %d*%d = %d \n", a, b, c );//rrezultaatsuzekraana
}