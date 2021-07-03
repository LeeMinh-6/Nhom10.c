#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Student.h"
#define MAX 100



void  In(int n) {
	FILE *f; 
	SinhVien sv[MAX];
	f=fopen("SV2021.dat","rb");
	if ( f == NULL){
       printf("Error! opening file");
 
       
       exit(1);
   }
   printf(" \n%40s  %1s\n","Ten Sinh vien","Diem");             
               
    int i=0;             

	for(i=0;i<n;i++) 
    {
    	fread(&sv[i],sizeof(SinhVien),1,f);
        printf(" %39s  %1.1f \n",sv[i].hoten,sv[i].diem);
        
    }
    system("pause");
	fclose(f); 
}

void  Nhap(int n) {
	FILE *f;
	SinhVien sv[MAX];
	if ((f=fopen("SV2021.dat","ab")) == NULL){
       printf("Error! opening file");
 
       
       exit(1);
   }
   int i;
   
   printf("Nhap vao theo mau nhu sau, vi du\n");
       printf("Nguyen Thanh Lam\n");
	   printf("9.0\n");
   for( i=0;i<n;i++)
     { 
       
       printf("Nhap ho ten sinh vien va diem:\n"); 
       fflush(stdin);  gets(sv[i].hoten);
      scanf("%f",&sv[i].diem);fflush(stdin); 
       fwrite(&sv[i],sizeof(SinhVien),1,f);
       }
       fclose(f);
}

int Timkiem(char *ten,int n){
	FILE *f,*f0;
	SinhVien sv[MAX];
	int i; 
	if ((f=fopen("SV2021.dat","rb")) == NULL){
       printf("Error! opening file");
       
       exit(1);
   }
   f0 = fopen("out.txt","w");
 
   if(f0 == NULL)
   {
      printf("Error!");   
      exit(1);             
   }
       for(i=0;i<n;i++) 
    {
    	fread(&sv[i],sizeof(SinhVien),1,f);
    	
		}        
               
                
    for(i=0;i<n;i++) 
    {
        if(strcmp(sv[i].hoten,ten)==0){
          printf(" %40s %5s\n","Ten Sinh vien","Diem");
         printf(" %40s %5.1f \n",sv[i].hoten,sv[i].diem);
		 fprintf(f0,"Ten: %s Diem: %.2f",sv[i].hoten,sv[i].diem); 
		 system("pause");
         return 1; 
		 }
        i++; 
    };  
    fclose(f);
    fclose(f0); 
	return 0; 
    
} 

int main()
{
    int k, chon = 0,i,n;
    
    char ten[40]; 
    SinhVien sv[MAX];
    //code nhap vao file 
    printf("Nhap so luong sinh vien khoi tao trong file: ") ;
    scanf("%d",&k) ;
	FILE *f;
      f=fopen("SV2021.dat","wb");
      printf("Nhap vao theo mau nhu sau, vi du\n");
       printf("Nguyen Thanh Lam\n");
	   printf("8.5\n");
      for(i=0;i<k;i++)
     { 
       
       printf("Nhap ho ten sinh vien va diem:\n"); 
       fflush(stdin);  gets(sv[i].hoten);
       scanf("%f",&sv[i].diem); fflush(stdin); 
       fwrite(&sv[i],sizeof(SinhVien),1,f);
       
    }
       fclose(f);
    //code nhap vao file 
    do
    {
        system("cls");
        printf("\t\t\t ============MENU================================\n");
        printf("\t\t\t |1. Xem danh sach sinh vien                    |\n");
        printf("\t\t\t |2. Nhap them sinh vien                        |\n");
        printf("\t\t\t |3. Tim sinh vien theo ten                     |\n");
        printf("\t\t\t |4. Thoat                                      |\n");
        printf("\t\t\t ================================================\n");
        printf("Ban chon: ");
        scanf("%d", &chon);
        switch(chon)
        {
            case 1:
            	k=n+k;
                In(k); 
                
                break;
            case 2:
            	printf("Nhap so luong sinh vien them vao: ");
                scanf("%d",&n);
                 
                Nhap(n);
                break;
            case 3:
                printf("Nhap vao ten sinh vien can tim: ");
                fflush(stdin);
                gets(ten);
                Timkiem(ten,k);
				if(Timkiem(ten,k)==0){
				
				printf("Khong tim thay \n");system("pause"); }
				break;
            case 4:
                break;
            default:
                printf("Ban chon sai. Moi ban chon lai MENU!\n"); system("pause");
                break;
        }
    }while(chon!=4);
    return 0;
}
