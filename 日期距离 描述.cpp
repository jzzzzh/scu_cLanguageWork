//need change
#include <iostream>
#include <cstdio>
using namespace std;
int find(int y, int m, int d)
{
    int day = 0;
    const int monthdate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    for (int i = 0; i < m-1; i++)
    {
        day += monthdate[i];
    }
    if (m % 4 == 0 && m > 2)
        day += 1;
    day += d;
    return day;
}
int main(void)
{
    const string s[12] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const int yeardate = 365;
    const int monthdate[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int a, b, c;
    scanf("%d/%d/%d", &a, &b, &c);
    //01/02/03  (2001.02.03 || 2003.01.02)
    if (a > 12 || a == 0 || a == c||((b == 2 && c == 29 && a % 4 != 0)))//19/02/07 29/02/29
    {
        cout << s[b - 1];
        printf(" %d, %d\n", c, 2000 + a);
    }
    else if(c > monthdate[b]&&!(a == 2 && b == 29 && c % 4 == 0))//02/2/29
    {
        cout << s[a - 1];
        printf(" %d, %d\n", b, 2000 + c);
    }
    
    else
    {
        int dr = 0;
        int y1 = a;
        int m1 = b;
        int d1 = c;
        int y2 = c;
        int m2 = a;
        int d2 = b;
        if (y1 > y2 || (y1 == y2 && m1 > m2) || (y1 == y2 && m1 == m2 && d1 > d2))
        {
            while (y1 > y2)
            {
                dr += 365;
                if (y2 % 4 == 0)
                    dr += 1;
                y2++;
            }
            cout << dr + find(y1, m1, d1) - find(y2, m2, d2) << endl;
        }
        else
        {
            while (y1 < y2)
            {
                dr += 365;
                if (y1 % 4 == 0)
                    dr += 1;
                y1++;
            }
            cout << dr - find(y1, m1, d1) + find(y2, m2, d2) << endl;
        }
    }
    return 0;
}
