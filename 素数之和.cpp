#include<iostream>
using namespace std;
bool IsPrime[10000001];
void set(bool IsPrime[], int range);
int main(void)
{
	int range;
	cin >> range;
	bool flag;
	unsigned long long sum = 0;
	set(IsPrime, range);
	for(int i = 2; i <= range; i++)
	{
		IsPrime[i] == true ? sum += i:1;
	}
	cout << sum << endl;

	return 0;
}
void set(bool IsPrime[], int range) 
{
    int i, j;
    for (i = 0; i <= range; ++i)
        IsPrime[i] = true;
    IsPrime[0] = IsPrime[1] = false;
    for (i = 2; i <= range; ++i) {
        if (IsPrime[i]) {
            for (j = 2 * i; j <= range; j += i)
                IsPrime[j]=false;
        }
    }
}
