#include <stdio.h>

int f(int );
int f2(int , int );

int main()
{
    int s;
    printf("Enter s: ");
    scanf("%d", &s);
    f(s);

    return 0;
}

int f(int s)
{
    int temp = f2(s, 2);
    if(s == 0)
        return 0;
    if(temp == 1)
        f(--s);
    else
    {
        f(s - 1);
        printf("%d, ", s);
    }
}

int f2(int s2, int i)
{
    if(s2 <= 2)
        return (s2 == 2) ? 0 : 1;
    else if(i == s2)
        return 0;
    else if(s2 % i == 0)
        return 1;
    return (f2(s2, i + 1));
}