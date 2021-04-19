#include<stdio.h>
int main(){
	double x,y;
	printf("Nhap gia tri x va y lan luot:\n");
	scanf("%d %d",&x,&y);
	if (x>y) {printf("x>y\n");}
	else if (x=y) {printf("x=y\n");}
	else if(x<y) {printf("x<y\n");};
}
