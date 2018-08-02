#include<stdio.h>
int main()
{
	char st[]="welcome";
	FILE *fp;
	fp=fopen("abc.txt","w");
	fprintf(fp,"%s",st);
	fclose(fp);
	return 0;
}
