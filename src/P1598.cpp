#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    string input[4] = { "" };
    int counts[26] = { 0 };
    
    for (int i = 0; i < 4; i++)
    {
        getline(cin, input[i]);
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < input[i].length(); j++)
        {
            if (input[i][j] - 65 == 26)
            {
                continue;
            }
            
            counts[input[i][j] - 65]++;
        }
    }
    
    bool hasNextCharInLine = false;
    for (int i = *max_element(counts, counts + 26); i > 0; i--)
    {
        for (int j = 0; j < 26; j++)
        {
            for (int k = j + 1; k < 26; k++)
            {
                if (counts[k] >= i)
                {
                    hasNextCharInLine = true;
                }
            }

            if (counts[j] >= i)
            {
                printf("*");

                if (hasNextCharInLine)
                {
                    printf(" ");
                }
            }
            else
            {
                if (hasNextCharInLine)
                {
                    printf("  ");
                }
            }
        }
        hasNextCharInLine = false;
        printf("\n");
    }
    
    for (int i = 0; i < 26; i++)
    {
        printf("%c", 'A' + i);
        if (i != 25)
        {
            printf(" ");
        }
    }

    return 0;
}
