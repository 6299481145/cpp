#include<iostream>
#include<cstring>

using namespace std;

int main()
{
  int i;
  string s1[30];
  //string str;

  cout<<"Enter your String:";
  getline(cin,s1[30]);

  for(i=0; s1[i]!='\0';i++)
  {
    if(s1[i]>'A' && s1[i]<='Z');
    {
        s1[i]=s1[i]+32;
    }
  }
  cout<<"After Converting String is : "<<s1[30]<<endl;
}
// if(str[i]==' ')
       // {
       //   continue;
        //}
