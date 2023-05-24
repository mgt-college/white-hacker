#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main(int argc, char **argv) {
	struct tm tm;
	
	do{
		puts("wait...");
		sleep(1);
		time_t t = time(NULL);
		localtime_r(&t, &tm);
	}while(tm.tm_sec % 10 != 0);

	puts("Go!");

	return 0;
}
