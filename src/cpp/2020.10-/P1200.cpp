#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name_comet = "";
    string name_team = "";

    cin >> name_comet;
    cin >> name_team;

    int comet_sum = 1;
    for (int i = 0; i < name_comet.size(); i++)
    {
        comet_sum *= (name_comet[i] - 'A' + 1);
    }

    int team_sum = 1;
    for (int i = 0; i < name_team.size(); i++)
    {
        team_sum *= (name_team[i] - 'A' + 1);
    }

    if ((comet_sum % 47) == (team_sum % 47))
    {
        cout << "GO" << endl;
    }
    else
    {
        cout << "STAY" << endl;
    }
    
    return 0;
}
