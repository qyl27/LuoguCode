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

    bool isInWord = false;
    int inWordLocation = 0;

    int first = 0;
    int count = 0;

    for (int i = 1; i < article.size(); i++)
    {
        if (article[i - 1] == ' '
            && article[i] != ' ')
        {
            isInWord = true;

        }
        else
        {
            isInWord = false;
        }

        if (isInWord)
        {
            if (article[i] == word[inWordLocation])
            {
                if (inWordLocation == word.size())
                {
                    
                }
                else
                {
                    inWordLocation++;
                }
            }
            else
            {
                isInWord = false;
            }
        }
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
