#include<stdio.h>
int main()
{
	FILE *fp;
	fp=fopen("C:/Users/prasa/Desktop/S4/sample.txt");
	fprintf(fp,"Welcome");
	fclose(fp);
	return 0;
	}
