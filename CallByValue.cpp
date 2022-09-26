#include<iostream>
void swap(int x, int y);
using namespace std;
int main()
{
   int a=20,b=10;
   
   swap(a,b);
   
   cout<<"values of a and b after swapping " <<a<< "," <<b<< " respectively."<<endl;
}
void swap(int x, int y)
{
  int t=x;
      x=y;
      y=t;  
}
