#include<stdio.h> 
int main(void)
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int number;
		scanf("%d", &number);
		int answer = 0;
		while(number>0)
		{
			number/=10;
			answer++;
		}
		
		printf("%d\n", answer);
	
	}
	
	return 0;
}
