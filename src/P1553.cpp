#include <stdio.h>
#include <iostream>
#include <string>
#include <stack>

using namespace std;

string reverse(string str) {
    stack<char> chars;
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        chars.push(str[i]);
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        result += chars.top();
        chars.pop();
    }

    while (result.find('0') == 0)
    {
        result.erase(0, 1);
    }

    if (result == "")
    {
        result = "0";
    }
    return result;
}

string reverseDecimal(string str) {
stack<char> chars;
    string result = "";
    for (int i = 0; i < str.length(); i++)
    {
        chars.push(str[i]);
    }
    
    for (int i = 0; i < str.size(); i++)
    {
        result += chars.top();
        chars.pop();
    }

    while (result.find('0') == 0)
    {
        result.erase(0, 1);
    }

    if (result != "")
    {
        while (result.rfind('0') == (result.length() - 1))
        {
            result.erase(result.length() - 1, 1);
        }
    }

    if (result == "")
    {
        result = "0";
    }
    return result;
}

int main() {
    string num = "";
    cin >> num;

    int signLocation = 0;
    bool isDecimal = false;
    bool isFraction = false;
    bool isPercentage = false;

    for (int i = 0; i < num.length(); i++)
    {
        if (num[i] == '.')
        {
            isDecimal = true;
            signLocation = i;
            break;
        }
        else if (num[i] == '/')
        {
            isFraction = true;
            signLocation = i;
            break;
        }
        else if (num[i] == '%')
        {
            isPercentage = true;
            signLocation = i;
            break;
        }
    }

    string result = "";
    if (isDecimal)
    {
        result = reverse(num.substr(0, signLocation)) + "."
                 + reverseDecimal(num.substr(signLocation + 1, num.length() - signLocation));
    }
    else if (isFraction)
    {
        result = reverse(num.substr(0, signLocation)) + "/"
                 + reverse(num.substr(signLocation + 1, num.length() - signLocation));
    }
    else if (isPercentage)
    {
        result = reverse(num.substr(0, signLocation)) + "%";
    }
    else
    {
        result = reverse(num);
    }
    
    cout << result << endl;
    return 0;
}
