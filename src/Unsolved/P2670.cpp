#include <stdio.h>
#include <iostream>

using namespace std;

int main() {
    int width = 0;
    int height = 0;

    cin >> height >> width;

    char bombs[105][105];
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cin >> bombs[i][j];
        }
    }

    for (int i = 0; i < width; i++)
    {
        for (int j = 0; j < height; j++)
        {
            if (bombs[i][j] == '*')
            {
                continue;
            }
            
            int bombCount = 0;
            for (int k = i - 1; k <= i + 1; k++)
            {
                for (int l = j - 1; l <= j + 1; l++)
                {
                    if (k >= 0 && k < width && l >= 0 && l < height)
                    {
                        if (bombs[k][l] == '*')
                        {
                            bombCount++;
                        }
                    }
                }
            }
            bombs[i][j] = bombCount + '0';
        }
    }

    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < width; j++)
        {
            cout << bombs[i][j];
        }
        if (i != width - 1)
        {
            cout << endl;
        }
    }

    return 0;
}
