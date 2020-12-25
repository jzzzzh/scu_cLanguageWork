#include <stdio.h>
#include <string.h>
int a,b,c,d;
char s[100];
char s1[100];
int main(void) {
	while(1)
	{
	fgets(s,sizeof(s),stdin);
	if(strcmp(s,"End of file\n"))
	{
	if (4==sscanf(s,"%d.%d.%d.%d%s",&a,&b,&c,&d,&s1)) {
        if (0<=a && a<=255
         && 0<=b && b<=255
         && 0<=c && c<=255
         && 0<=d && d<=255) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        printf("NO\n");
    }
	}
	else
	{
		break;
	}
    
	}
	
    return 0;
}
