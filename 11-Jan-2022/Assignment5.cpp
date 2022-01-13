/* Book Management System using maps */

#include<iostream>
#include<map>
#include<cstring>

using namespace std;

#define size 100

void insertABook(map<int, string> &book){
	int bookId;
	char bookName[size];
	
	int flag = 0;
	char choice;
	
	map<int, string> :: iterator itr;
	
	do{
		do{
			flag = 0;
			cout<<"Enter Book Id : ";
			cin>>bookId;
			
			itr = book.find(bookId);
	
	      	if (itr != book.end()){
	      		cout<<"This Id is associated with Other Book."<<endl;
	      		flag = 1;
			  }    	
		}while(flag == 1);
		
		cout<<"Enter Book Name : ";
		cin.ignore();
		cin.getline(bookName, size);
		
		book.insert(pair<int, string> (bookId, bookName));
		
		cout<<endl<<"Book created successfully.";
		cout<<endl<<endl;
			
		cout<<"do you want to continue inserting a book? (y/n) :";
		cin>>choice;
		cin.ignore();
			
	}while(choice == 'Y' || choice=='y');
}

void deleteABook(map<int, string> &book){
	map<int, string> :: iterator itr;

	int bookId;
	
	if(book.empty()){
		cout<<"Book list is empty."<<endl;
	}else{
			cout<<"Enter Book Id : ";
			cin>>bookId;

			if(book.erase(bookId)){
				cout<<"Book with id = "<<bookId<<" deleted successfully."<<endl;
			}else{
				cout<<"No book present with id = "<<bookId<<endl;
			}
	}
	
}

void display(map<int, string> &book){
	map<int, string> :: iterator itr;
	
	if(book.empty()){
		cout<<"Book list is empty."<<endl;
	}else{
		cout<<"Available Books: "<<endl<<endl;
	
		for(itr=book.begin(); itr!=book.end(); itr++){
			cout<<"Book Id: "<<(*itr).first<<"\t"<<"Book Name: "<<(*itr).second<<endl;
		}
	}
	
}

void searchABook(map<int, string> &book){
	map<int, string> :: iterator itr;
	
	int bookId;
	string bookName;
	char choice;
	
	if(book.empty()){
		cout<<"Book list is empty."<<endl;
	}else{
		do{
			cout<<endl<<"Enter Book Id to be searched: ";
			cin>>bookId;
			
			bookName = book[bookId];
			if(bookName != ""){
				cout<<"Book name associated with id = "<<bookId<<" : "<<bookName;
			}else{
				cout<<"Invalid book id!";
			}
			cout<<endl<<endl;
			
			cout<<"do you want to continue searching a book? (y/n) :";
			cin>>choice;
			cin.ignore();
			
		}while(choice == 'Y' || choice=='y');
	}
}

int main(){
	char choice;
		
	int choice1;
	
	map<int, string>book;
	
	do{
		do{
			cout<<"\nChoose one of the following option : \n";
			cout<<"1.Insert A New Book\n";
			cout<<"2.Delete A Book\n";
			cout<<"3.Traverse all books \n";
			cout<<"4.Search a book based on its id\n";
			cout<<"5.Exit\n";
			cin>>choice1;
			if((choice1<1)|| (choice1>5))
				cout<<"Error! Invalid Input.Try Again : \n";
		}while(choice1<1 || choice1>5);
		
		switch(choice1){
			case 1 : {
						insertABook(book);
					break;
				}
			case 2 : {
						deleteABook(book);
					 break;
				}
			case 3 :{
						display(book);
					break;
				}
			case 4 :{
						searchABook(book);
					break;
				}
			case 5 : exit(0);
		}
		
		cout<<endl<<endl;
			
		cout<<"do you want to continue with menu? (y/n) :";
		cin>>choice;
		cin.ignore();
			
	}while(choice == 'Y' || choice=='y');
return 0;	
} 
