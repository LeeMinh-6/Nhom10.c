#include<stdio.h>
int main(){
	double ang;
	printf("Nhap heading vao:\n");
	scanf("%d", &ang);
	if(ang<0.0)
		printf("Loi. Heading chay tu 0.0 den 360.0\n");
	else if(ang<90.0)
		printf("The bearing is north%. If degrees east\n",ang);
	else if(ang<180)
		printf("The bearing is south%. If degrees east\n", 180.0-ang);
	else if(ang<270)
		printf("The bearing is south%. If degrees west\n", ang-180.0);
	else if(ang<=360.0)
		printf("The bearing is north%. If degrees east\n", 360.0-ang);
	else 
		printf("Loi. Heading chay tu 0.0 den 360.0\n");
	return 0;


}
