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
    
    return result;
}

int main() {
    string num = "";
    cin >> num;

    string result = "";
    result = reverse(num);
    
    cout << result << endl;
    return 0;
}
