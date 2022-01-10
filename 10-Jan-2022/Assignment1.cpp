/* Write a program to count the number of digits in a given integer. */ 
#include<iostream>

using namespace std;

int countDigits(int num){
	int count = 0;
	
	while(num>0){
		num = num/10;
		count++;
	}
return count;	
}
int main(){
	int num;
	char choice;
	
	do{
		cout<<"Enter an integer : ";
		cin>>num;
		
		cout<<"Number of digits in "<<num<<" :"<<countDigits(num)<<endl;
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		
	}while(choice == 'Y' || choice=='y');
return 0;	
}
 
