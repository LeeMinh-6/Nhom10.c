#include<stdio.h>
int main(){
	int ISBN,gia,soluong;
	char tieude[20];
	float vat,youpay;
	printf("Nhap ISBN:\n");
	scanf("%d", &ISBN);
	printf("Nhap gia cuon sach:\n");
	scanf("%d",&gia);
	printf("Nhap so luong sach muon:\n");
	scanf("%d",&soluong);
	vat=gia*soluong*0.04;
	youpay=vat + gia*soluong;
	
}
