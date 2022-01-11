/* Write a program for conversion of numbers to words for an american counting system.*/
 
#include<iostream>
#include<string>

using namespace std;

void numberToWords(int num){
	int numArray[100];
	int i=0;
	int number = num;
	int flag = 0;
	
	while(number>0){
		numArray[i] = number%10;
		number = number/10;
		i++;
	}
	while(i>=0){
		switch(i){
			case 1: {
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
						case 0: break;
						}		
					break;
				}
			case 2: {
					switch(numArray[1]){
						case 1:{
								flag = 1;
								switch(numArray[0]){
								case 1: cout<<"Eleven";
										break;
								case 2: cout<<"Twelve";
										break;
								case 3: cout<<"Thirteen";
										break;
								case 4: cout<<"Fourteen";
										break;
								case 5: cout<<"Fifteen";
										break;
								case 6: cout<<"Sixteen";
										break;
								case 7: cout<<"Seventeen";
										break;
								case 8: cout<<"Eighteen";
										break;
								case 9: cout<<"Nineteen";
										break;
								case 0: cout<<"Ten";
										break;
							}	
	
							break;
						}
						case 2: cout<<"Twenty ";
								break;
						case 3: cout<<"Thirty ";
								break;
						case 4: cout<<"Forty ";
								break;
						case 5: cout<<"Fifty ";
								break;
						case 6: cout<<"Sixty ";
								break;
						case 7: cout<<"Seventy ";
								break;
						case 8: cout<<"Eighty ";
								break;
						case 9: cout<<"Ninety ";
								break;
					}
					break;
				}
			case 3: {
					switch(numArray[2]){
						case 1: cout<<"One Hundred ";
								break;
						case 2: cout<<"Two Hundred ";
								break;
						case 3: cout<<"Three Hundred ";
								break;
						case 4: cout<<"Four Hundred ";
								break;
						case 5: cout<<"Five Hundred ";
								break;
						case 6: cout<<"Six Hundred ";
								break;
						case 7: cout<<"Seven Hundred ";
								break;
						case 8: cout<<"Eight Hundred ";
								break;
						case 9: cout<<"Nine Hundred ";
								break;
					}
					break;
				}
				
		}
		if(flag == 1){
			break;
		}
		i--;
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
 
