/* word frequency using maps */

#include<iostream>
#include<map>
#include<cstring>

using namespace std;

typedef map<string, int>wordFreq;

int main(){
	char para[1000];
	char choice;
	string key;
	string str;
	
	string ch;
	
	wordFreq word;
	
	cout<<"Enter a paragraph upto 1000 characters:"<<endl;
	
	cin.getline(para, 1000);
	
	wordFreq :: iterator itr;
	
	for(int i=0; i<strlen(para)+1; i++){
		if(para[i] == ' ' || para[i]== '\0'){
			key = ch;
			itr = word.find(key);

      		if (itr != word.end())
            	itr->second = ++(*itr).second;
			else
				word.insert(pair<string, int> (key, 1));
				
			ch="";
		}else{
			ch+=para[i];
		}
	}
	
	do{
		cout<<"Enter the word : ";
		cin>>str;
		
		itr = word.find(str);
	
	    if (itr != word.end())
	        cout<<"`"<<str<<"`"<<" has occured "<<(*itr).second<<" times.";
		else{
			cout<<"`"<<str<<"`"<<" is not present in the given paragraph.";
		}
		cout<<endl<<endl;
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		cin.ignore();
		
	}while(choice == 'Y' || choice=='y');
	
	
return 0;	
} 
