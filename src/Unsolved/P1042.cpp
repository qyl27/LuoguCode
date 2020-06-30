#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int win = 0;
    int lose = 0;

    stack<int> competions;

    while (char c = getchar() != 'E')
    {
        if (c == 'w')
        {
            competions.push(1);
        }
        else if (c == 'L')
        {
            competions.push(0);
        }
    }
    
    return 0;
}
