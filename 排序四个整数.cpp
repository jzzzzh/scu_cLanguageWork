
#include <stdio.h>
int main() {
    int n, i;
    scanf("%d", &n);  
    for (i = 0; i < n; i++) {
         int a,b,c,d;
         int x;
         scanf("%d %d %d %d",&a,&b,&c,&d);
         if(a>b)
         {x=a;a=b;b=x;}
         if(a>c)
         {x=a;a=c;c=x;}
         if(a>d)
         {x=a;a=d;d=x;}
         if(b>c)
         {x=b;b=c;c=x;}
         if(b>d)
         {x=b;b=d;d=x;}
         if(c>d)
         {x=c;c=d;d=x;}
         printf("%d %d %d %d\n",a,b,c,d);
      
    }
   
    return 0;
}
