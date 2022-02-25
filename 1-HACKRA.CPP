#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<conio.h>
int main()
{    clrscr();
	char s[100];
	scanf("%[^\n]%*c", &s);

	printf("Hello, World! \n");
	printf("%s", s);
	      getch();
	return 0;
}
