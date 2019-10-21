#include<stdio.h>
#include <time.h>
void main()
 {
 int number;
 clock_t start_t, end_t, total_t;
 printf("Cienījamais lietotāj, lūdzu, ievadi skaitli: ");
 scanf("%d",&number);
 start_t = clock();
 if((number%2)==0)
  printf("Tavs skaitlis %d ir pāru skaitlis\n",number);
 else
  printf("Tavs skaitlis %d ir nepāru skaitlis\n",number);
 end_t = clock();
// total_t = (double)(end_t - start_t) / CLOCKS_PER_SEC;
 printf("Aprēķins ar %c un ar ==0 aizņema no %ld līdz %ld -> %ld\n",37,start_t,end_t,end_t-start_t);
 start_t = clock();
 if( number%2 )
  printf("Tavs skaitlis %d ir nepāru skaitlis\n",number);
 else
  printf("Tavs skaitlis %d ir pāru skaitlis\n",number);
 end_t = clock();
 printf("Aprēķins ar %c bez ==0 aizņema no %ld līdz %ld -> %ld\n",37,start_t,end_t,end_t-start_t);
 start_t = clock();
 if( (number<<31)>>31 )
  printf("Tavs skaitlis %d ir nepāru skaitlis\n",number);
 else
  printf("Tavs skaitlis %d ir pāru skaitlis\n",number);
 end_t = clock();
 printf("Aprēķins ar << un >> aizņema no %ld līdz %ld -> %ld\n",start_t,end_t,end_t-start_t);
 }
