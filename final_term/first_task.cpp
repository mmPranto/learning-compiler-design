#include <iostream>

using namespace std;

bool fun_1()
{
    cout<<"Enter the string:";
    string a;
    getline(cin,a);
    if(a.empty())
        return true;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]!='a')
            return false;
    }
    return true;
}

bool fun_2()
{
    cout<<"Enter the string:";
    string b;
    getline(cin,b);
    if(b.empty())
        return false;
    else if(b.length()==1)
    {
        if(b[0]=='a' || b[0]=='b')
            return true;
    }
    else
        return false;

}

bool fun_3()
{
    cout<<"Enter the string:";
    string c;
    getline(cin,c);
    if(c.empty())
        return true;
    for(int i=0;i<c.length();i++)
    {
        if(c[i]!='a'&& c[i]!='b')
            return false;
    }
    return true;
}

bool fun_4()
{
    cout<<"Enter the string:";
    string d;
    getline(cin,d);
    if(d.empty())
        return false;
    if(d[0]!='c')
    {
        for(int i=0;i<d.length();i++)
        {
            if(d[i]=='a' || d[i]=='b')
                continue;
            else if(d[i]=='c')
            {
                if((i+4)!=d.length())
                    return false;
                else
                {
                    if((d[i+1]=='a'||d[i+1]=='b')&&((d[i+2]=='a'&&d[i+2]=='a')||(d[i+2]=='b'&&d[i+2]=='b')))
                        return true;
                    else
                        return false;
                }
            }
            else
                return false;
        }
    }
    else if(d[0]=='c')
    {
        if(d.length()!=4)
            return false;
        else
        {
            if(d[1]!='a' && d[1]!='b')
                return false;
            if((d[2]=='b' && d[3]=='b')||(d[2]=='a' && d[3]=='a'))
                return true;
            else
                return false;

        }


    }
    else
        return false;

}


int main()
{
    while(true)
    {
        cout<<"Please Choose anyone:"<<endl;
        cout<<"1. R.E = a*"<<endl;
        cout<<"2. R.E = (a+b)"<<endl;
        cout<<"3. R.E = (a+b)*"<<endl;
        cout<<"4. R.E = (a+b)*c(a+b)(aa+bb)"<<endl;
        cout<<"0. Exit"<<endl;
        char n;
        cout<<">";
        cin>>n;
        cin.ignore();
        if(n=='1')
        {
            if(fun_1())
                cout<<"Correct"<<endl;
            else
                cout<<"Wrong"<<endl;
        }
        else if(n=='2')
        {
            if(fun_2())
                cout<<"Correct"<<endl;
            else
                cout<<"Wrong"<<endl;
        }
        else if(n=='3')
        {
            if(fun_3())
                cout<<"Correct"<<endl;
            else
                cout<<"Wrong"<<endl;
        }
        else if(n=='4')
        {
            if(fun_4())
                cout<<"Correct"<<endl;
            else
                cout<<"Wrong"<<endl;
        }
        else if(n=='0')
            break;
        else
            cout<<"Please enter valid number 0 to 4"<<endl;
    }
}
