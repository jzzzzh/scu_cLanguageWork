#include<stdio.h>
#include<math.h>
void shuixianhua(void)
{
	int a,b;
	if(scanf("%d %d", &a, &b) != 2 ||!( (a>=100)&&(b<=999)&&(a<b)))
	{
		printf("-1");
	}
	else
	{
		int count = 0;
		while(a<=b)
		{
			int a1,a2,a3;
			a1 = a / 100;//bai
			a2 = (a%100)/10;//shi
			a3 = a %10; //ge
			if(a == a1*a1*a1 +a2*a2*a2+a3*a3*a3){
				printf("%d ", a);
				count ++;
			}
			a++;
		}
		if(count == 0)
			printf("-1");
		printf("\n");
		return ;
	}
 }
