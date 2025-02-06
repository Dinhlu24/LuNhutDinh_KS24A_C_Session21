#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f = fopen("bt01.txt","r");
	if(f == NULL){
		printf("File khong ton tai !!!");
		exit(1);
	}
	char c = fgetc(f);
	printf("Ki tu dau tien trong file la: %c",c);
}
