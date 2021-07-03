#include <stdio.h>
#include <math.h>
float ke(int m,int v){
    return m*v*v/2;
}
int main()
{
    int m,v;
    printf("Nhap gia tri khoi luong va van toc:\n");
    scanf("%d %d",m,v);
    printf("Dong nang la:%d \n",ke);
    return 0;
}
