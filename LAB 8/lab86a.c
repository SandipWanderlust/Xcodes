#include <stdio.h>
#include <string.h>
int main()
{
	char a[200],b[200];
	printf("Enter a string: ");
	scanf("%[^\n]",a);
	strcpy(b,a);
	printf("The string copied is: %s",b);
	return 0;
}
