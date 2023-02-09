#include<stdio.h>
int main()
{
	FILE * file;
	file = fopen("yam.txt","w");
	fprintf(file,"Hi Good Evening");
	fclose(file);
}
