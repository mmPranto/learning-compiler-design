#include<bits/stdc++.h>
using namespace std;

bool keyword(string c)
{
    string b[11]={"int","float","double","include","main","bool","using","namespace","cout","cin","return"};

    for(int i=0;i<11;i++)
    {
        if(b[i]==c)
            return true;
    }
    return false;
}

bool punctuation( string a)
{
    string d[7]={"(",")","{","}",";",",","<"};
    for(int i =0;i<7;i++)
    {
        if(d[i]==a)
            return true;
    }
    return false;
}
bool constant(string e)
{
    for(int i=0;i<e.length();i++)
    {
        if(e[i]>47 && e[i]<58)
            return true;
    }
    if(e[0]==34)
        return true;

    return false;

}

void isCorrect()
{
    ifstream inputFile("sample.txt");
    if(!inputFile.is_open())
        cout<<"Error:  Could not open the file."<<endl;

    string line;
    while(getline(inputFile,line))
    {
        istringstream iss(line);
        string word;
        while(iss>>word)
        {
            if(keyword(word)==true)
                cout<<word<<" : is keyword"<<endl;
            else if(punctuation(word)==true)
                cout<<word<<" : is punctuation"<<endl;
            else if(constant(word)==true)
                cout<<word<<" : is Constant"<<endl;
            else
                cout<<word<<" :is identifier"<<endl;
        }
    }


    inputFile.close();
}

int main()
{
    isCorrect();


    return 0;
}
