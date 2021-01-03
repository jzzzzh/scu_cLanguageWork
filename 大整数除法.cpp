#include<stdio.h>
#include<string.h>
char n[1000],m[1000];
int a[1000],b[1000];
int s[1000];
int lena,lenb;
void add(int t)
{
    int i,r=0,p;
    s[t]+=1;   
    for(i=0;i<=lena;i++) 
    {
        p=s[i]+r;
        r=p/10;
        s[i]=p%10;
    }
}
int cp()
{
    int i;
    for(i=lena;i>=0;i--)
    {
        if(a[i]>b[i])        
           return 1;
     else if(a[i]<b[i])
           return 2;
 
    }
    return 0;                    
}
int main()
{
 	int turns;
 	scanf("%d", &turns);
    int i,j,z;
    for(int u = 0; u < turns; u++)
    {
		scanf("%s%s",n,m);
       memset(a,0,sizeof(a));
       memset(b,0,sizeof(b));
       memset(s,0,sizeof(s));
       lena=strlen(n);
       lenb=strlen(m);
       for(i=lena-1,j=0;i>=0;i--,j++)            
       a[j]=n[i]-'0';
       for(i=lenb-1,j=lena-lenb;i>=0;i--,j++)   
       b[j]=m[i]-'0';                                                                                                                         
       if(strcmp(n,m)==0)                
       {                                 
           if(n==0)
            printf("0");
           else
           printf("1\n");
           printf("0\n");
           continue;
       }
       else if(strlen(m)>strlen(n)||strcmp(n,m)<0&&strlen(n)==strlen(m)) 
        {                                                    
              printf("0\n");
           continue;
        }
        else
        {
            for(i=lena-lenb;i>=0;i--)               
            {
                while(1)
                {
                    if(cp()==2)                   
                       break;
                       add(i);                     
 
                          for(z=0;z<lena;z++)       
                      {
                             if(a[z]<b[z])
                         {
                             a[z]+=10;
                             a[z+1]--;
                         }
                             a[z]-=b[z];
                      }
 
                }
                 for(j=0;j<lena;j++)             
                    b[j]=b[j+1];
            }
            for(i=lena;i>=0;i--)               
                if(s[i])
                break;
            for(;i>=0;i--)
            printf("%d",s[i]);
            printf("\n");
        }
    }
    return 0;
}
