#include <stdio.h>

int main(){
	FILE *f = fopen("bt01.txt","r");
	char s[100];
	fgets(s,100,f);
	printf("Dong dau tien cua file la: %s",s);
}
