#include<bits/stdc++.h>
using namespace std;

bool dictionary(string c)
{
    string b[10]={"int","float","double","include","main","bool","using","namespace","cout","cin"};
    
    for(int i=0;i<10;i++)
    {
        if(b[i]==c)
            return false;
    }
    return true;
}

void isCorrect()
{
    ifstream inputFile("sample.txt");
    if(!inputFile.is_open())
        cout<<"Error:  Could not open the file."<<endl;
    
    string line;

    while(getline(inputFile,line))
    {
        bool h = dictionary(line);
        if(h==true)
            cout<<line<<" : is correct"<<endl;
        else
            cout<<line<<" : is wrong"<<endl;
    }
    inputFile.close();
}

int main()
{
    isCorrect();

    return 0;
}