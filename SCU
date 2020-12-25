#include<iostream>
#include<cmath>
using namespace std;
void judge(int a[], int n)
{
	int a1 = a[0], b1 = a[1], c1 = a[2], r1 = a[3];
	int a2 = a[4], b2 = a[5], c2 = a[6], r2 = a[7];
	int x = a[8] ,y = a[9], z = a[10];
	if(pow((x-a1), 2)+pow((y-b1), 2)+pow((z-c1), 2) - pow(r1,2) == pow((x-a2), 2)+pow((y-b2), 2)+pow((z-c2), 2) - pow(r2,2)||((pow((x-a1), 2)+pow((y-b1), 2)+pow((z-c1), 2) > r1 * r1)&&(pow((x-a2), 2)+pow((y-b2), 2)+pow((z-c2), 2) > r2 * r2)))
	cout << "No" << endl;
	else
	cout << "Yes" << endl; 
	return;
}
int main(void)
{
	//freopen("scuin.txt","r",stdin);
	int turn;
	cin >> turn;
	for(int i = 0 ; i < turn; i++)
	{
		int a[11];
		for(int j = 0; j < 11; j++)
		cin >> a[j];
		judge(a,11);
	}
	//fclose(stdin);
	return 0;
}
