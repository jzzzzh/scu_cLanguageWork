#include <stdio.h>
int main(void)
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a * a + b * b - c * c == 0 || a * a + c * c == b * b || b * b + c * c == a * a)
        {
            if (a <= 0 ||b <= 0 || c <= 0)
                printf("No\n");
            else
                printf("Yes\n");
        }
        else
        {
            printf("No\n");
        }
    }

    return 0;
}
