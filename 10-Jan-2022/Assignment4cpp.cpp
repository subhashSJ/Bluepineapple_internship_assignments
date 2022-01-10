/* Write a program for conversion of numbers to words for an american counting system.*/
 
#include<iostream>
#include<string>

using namespace std;

void numberToWords(int num){
	int numArray[100];
	int i=0;
	
	while(num>0){
		numArray[i] = num%10;
		num = num/10;
		i++;
	}
	
	if(i == 2){
		switch(num){
		case 11: cout<<"One";
				break;
		case 2: cout<<"Two";
				break;
		case 3: cout<<"Three";
				break;
		case 4: cout<<"Four";
				break;
		case 5: cout<<"Five";
				break;
		case 6: cout<<"Six";
				break;
		case 7: cout<<"Seven";
				break;
		case 8: cout<<"Eight";
				break;
		case 9: cout<<"Nine";
				break;
		case 10: cout<<"Ten";
				break;
	}	
	}
	
	switch(numArray[0]){
		case 1: cout<<"One";
				break;
		case 2: cout<<"Two";
				break;
		case 3: cout<<"Three";
				break;
		case 4: cout<<"Four";
				break;
		case 5: cout<<"Five";
				break;
		case 6: cout<<"Six";
				break;
		case 7: cout<<"Seven";
				break;
		case 8: cout<<"Eight";
				break;
		case 9: cout<<"Nine";
				break;
		case 10: cout<<"Ten";
				break;
	}	
	
	switch(numArray[1]){
		case 2: cout<<"Two";
				break;
		case 3: cout<<"Three";
				break;
		case 4: cout<<"Four";
				break;
		case 5: cout<<"Five";
				break;
		case 6: cout<<"Six";
				break;
		case 7: cout<<"Seven";
				break;
		case 8: cout<<"Eight";
				break;
		case 9: cout<<"Nine";
				break;
		case 10: cout<<"Ten";
				break;
	}	
	
	
	switch(i){
		case 3: cout<<"Hundred ";
				break;
		case 
	}
	
		
}
int main(){
	int num;
	char choice;
	
	do{
		cout<<"Enter an integer : ";
		cin>>num;
		
		cout<<num<<" : ";
		numberToWords(num);
		cout<<endl;
		
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		
	}while(choice == 'Y' || choice=='y');
return 0;	
}
 
