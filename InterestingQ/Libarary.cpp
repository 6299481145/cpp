#include<iostream>
#include<cstring>

using namespace std;

class book_library
{
    private:   
      int bookNumber;
      string bookName;
      string author;
      string publisher;
      float price;
      int copies;
      int copies_issued;
   public:
      void menu();
      void assign();
      void issueBook();
      void returnBook();
      void display();

};

void book_library::menu()
{
	int ch;
	cout<<"What do you want to do:"<<endl;
	cout<<"1. IssueBook"<<endl;
	cout<<"2. ReturnBook"<<endl;
	cout<<"3. Display Detail"<<endl;
	cout<<"4. Exit"<<endl;
	cout<<"Enter you choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
		  issueBook();
			break;
		case 2:
			returnBook();
			break;
		case 3:
			display();
			break;
		case 4:
			exit(0);
		default:
			cout<<"Invalid option!"<<endl;
			menu();
	}
}


int main()
{
  book_library lb;
  lb.assign();
  lb.menu();
  return 0;
}
void book_library::assign()
{

}

void book_library::issueBook()
{

}
void book_library::returnBook()
{

}

void book_library::display()
{

}
