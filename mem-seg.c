#include <stdio.h>

int global = 2;
int global_un;

int main()
{
	int i = 0, sum = 0, *p;
	char * string = "Nyat!";
	char temp[1000];
	FILE *fp = fopen("/proc/self/maps", "r");
	
	printf("address of const string %p\n",string);
	printf("address of local variable %p\n",&i);
	printf("address of initialized global %p\n",&global);
	printf("address of uninitialized global variable %p\n",&global_un);
	printf("address of main %p\n",&main);
	while(fgets(temp, sizeof(temp)/sizeof(temp[0]), fp))
	{
		printf("%s",temp);
	}
}
