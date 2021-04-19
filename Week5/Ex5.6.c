#include<stdio.h>
int main(){
	int hs,l1,l2,l3,l4,l5,l6,l7,du;
	float tb;
	printf("Nhap so hoc sinh cua 7 lop:\n");
	scanf("%d/n",&hs);
	du=hs%7;
	tb=(float)hs/7;
	printf("So hoc sinh trong lop it nhat:%d\n",hs/7);
	printf("So hoc sinh trong lop nhieu nhat:%d\n",hs/7+1);
	printf("So hoc sinh trung binh tren mot lop la:%.4f\n",tb);
	printf("So lop co so hoc sinh tren trung binh:%d\n",du);
}
