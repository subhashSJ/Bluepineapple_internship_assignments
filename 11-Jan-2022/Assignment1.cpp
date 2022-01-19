/* Check whether given string is palindrome */

#include<iostream>
#include<string>

using namespace std;

#define size 100

bool isPalindrome(char arr[]){
	int i=0;
	int k;
	while(arr[i] != '\0'){
		i++;
	}
	
	k=i-1;
	
	for(int j=0; j<=(i/2)+1; j++){
		
		if(!isalpha(arr[j]) && !isdigit(arr[j])){
			continue;
		}
		
		if(!isalpha(arr[k]) && !isdigit(arr[k])){
			j--;
			k--;
			continue;
		}
		
		if(isdigit(arr[j]) || isdigit(arr[k])){
			if(arr[j] != arr[k--])
				return false;
			else
				continue;	
		}
		
		if(tolower(arr[j]) != tolower(arr[k--]))
			return false;
	}
	
return true;	
}

int main(){
	char arr[size];
	char choice;
	
	do{
		
		cout<<"Enter a string : ";
		
		cin.getline (arr, size);
		
		if(isPalindrome(arr)){
			cout<<"`"<<arr<<"`"<<" is a palindrome.";
		}else{
			cout<<"`"<<arr<<"`"<<" is not a palindrome.";
		}
		cout<<endl<<endl;
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		cin.ignore();
		
	}while(choice == 'Y' || choice=='y');
	
return 0;	
}
