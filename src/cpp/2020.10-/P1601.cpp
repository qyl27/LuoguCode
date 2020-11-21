#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    string aStr;
    string bStr;

    int a[501] = { 0 };
    int b[501] = { 0 };

    int result[502] = { 0 };

    cin >> aStr;
    cin >> bStr;

    for (int i = 0; i < aStr.length(); i++)
    {
        a[i] = aStr[aStr.length() - i - 1] - '0';
    }

    for (int i = 0; i < bStr.length(); i++)
    {
        b[i] = bStr[bStr.length() - i - 1] - '0';
    }
    
    for (int i = 0; i < 501; i++)
    {
        result[i] = a[i] + b [i];
    }

    for (int i = 0; i < 501; i++)
    {
        if (result[i] >= 10)
        {
            result[i] -= 10;
            result[i + 1]++;
        }
    }
    
    bool beforeFirstZero = true;
    for (int i = 501; i >= 0; i--)
    {
        if (result[i] != 0)
        {
            beforeFirstZero = false;
        }

        if (beforeFirstZero)
        {
            continue;
        }
        
        printf("%d", result[i]);
    }

    if (beforeFirstZero)
    {
        printf("0");
    }

    return 0;
}
