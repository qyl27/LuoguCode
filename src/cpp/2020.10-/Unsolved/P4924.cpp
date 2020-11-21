#include <stdio.h>
#include <iostream>

using namespace std;

void rotateClockwise(int** array, int x, int y, int radius)
{
    int** rotated = new int*[radius * 2 + 1];

    for (int i = 0; i < radius * 2 + 1; i++)
    {
        rotated[i] = new int[radius * 2 + 1];
    }

    int k = 0;
    for (int i = x - radius; i < x + radius; i++)
    {
        int l = radius * 2 + 1;
        for (int j = y - radius; j < y + radius; j++)
        {
            rotated[k][l] = array[i][j];
            l--;
        }
        k++;
    }

    for (int i = 0; i < radius * 2 + 1; i++)
    {
        for (int j = 0; j < radius * 2 + 1; j++)
        {
            array[x - radius + i][y - radius + j] = rotated[i][j];
        }
    }
    
    for (int i = 0; i < radius * 2 + 1; i++)
    {
        delete [] rotated[i];
    }
    delete [] rotated;
}

void rotateCounterClockwise(int** array, int x, int y, int radius)
{
    int** rotated = new int*[radius * 2 + 1];

    for (int i = 0; i < radius * 2 + 1; i++)
    {
        rotated[i] = new int[radius * 2 + 1];
    }

    int k = radius * 2 + 1;
    for (int i = x - radius; i < x + radius; i++)
    {
        int l = 0;
        for (int j = y - radius; j < y + radius; j++)
        {
            rotated[k][l] = array[i][j];
            l++;
        }
        k--;
    }

    for (int i = 0; i < radius * 2 + 1; i++)
    {
        for (int j = 0; j < radius * 2 + 1; j++)
        {
            array[x - radius + i][y - radius + j] = rotated[i][j];
        }
    }
    
    for (int i = 0; i < radius * 2 + 1; i++)
    {
        delete [] rotated[i];
    }
    delete [] rotated;
}

int main()
{
    int size = 0;
    int stepsCount = 0;

    cin >> size >> stepsCount;

    int** a = new int*[size];

    for (int i = 0; i < size; i++)
    {
        a[i] = new int[size];
        for (int j = 0; j < size; j++)
        {
            a[i][j] = i * size + j + 1;
        }
    }

    for (int i = 0; i < stepsCount; i++)
    {
        int x = 0;
        int y = 0;
        int radius = 0;
        bool isCounterClockwise = false;
        cin >> x >> y >> radius >> isCounterClockwise;

        if (isCounterClockwise)
        {
            rotateCounterClockwise(a, x, y, radius);
        }
        else
        {
            rotateClockwise(a, x, y, radius);
        }
    }
    
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
