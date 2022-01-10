/* Find total occurrences of each digits (0-9) using function */

#include<iostream>

using namespace std;

void occurrencesOfDigits(int num){
	int count[10];
	
	for(int i=0; i<10; i++){
		count[i] = 0;
	}
	
	while(num>0){
		count[num%10]++;
		num = num/10;
	}
	
	for(int i=0; i<10; i++){
		cout<<i<<" occurred "<<count[i]<<" times."<<endl;
	}	
}
int main(){
	int num;
	char choice;
	
	do{
		a:	cout<<"Enetr a positive integer : ";
		cin>>num;
	
		if(num<1){
			goto a;
		}
		
		occurrencesOfDigits(num);
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		
	}while(choice == 'Y' || choice=='y');
return 0;	
}
 
