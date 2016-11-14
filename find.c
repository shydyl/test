#include <stdio.h>
char *strstr(char *str1,char *str2);
int main(int argc, char const *argv[])
{
	char *a,*b;
	unsigned long int i;
	char c[65535];
	char d[65535];
	for (i = 0;(c[i]=getchar())!=EOF; ++i);
	for (i = 0;(d[i]=getchar())!=EOF; ++i);
	char *p;
	p=strstr(c,d);
	if (p){
		printf("%s\n", p);
	}
	return 0;
}

char *strstr(char *str1,char *str2)
{
	char *cp=str1;
	char *s1,*s2;
	if (!*str2){
		return str1;
	}
	while(*cp){
		s1=cp;
		s2=str2;
		while(*s1!='\0'&&*s2!='\0'&&(*s1-*s2)==0){
			s1++,s2++;
		}
		if (!*s2){
			return cp;
		}
		cp++;
	}
	return NULL;
}