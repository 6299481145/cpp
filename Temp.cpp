#include<iostream>

using namespace std;

int main()
{
 const int city=2;
 const int day =3;
 int arr[city][day];
 int i,j;
 int max=arr[0][0];
 int m,n,k,r;
 
 for(i=0;i<city;i++)
 {
  for(j=0;j<day;j++)
   {
     cout<<"city "<<i+1<<", "<<"day "<<j+1<<": ";
     cin>>arr[i][j];
   } 
 }
 
 for(i=0;i<city;i++)
 {
   for(j=0;j<day;j++)
   {
      cout<<"city "<<i+1<<" day "<<j+1<<": "<<arr[i][j]<<endl;
   }
 }
 
 for(i=0;i<city;i++)
 {
   for(j=0;j<day;j++)  
   {
     if(max<arr[i][j])
     max=arr[i][j];
     m=i+1;
     n=j+1;
   }
 }
 cout<<"city"<<m<<", day"<<n<<" max= "<<max<<endl;
 
 int min=arr[0][0];
 for(i=0;i<city;i++)
 {
   for(j=0;j<day;j++)  
   {
     if(min>arr[i][j])
     min=arr[i][j];
     k=i+1;
     r=j+1;
   }
 }
 cout<<"city"<<k<<", day"<<r<<" min= "<<min<<endl;
 return 0;
}      
 

