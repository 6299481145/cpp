#include<iostream>
#include "MyLib.cpp"
using namespace std;
//using namespace lib2;
int main()
{
   float r,c;
   cout<<"Enter radius:";
   cin>>r;
   lib1::mylib m1;
   c= 2 * m1.pi() *r;
   cout<<"The circumference using pi as 22/7 is "<<c<<endl;
   lib2::mylib m2;
   c= 2 * m2.pi() *r;
   cout<<"The circumference using pi as 335/113 is "<<c<<endl;
   return 0;
 }
