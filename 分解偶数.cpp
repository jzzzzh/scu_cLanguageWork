#include <iostream>
using namespace std;
void judge(int *IsPrime, int range)
{
    int i, j;
    IsPrime[0] = IsPrime[1] = 1;
    for (i = 2; i <= range; ++i)
    {
        if (IsPrime[i] == 0)
        {
            for (j = 2 * i; j <= range; j += i)
                IsPrime[j] = 1;
        }
    }
    return;
}
int main(void)
{
    int n;
    cin >> n;
    int a[n] = {0};
    judge(a, n);
    int nn = 0;
    for(int i = 3; i <= n/2; i++)
    {
        if(a[i]+a[n-i] == 0)
        {
            cout << i << " " << n-i << endl;
            nn++;
        }
        
    }
    if(nn==0)
    cout <<"ERROR"<< endl;
    return 0;
}
