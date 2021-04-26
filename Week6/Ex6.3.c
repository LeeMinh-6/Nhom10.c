#include<stdio.h>
int main(){
	int age;
	printf("Nhap so tuoi vao may\n");
	scanf("%d",&age);
	if(age<0)
		printf("Loi. So tuoi phai tu 0\n");
	else if(age<18)
		printf("You are child\n");
	else if(age<65)
		printf("You are adult\n");
	else
		printf("You are senior citizen\n");
}
