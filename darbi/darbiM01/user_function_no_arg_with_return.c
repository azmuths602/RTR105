#include<stdio.h>

int user_function_5()
 {
 int i_uf;
 printf("Cien. lietotāj, lūdzu, ievadi vienu skaitli (ar 5 jautājumi beigsies): ");
 scanf("%d",&i_uf);
 return i_uf;
 }

void main()
 {
 int i_main, N=5;

 i_main=user_function_5();

 while(i_main!=N)
  {
  printf("Reaģējot uz manas lietotāja funkcijas darbībām, Tu esi ievadījis %d\n",i_main);
  i_main=user_function_5();
  }
 printf("Tā kā esi ievadījis 5, tad jautājumu vairs nav!\n");
 }
