#include <stdio.h>
#include <stdlib.h>
#define size 100

typedef struct{
	int id;
	char name[20];
	int age;
}SinhVien;

int main(){
	SinhVien a[size];
	int n;
	printf("Vui long nhap so luong sinh vien: ");	scanf("%d",&n);
	while(getchar() != '\n');
	
	//Nhap thong tin sinh vien
	for(int i=0;i<n;i++){
		printf("Moi nhap vao thong tin sinh vien thu %d:\n",i+1);

		printf("ID: ");	scanf("%d",&a[i].id);
		while(getchar() != '\n');
		
		printf("NAME: ");	gets(a[i].name);
		
		printf("AGE: ");	scanf("%d",&a[i].age);
		while(getchar() != '\n');
	}
	
	//Them thong tin sinh vien vao file
	FILE *f = fopen("students.txt","w");
	fprintf(f,"%-5s%-20s%-2s\n","ID","NAME","AGE");
	for(int i=0;i<n;i++){
		fprintf(f,"%-5d%-20s%-2d\n",a[i].id,a[i].name,a[i].age);
	}
	printf("Them sinh vien vao file thanh cong!!!");
	fclose(f);
}
