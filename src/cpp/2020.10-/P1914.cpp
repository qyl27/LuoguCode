#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int offset = 0;
    string input = "";

    cin >> offset;
    cin >> input;

    for (int i = 0; i < input.length(); i++)
    {
        int newChar = input[i] + offset;
        if (newChar > 'z')
        {
            printf("%c", newChar - 26);
        }
        else
        {
            printf("%c", newChar);
        }
    }

    return 0;
}
