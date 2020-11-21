#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    int const length = 13;
    int const length_without_split = 10;
    string const numbers = "0123456789X";

    char input[length_without_split];
    int count_of_split = 0;

    for (int i = 0; i < length; i++)
    {
        char c = '\0';
        if ((c = getchar()) != '-')
        {
            input[i - count_of_split] = c;
        }
        else
        {
            count_of_split++;
        }
    }

    int sum = 0;
    count_of_split = 0;

    for (int i = 0; i < (length_without_split - 1); i++)
    {
        sum += (input[i] - 48) * (i + 1);
    }
    
    char verify_code = numbers[sum % 11];
    
    if (input[9] == verify_code)
    {
        printf("Right");
    }
    else
    {
        input[9] = verify_code;
        for (int i = 0; i < length_without_split; i++)
        {
            if (i == 1 || i == 4 || i == 9)
            {
                printf("-");
            }
            
            printf("%c", input[i]);
        }
    }

    return 0;
}
