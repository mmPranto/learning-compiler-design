#include<bits/stdc++.h>
using namespace std;

bool checkingValidity()
{
    string s;
    getline(cin,s);

    if(s.empty())
        return false;
    if(s[0]=='b')
    {
        for(int i=1;i<s.length();i++)
        {
            if(s[i]=='b')
                continue;
            else if(s[i]=='a')
            {
                for(int z=i+1;z<s.length();z++)
                {
                    if((s[z]=='a')||((s[z]=='b' && s[z+1]=='a')&& (s[z+2]=='a' || s[z+2]=='b')))
                        continue;
                    else
                        return false;
                }
                return true;
            }
            else
                return false;
        }
    }
    else if(s[0]=='a')
    {
        for(int z=1;z<s.length();z++)
        {
            if((s[z]=='a')||((s[z]=='b' && s[z+1]=='a')&&(s[z+2]=='a' || s[z+2]=='b')))
                continue;
            else
                return false;
        }
        return true;
    }
    else
        return false;
}

int main()
{
    int x;
    while(true)
    {
        cout<<"This is the regular Expression : b*a[a+ba(a+b)]*"<<endl;
        cout<<"Enter 1 to execute and 0 to exit."<<endl;
        cout<<">";
        cin>>x;
        if(x==1)
        {
            cin.ignore();
            cout<<"Now enter your string : ";

            bool check=checkingValidity();

            if(check)
                cout<<"Correct"<<endl;
            else
                cout<<"Wrong"<<endl;
        }
        else if(x==0)
            break;
        else
            cout<<"Please enter correct number.. 0 or 1"<<endl;
            continue;
    }


    return 0;
}
