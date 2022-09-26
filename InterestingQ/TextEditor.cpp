#include<iostream>
# include<fstream>
#include<string>
using namespace std;
int main()
{
	int var1;
    cout<<"************* WELCOME TO MY TEXT EDITOR *************"<<endl;
	cout<<"press 1 for write file"<<endl;
	cout<<"press 2 for read file"<<endl;
	
	cin>>var1;
	if (var1==1)
	{
	
    cout<<"your choice write file "<<endl;
	ofstream out ("simple.txt");//<----------- Enter your file name here 
	string sentance;
	cout<<"Enter your content"<<endl<<endl;
	cin>>sentance;
	out<<sentance;
	cout<<" \n Your file save successfully...... "<<endl;
	out.close();
}
	
else if(var1==2)
{

	cout<<"your choice read file "<<endl<<endl;
	string st2;
    ifstream in ("simple.txt");
    while(in.eof()==0)
    {
	getline(in,st2);
	cout<<st2;
	}
	in.close();
}
else
{
	cout<<"invaild input"<<endl;
}
 

cout<<"\n \n \n \t Thanks for using"<<endl;


	
	return 0;
}