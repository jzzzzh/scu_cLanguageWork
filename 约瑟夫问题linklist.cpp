#include<iostream>
#include<cstdlib>
using namespace std;
typedef struct link{
	int flag;
	struct link *next;
}link;

int main(void)
{
	int n,start,step;
	cin >> n >> start >> step;
	link *head = (link *)malloc(sizeof(link));
	link *p = head;
	for(int i = 0; i < n-1; i++)
	{
		link *q = (link *)malloc(sizeof(link));
		p->flag = 1;
		p->next = q;
		p = q;
	}
	p->flag = 1;
	p->next = head;
	p = head;
	int m = n;
	
	for(int i = 1; i < start; i++)
	{
		p = p -> next;
	}
	
	while(m != 2)
	{
		int j = 0;
		while(j < step)
		{
			if(p->flag == 1)
			{
				j++;
			}
			if(j < step)
			p = p->next;
		}
		p->flag = 0;
		m--;
	}
	p = head;
	for(int i = 1;i <= n; i++)
	{
		if(p->flag == 1)
		cout << i <<" ";
		p = p->next;
	}
	cout << endl;
}
