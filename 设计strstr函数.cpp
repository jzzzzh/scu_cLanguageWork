#include <stdio.h>
#include <string.h>
int mystrstr(char a[], char b[]){
	int flag , len1 = strlen(a) , len2 = strlen(b);
	for(int i = 0 ; i < len1; i ++){
			if(a[i] == b[0]){
				flag = 1 ;
				for(int k = 1 ; k < len2 ; k ++){
					if(a[i + k] != b[k]){
						flag = 0 ;
						break ;
					}
				}	
	if(flag == 1){
		return i;
	}
    }   
}
	return -1;
}


	int main(){
		char m[500], n[500];
		gets(m);
		gets(n);
		printf("%d", mystrstr(m, n));
		return 0;
	}
