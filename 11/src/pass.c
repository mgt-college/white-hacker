#include<stdio.h>
#include<string.h>

int main(){
	char pass[256] = "MyPassWD";
	char enter[256] = "";

	do{
		printf("Please enter password!:");
		scanf("%s", enter);
	} while(strcmp(pass, enter) != 0);
	
	puts("OK!");

	return 0;
}
