#include<stdio.h>
int main(){
	int n,a,x,i;
	scanf("%d",&n);
	int count = 0;
	 
	for( i = 0; i < n; i++){
		count = 0;
		scanf("%d",&a);
		if (a<=1){
		printf("no\n");
		continue; 
		}
		for(x = 2; x * x <=a; x++){		
			if(a%x ==0){
				count++;
			}else{
				count==0;
			}
		}
		if (count==0){
			printf("yes\n");
		}else{
			printf("no\n");
		}
	}
	
	return 0;
}
