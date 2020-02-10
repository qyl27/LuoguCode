#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

string ToLower(string str) {
    string result = string(str);
    for (int i = 0; i < result.size(); i++)
    {
        result[i] = tolower(result[i]);
    }
    return result;
}

int main() {
    string word = "";
    string article = "";

    getline(cin, word);
    getline(cin, article);

    word = ToLower(word);
    article = ToLower(article);
    
    word = ' ' + word + ' ';
    article = ' ' + article + ' ';

    int count = 0;
    size_t found = article.find(word);
    size_t first = found;
    while (found != string::npos)
    {
        count++;
        found = article.find(word, found + word.size());
    }

    if (count == 0)
    {
        cout << "-1" << endl;
    }
    else
    {
        printf("%d %d", count, first);
    }
    
    return 0;
}
