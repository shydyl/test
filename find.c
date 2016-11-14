#include <stdio.h>
char strstr(char *str1,char *str2);
int main(int argc, char const *argv[])
{
	// char *a,*b;
	// unsigned long int i;
	// char c[65535];
	// char d[65535];
	// for (i = 0;(c[i]=getchar())!=EOF; ++i);
	// for (i = 0;(d[i]=getchar())!=EOF; ++i);
	char p;
	char c[]="wwwqwwww";
	char d[]="qw";
	p=strstr(c,d);
	if (p){
		printf("%d\n", p);
	}
	return 0;
}

char strstr(char *str1,char *str2)
{
	unsigned long int n=0;
	char *cp=str1;
	char *s1,*s2;
	if (!*str2){
		return 0;
	}
	while(*cp){
		s1=cp;
		s2=str2;
		for (;*s1!='\0'&&*s2!='\0'&&(*s1-*s2)!=0; ++n){
			s1++;s2++;
		}		
		if (!*s2){
			return n;
		
		}
		cp++;
	}
	return 0;
}