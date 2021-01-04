#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    abs(a[0]) > abs(a[n-1]) ? cout << a[0] << endl :cout << a[n-1] << endl;
    return 0;
}
