#include<stdio.h>
int main(){
	float PI=3.1415;
	float r,dtich1,chuvi1,dtich2,thetich2;
	printf("Nhap ban kinh cua duong tron:\n");
	scanf("%f",&r);
	dtich1=2*PI*r*r;
	printf("Dien tich cua duong tron la: S=%f\n", dtich1);	
	chuvi1=2*PI*r;
	printf("Chu ci cua duong tron la: C=%f\n", chuvi1);
	return 0;
}
