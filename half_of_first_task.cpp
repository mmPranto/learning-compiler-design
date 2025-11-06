#include<bits/stdc++.h>
using namespace std;
string c;

bool isNum()
{
    cout<<"Enter the number : ";
    string e;
    cin>>e;
    for(int i=0;i<e.length();i++)
    {
        if(e[i]>47 && e[i]<58)
            return true;
        else
            return false;
    }
}

void operat()
{
    cout<<"Enter the equation: ";
    string s3;
    cin.ignore();
    getline(cin,s3);
    int cnt=0;
    for(int i=0;i<s3.length();i++)
    {
        if(s3[i]=='+' || s3[i]=='-' || s3[i]=='*' || s3[i]=='/' || s3[i]=='%' || s3[i]=='=')
        {
            cnt+=1;
            cout<<"Operator"<<cnt<<": "<<s3[i]<<endl;
        }
    }

}

void opt()
{
    cout<<"Enter the line : ";
    string d;
    cin>>d;
    int cnt=0;
    for(int i=0;i<2;i++)
    {
        if(d[i]==47 && d[i+1]==47)
        {
            cout<<"//Single Line Comment"<<endl;
            break;
        }
        else if(d[i]==47 && d[i+1]==42)
        {
            cout<<"/* Multiple Line Comment"<<endl;
            cout<<"     */"<<endl;
            break;

        }
        else
        {
            cout<<"No Comment"<<endl;
            break;
        }
    }
}

bool dictionary(string c)
{

    string b[6] = {"int","float","double","bool","include","main"};
    for(int i=0;i<5;i++)
    {
        if(b[i]==c)
        return false;
    }
    return true;
}

bool isCorrect()
{
    cin>>c;
    bool d= dictionary(c);
    if(d==false)
        return false;
    else
    {
        if((c[0]>64 && c[0]<91) || (c[0]>96 && c[0]<123) || (c[0]==95)) 
        {
            for(int i=1;i<c.length();i++)
            {
                if((c[i]>64 && c[i]<91) || (c[i]>96 && c[i]<123) || (c[i]==95) || (c[i]>47 && c[i] <58))
                    continue;
                else
                    return false;
            }
        }
        else
            return false;
    }
    return true;
}


int main()
{

     


    return 0;
}