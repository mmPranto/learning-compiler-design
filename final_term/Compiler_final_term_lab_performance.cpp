#include <bits/stdc++.h>
using namespace std;

int main()
{
    string input;
    cout << "Enter input string (only a and b): ";
    cin >> input;

    char state = 'A';  

    for (char ch : input)
    {
        switch (state)
        {
            case 'A':
                if (ch == 'a') state = 'B';
                else if (ch == 'b') state = 'H';
                break;

            case 'B':
                if (ch == 'a') state = 'C';
                else if (ch == 'b') state = 'D';
                break;

            case 'C':
                if (ch == 'a') state = 'C';
                else if (ch == 'b') state = 'D';
                break;

            case 'D':
                if (ch == 'a') state = 'E';
                else if (ch == 'b') state = 'I';
                break;

            case 'E':
                if (ch == 'a') state = 'F';
                else if (ch == 'b') state = 'G';
                break;

            case 'F':
                if (ch == 'a') state = 'C';
                else if (ch == 'b') state = 'D';
                break;

            case 'G':
                if (ch == 'a') state = 'C';
                else if (ch == 'b') state = 'D';
                break;

            case 'H':
                if (ch == 'a') state = 'B';
                else if (ch == 'b') state = 'H';
                break;

            case 'I':   
                state = 'I';
                break;

            default:
                cout << "Invalid symbol!" << endl;
                return 0;
        }
    }

    if (state == 'B' || state == 'C' || state == 'F' || state == 'G')
        cout << "String is VALID" << endl;
    else
        cout << "String is NOT VALID" << endl;

    return 0;
}
