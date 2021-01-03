#include<stdio.h>
#include<string.h>


int main(){
	int n,i;
	scanf("%d\n",&n);
	for(i=0;i<n;i++){
		char a[20];
		fgets(a,19,stdin);
		for(int k=0;;k++){
			if(a[k]=='\n'){
				a[k]='\0';
				break;
			}
		}
		int len=strlen(a);
//			printf("%s\n",a);
		for(int k=0;k<len;k++){
			if(a[k]=='-'){
				printf("负");
				continue;
			}
			if(len==1&&a[k]=='0')printf("零");      //0元 
			if(a[k]=='0'&&a[k+1]!='0'&&len-1-k!=0&&len-1-k!=4)printf("零");
			if(a[k]=='1')printf("壹");
			if(a[k]=='2')printf("贰");
			if(a[k]=='3')printf("叁");
			if(a[k]=='4')printf("肆");
			if(a[k]=='5')printf("伍");
			if(a[k]=='6')printf("陆");
			if(a[k]=='7')printf("柒");
			if(a[k]=='8')printf("捌"); 
			if(a[k]=='9')printf("玖");
			if((len-1-k==6||len-1-k==2)&&a[k]!='0')printf("佰");
			if((len-1-k==3||len-1-k==7)&&a[k]!='0')printf("仟");
			if((len-1-k==5||len-1-k==1)&&a[k]!='0')printf("拾");
			if(len-1-k==4)printf("万"); 
			if(len-1-k==0)printf("圆\n");
		}
		
	}
	return 0;
}
