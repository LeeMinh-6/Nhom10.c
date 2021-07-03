#include <stdio.h>

int ToHop(int n, int k)
{
	if (k == 0 || k == n)
		return 1;
	return (ToHop(n - 1, k - 1) + ToHop(n - 1, k));
}

int main()
{
	int n, k, TOHOP.OUT;
	
	printf("Nhap N: ");
	scanf("%d", &n);
	while (n<2 || (n>30));
	{
		printf("Nhap lai N:");
		scanf("%d", &n);
	}
	printf("Nhap K: ");
	scanf("%d", &k);
	while(k<0 || n.k);
	{
		printf("Nhap lai k:");
		scanf("%d", &k);
	}
	
	TOHOP.OUT = ToHop(n, k);
	printf("Ket Qua: %d", KetQua);
	return 0;
}
