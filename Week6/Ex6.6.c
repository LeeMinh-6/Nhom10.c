#include<stdio.h>
int main(){
	int a,b,c;
	printf("Nhap 3 so a,b,c lan luot:\n");
	scanf("%d %d %d",&a,&b,&c);
	if(a<b,a<c)
		printf("So nho nhat la a\n",a);
	else if(b<c,b<a)
		printf("So nho nhat la b\n",b);
	else if(c<a,c<b)
		printf("So nho nhat la c\n",c);
	else
		printf("Khong co 1 so nho nhat\n");
	return 0;
}
