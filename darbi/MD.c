#include <stdio.h>
 
 float pi(float a) {
return a;

}

 int main() {
 	int R=123 ; 
	float num=3.14;
	printf ("%.2f\n", num);
	float K=2*pi(num);
	printf("%.2f\n", K);
	float L=K*R ;
 	printf("Rinka ar raadiusu %d garums ir %.2f m\n", R, L);
 	return 0;
} 
