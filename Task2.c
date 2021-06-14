#include<stdio.h>
int a[100];
int main(){
	int i, j, n, k, dem = 0;
	printf("nhap so phan tu cua mang:");
	scanf("%d", &n);
	for (i = 0; i < n; i++){
		printf("a[%d]=", i + 1);
		scanf("%d", &a[i]);
	}
	printf("mang da nhap:\n");
	for (i = 0; i < n; i++) {
		printf(" %d ", a[i]);
	}
	for (i = 1; i < n; i++){
		for (j = 0; j < i; j++){
			if (a[i] == a[j]){
				for (k = i; k < n; k++) {
					a[k] = a[k + 1];
				}
				n--;
			}
		}
	}
	printf("\nmang sau khi xoa la:\n");
	for (i = 0; i < n; i++) {
		printf(" %d ", a[i]);
	}
 return 0;
}