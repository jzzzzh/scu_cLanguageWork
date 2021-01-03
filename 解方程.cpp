#include<stdio.h>
#include<math.h>
int main(void) 
{
	int a, b, c;
	double det;
	double x1, x2;
	
	scanf("%d,%d,%d", &a, &b, &c);
	det = (b * b - 4 * a * c);
	if(a == 0 && b== 0 )
	{
	printf("x\n");
	}
	else if(a==0&&b != 0){
	
	printf("%.2lf\n", -1.0*c/b);
}
	else{
		if(det < 0)
		{
			printf("x\n");
		}
		else if (det == 0)
		{
			x1 = 1.0*(-b) / (2 * a);
			printf("%.2lf\n", x1);	
		}
		else if(det > 0)
		{
			x1 = 1.0*(-b + sqrt(det)) / (2 * a);	
			x2 = 1.0*(-b - sqrt(det)) / (2 * a);
			printf("%.2lf %.2lf", x1, x2);
		}
	}
	return 0; 
}
