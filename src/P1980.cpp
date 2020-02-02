#include <stdio.h>
#include "string"
#include "sstream"

using namespace std;

int main() {
    int max = 0;
    char num = '\0';

    scanf("%d %c", &max, &num);

    string nums = "";
    int count = 0;

    for (int i = 0; i < max; i++)
    {
        string s = "";
        stringstream ss;
        ss << (i + 1);
        ss >> s;
        nums.append(s);
    }

    for (string::size_type i = 0; i < nums.size(); i++)
    {
        if (nums[i] == num)
        {
            count++;
        }
    }
    
    printf("%d", count);

    return 0;
}
