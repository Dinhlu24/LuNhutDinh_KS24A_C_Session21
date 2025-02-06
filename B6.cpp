#include <stdio.h>
#include <stdlib.h>

int main(){
	FILE *f1 = fopen("bt01.txt","r");
	FILE *f2 = fopen("bt06.txt","w");
	
	char c;
	while((c = fgetc(f1)) != EOF){
		fputc(c,f2);
	}
	
	printf("Sao chep du lieu thanh cong");
}
