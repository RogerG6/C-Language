# include <stdio.h>
# include <string.h>
int main(void)
{
	char a[20];
	int i;

	scanf("%s", a);
	
	for(i = strlen(a)-1; i >= 0; i--)	
		printf("%c", a[i]);
	
	return 0;
}
