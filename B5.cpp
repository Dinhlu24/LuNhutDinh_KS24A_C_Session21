#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Moi nhap vao so dong ban muon them vao: ");	scanf("%d",&n);
	getchar();
	FILE *f = fopen("bt05.txt","w"); 
	char s[100];
	for(int i=1;i<=n;i++){
		printf("Dong %d: ",i);
		fgets(s,100,stdin);
		fputs(s,f);
	}
	printf("Nhap lieu hoan tat !!!\n");
	fclose(f);
	f = fopen("bt05.txt","r");
	
	printf("Day la noi dung cua %d dong\n",n);
	
	char c = fgetc(f);
	while(c != EOF){
		printf("%c",c);
		c = fgetc(f);
	}
}
