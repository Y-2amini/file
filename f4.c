#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *file = fopen("f3.txt","r");
	char line[200];
	fgets(line,200,file);
	printf("%s",line);
	fclose(file);
	return 0;
}
