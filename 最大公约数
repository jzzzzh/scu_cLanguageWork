#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	int a;
	
	for(int i = 0; i < n; i++)
	{
		int a,b;
		scanf("%d %d", &a, &b);
		if(a<b){
			int tmp;
			tmp=a;
			a=b;
			b=tmp;
		}
		while(b>0)
		{
			int tmp;
			tmp=b;
			b=a%b;
			a=tmp;
		}
		printf("%d\n", a);
	}
	
	return 0;
}
