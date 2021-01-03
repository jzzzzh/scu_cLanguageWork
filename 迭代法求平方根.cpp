#include <stdio.h>
#include <math.h>
double abc(int a, double xn)
{
	double b=(double)0.5*(xn+(double)a/xn); //1/2(Xn+a/Xn)
	return b;
}
int main() {

    int n, i;

    scanf("%d", &n);  
	
    for (i = 0; i < n; i++) {

        int a;
        scanf("%d", &a);
		if(a<0)
		{
		printf("error\n");
		continue;
		}
		double ans,xn,xn1;
		xn = a/2;
		xn1 = abc(a,xn);
		while(xn-xn1 >pow(10,-5) || xn-xn1<pow(-10,-5))
		{
			xn = xn1;
			xn1 = abc(a,xn);
		 } 
   	    printf("%.5lf\n",xn);
    }

   

    return 0;

}
