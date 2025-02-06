#include <stdio.h>

int main(){
	char s[100];
	printf("Moi nhap vao chuoi ki tu: ");	gets(s);
	FILE *f = fopen("bt01.txt","a");
	fprintf(f,"%s",s);
	printf("Them chuoi ki tu vao thanh cong");
	fclose(f);
}
