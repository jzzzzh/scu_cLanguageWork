#include<stdio.h>
#define black_sum 6
#define white_sum 3
#define red_sum 3 
int main(void)
{
	int n;
	scanf("%d", &n);
	for(int i = 0; i < n; i++)
	{
		int num;
		scanf("%d", &num);
		int answer = 0;
		
		for(int i = 0; i<= num &&i <= black_sum; i++)//black
		{
			for(int j = 0 ; j <= num-i && j <= white_sum; j++)//white
			{
				if(num-i-j <= red_sum)
				answer++;
				
			}
		}
		printf("%d\n", answer);
	
	}
	
	return 0;
}
