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

float average()
{
    int si;
    cout<<"Enter the size of array : ";
    cin>>si;
    int arr[si];
    int sum=0;
    int cnt=0;
    cout<<"Enter the values of array : ";
    for(int i=0;i<si;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<si;i++)
    {
        sum=sum+arr[i];
        cnt+=1;
    }
    float avg=(float)sum/(float)cnt;
    return avg;
}

int max()
{
    cout<<"Enter the size of array:";
    int si;
    cin>>si;
    int arr[si];
    cout<<"Enter the values of array:";
    for(int i=0;i<si;i++)
    {
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(int i=0;i<si;i++)
    {
        if (arr[i]>mx)
        {
            mx=arr[i];
        }
    }
    return mx;
}
int min()
{
    cout<<"Enter the size of array:";
    int si;
    cin>>si;
    int arr[si];
    cout<<"Enter the values of array:";
    for(int i=0;i<si;i++)
    {
        cin>>arr[i];
    }
    int mn=INT_MAX;
    for(int i=0;i<si;i++)
    {
        if (arr[i]<mn)
        {
            mn=arr[i];
        }
    }
    return mn;
}

string abc()
{
    string s1,s2;
    cout<<"Enter First Name: ";
    cin>>s1;
    cout<<"Enter 2nd Name: ";
    cin>>s2;

    s1=s1+" "+s2;
    return s1;
}

int main()
{
    while(true)
    {
        cout<<" Which program do you want to run?"<<endl;
        cout<<"1. Write a program to determine whether the Given Input is Numeric Constant or Not. e.g. (if 100, 991, 1810 etc are given as an input , then the program says “numeric constant”, or if we take input as “ABCD”, “A1B2”, then the program will say that this is “not numeric”)."<<endl;
        cout<<"2. Write a program to determine whether the Given Input is Operators or Not. (Arithmetic Operators +, -, *, /, %, =)"<<endl;
        cout<<" e.g., 2+3=5"<<endl;
        cout<<" Ans:"<<endl;
        cout<<" operator1:  +"<<endl;
        cout<<" operator2:  ="<<endl;
        cout<<"3.	Write a program to determine whether the Given Input is Comment line(s) or Not."<<endl;
        cout<<" e.g."<<endl;
        cout<<" //single line comment"<<endl;
        cout<<endl;
        cout<<" /* multiple line"<<endl;
        cout<<" Comment */"<<endl;
        cout<<endl;
        cout<<"4. Write a program to determine whether the Given Input is Identifier or Not. []"<<endl;
        cout<<" Conditions/convention to detect identifier"<<endl;
        cout<<"a) The first character should be alphabet characters/underscore (A-Z, a-z, _)"<<endl;
        cout<<"b) From the Second character should be alpha-numeric characters/underscore (A-Z, a-z, _ , 0-9)"<<endl;
        cout<<endl;
        cout<<endl;
        cout<<"5. Find the average value of the elements of an array."<<endl;
        cout<<"6. Find the minimum and maximum value of the elements of an array."<<endl;
        cout<<"7. Take two strings as your first and last name, then concatenate the two strings together so that "<<endl;
        cout<<"you can find your full name:"<<endl;
        cout<<"e.g. Firstr name = XXX and lastname  = YY "<<endl;
        cout<<" full namae = XX YY"<<endl;
        cout<<"0. to Close the program"<<endl;
        int a;
        cin>>a;
        
        if(a==1)
        {
            bool x=isNum();
            if(x==true)
                cout<<"This is nummeric constant"<<endl;
            else
                cout<<"This is not numeric constant"<<endl;
        }

        else if(a==2)
        {
            operat();
        }

        else if(a==3)
        {
            opt();
        }

        else if(a==4)
        {
            bool o= isCorrect();
            if(o==true)
                cout<<"Given input is identifier."<<endl;
            else
                cout<<"Given input is not a identifier."<<endl;
        }

        else if(a==5)
        {
            float f=average();
            cout<<"The average value is : "<<f<<endl;
        }

        else if(a==6)
        {
            cout<<"1. Max"<<endl;
            cout<<"2. Min"<<endl;
            int g;
            cin>>g;
            if(g==1)
            {
                int h=max();
                cout<<h<<" is the max value among all values."<<endl;
            }
            else if(g==2)
            {
                int l=min();
                cout<<l<<" is min value among all values."<<endl;
            }
            else
            {
                cout<<"You enter wrong button please start again from begining";
            }
        }
        
        else if(a==7)
        {
            string m=abc();
            cout<<m<<endl;
        }
        else if (a==0)
        {
            break;
        }

        else
        {
            cout<<"Please insert the value from 0 to 7"<<endl;
        }

    }
     


    return 0;
}