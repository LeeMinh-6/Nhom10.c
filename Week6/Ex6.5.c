#include<stdio.h>
int main(){
	int my,ur;
	my=1+rand()%10;
	printf("Guess my munber (between 1 and 10):\n");
	scanf("%d",&ur);
	if(ur<my)
		printf("Ban nhap so nho hon rui\n");
	else if(ur>my)
		printf("Ban nhap so to hon rui\n");
	else
		printf("Ban nhap dung rui\n");
	return 0;
}
