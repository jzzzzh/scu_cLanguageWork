#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d", &n);
	
	for(int i = 0; i < n; i++)
	{
	 char s[1000];
	 int a,b,c,d,e;
	 scanf("%d %d %d", &a, &b, &c);
	 e =  a / b;
	 a = a - b * e; 
	 int count = 0;
	 while(count < c)
	 {
	 	a*=10;
	 	d = a / b;
		a = a - d * b;
		s[count]=d; 
	 	count++;
	 }
	 if((a * 10 )/ b >= 5)
	 {
	 	count--;
	 	s[count]=s[count]+1;
	 	while(s[count]==10)
	 	{
	 		s[count] = 0;
	 		s[count-1]=s[count-1]+1;
		 	count-=1;
		 }
	 }
	 if(s[0]==10)
	 {
	 	s[0]=0;
	 	e=e+1;
	 }
	 printf("%d.",e);
	 for(int j = 0; j < c; j++)
	 {
	 	printf("%d", s[j]);
	 }
	 printf("\n");
	}

	return 0;
}
