#include<iostream>
#include<cstring>

using namespace std;

int main()
{
    string str;

    cout<<"Enter your Name:";
    getline(cin,str);

    int i=0;
    int j=0;
    int len=0;

    while(str[len]!='\0')
    {
        len++;
    }
    for(i=0;i<len;i++)
     {
        if(j%2==1)
        {
            if(str[i]>65 && str[i]<90)
            str[i]+=32;
        }
        else
        {
            if(str[i]>95 && str[i]<122)
            str[i]-=32;
        }
        j++;
    }

    cout<<"After Converting : "<<str<<endl;
}