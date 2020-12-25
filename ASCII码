#include<stdio.h>
int htod(char ch)
{
	const char a[] = "0123456789ABCDEF";
	int i;
	for(i = 0; i < 16; i++)
	{
		if(a[i] == ch)
		break;
	}
	return i;
}
int main(void)
{
//	freopen("in.txt", "r", stdin);
	int n;
	scanf("%d", &n);
	getchar();
	for(int i = 0; i < n; i++)
	{
		char ch = getchar();
		while (ch != '\n')
		{
			int tmp = 0;
			for(int i = 0; i < 2; i++)
			{
				tmp = tmp * 16 + htod(ch);
				ch = getchar();
			}
			printf("%c", tmp);
		}
		printf("\n");
	}
//	fclose(stdin);
	return 0;
}
