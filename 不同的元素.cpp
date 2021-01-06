#include<iostream>
using namespace std;
int main(void)
{
    int n;
    cin >> n;
    int a[n];
    int time = 0;
    for(int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        if(time == 0)
        a[time++] = temp;
        else
        {
            int j;
            for(j = 0; j < time; j++)
            {
                if(a[j] == temp)
                break;
            } 
            if(j == time)
            a[time++] = temp;
        }
    }
    cout << time << endl;
    return 0;
}


