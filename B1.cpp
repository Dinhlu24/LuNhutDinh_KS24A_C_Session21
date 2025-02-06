#include <stdio.h>

int main(){
	char s[100];
	printf("Moi nhap vao chuoi ki tu bat ki: ");	gets(s);
	FILE *f = fopen("bt01.txt","w");
	fprintf(f,"%s",s);
	printf("Them vao file thanh cong !!!");
	fclose(f);
}
