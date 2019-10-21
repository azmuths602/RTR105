#include<stdio.h>
#include<string.h>

int main()
{
char name[15];
char name_[15];
char answ[1];

printf("Kā tevi sauc?\n");
scanf("%s",name);

strcpy(name_,name);

printf("Yes / No: ");
scanf("%s", answ);

printf("Sveiks! %s\n", name_);
printf("Tu teici: %s\n", answ);

return 0;
}
