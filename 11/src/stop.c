
#include<stdio.h>

int sub(int value);

int main(int argc, char** argv){

	int val = 0;
	int ret = 0;

	while(1){
		ret = sub(val);
		printf("%d\n", ret);
		if(ret == 100) break;
		val = ret;
	}
	printf("End!");
}

int sub(int value){
	int ret = value + 2;
	return ret;
}
