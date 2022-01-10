/* write a program to print all perfect numbers between 1 to n.
 
   A perfect number is a positive integer that is equal to the
   sum of its positive divisors, excluding the number itself		
*/

#include<iostream>

using namespace std;

int isPerfect(int num){
	int i=1;
	int sum = 0;
	
	while(i<= num/2){
		if(num%i == 0){
			sum = sum + i;
		}
		i++;
	}
	if(sum == num){
		return num;
	}else{
		return 0;
	}	
}

void perfectNumbers(int num){
	int flag = 0;
	
	while(num>0){
		if(isPerfect(num)){
			cout<<num<<"\t";
			flag = 1;
		}
		num--;
	}
	
	if(flag == 0){
		cout<<" - ";
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
	
		cout<<"All perfect numbers between 1 to "<<num<<" : ";
		perfectNumbers(num);
		cout<<endl<<endl;
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		
	}while(choice == 'Y' || choice=='y');
	
return 0;	
}
