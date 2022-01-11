/* Write a program for conversion of numbers to words for an american counting system.*/
 
#include<iostream>
#include<string>

using namespace std;

string threeDigitsNumberToWords(int num){
	int numArray[10];
	int i=0;
	int number = num;
	int flag = 0;
	string result;
	
	while(number>0){
		numArray[i] = number%10;
		number = number/10;
		i++;
	}
	while(i>=0){
		switch(i){
			case 1: {
					switch(numArray[0]){
						case 1: result+="One";
								break;
						case 2: result+="Two";
								break;
						case 3: result+="Three";
								break;
						case 4: result+="Four";
								break;
						case 5: result+="Five";
								break;
						case 6: result+="Six";
								break;
						case 7: result+="Seven";
								break;
						case 8: result+="Eight";
								break;
						case 9: result+="Nine";
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
								case 1: result+="Eleven";
										break;
								case 2: result+="Twelve";
										break;
								case 3: result+="Thirteen";
										break;
								case 4: result+="Fourteen";
										break;
								case 5: result+="Fifteen";
										break;
								case 6: result+="Sixteen";
										break;
								case 7: result+="Seventeen";
										break;
								case 8: result+="Eighteen";
										break;
								case 9: result+="Nineteen";
										break;
								case 0: result+="Ten";
										break;
							}	
	
							break;
						}
						case 2: result+="Twenty ";
								break;
						case 3: result+="Thirty ";
								break;
						case 4: result+="Forty ";
								break;
						case 5: result+="Fifty ";
								break;
						case 6: result+="Sixty ";
								break;
						case 7: result+="Seventy ";
								break;
						case 8: result+="Eighty ";
								break;
						case 9: result+="Ninety ";
								break;
					}
					break;
				}
			case 3: {
					switch(numArray[2]){
						case 1: result+="One Hundred ";
								break;
						case 2: result+="Two Hundred ";
								break;
						case 3: result+="Three Hundred ";
								break;
						case 4: result+="Four Hundred ";
								break;
						case 5: result+="Five Hundred ";
								break;
						case 6: result+="Six Hundred ";
								break;
						case 7: result+="Seven Hundred ";
								break;
						case 8: result+="Eight Hundred ";
								break;
						case 9: result+="Nine Hundred ";
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
	
	return result;	
}

string numberToWords(long int num){
	string result;
	
	while(num> 0){
		if(num/1000 <1000){
		 	if(num/1000 == 0){
		 		result+=threeDigitsNumberToWords(num);
			 }else{
			 	result+=threeDigitsNumberToWords(num/1000)+" Thousand "+threeDigitsNumberToWords(num%1000);
			 }
			 break;
		}else if(num/1000000 < 1000 ){
			if(num%1000000 == 0){
				result+=threeDigitsNumberToWords(num/1000000) + " Million ";
			}else{
				result+=threeDigitsNumberToWords(num/1000000)+" Million ";
				num = num%1000000;
			}
		}
	}
	
return result;	
}

int main(){
	long int num;
	char choice;
	
	do{
		a: cout<<"Enter a positive integer : ";
		cin>>num;
		
		if(num<1){
			cout<<"Invalid Entry => ";
			goto a;
		}
		cout<<num<<" : ";
		cout<<numberToWords(num);
		cout<<endl;
		
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		
	}while(choice == 'Y' || choice=='y');
return 0;	
}
 
