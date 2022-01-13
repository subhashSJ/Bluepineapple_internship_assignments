/* write a program to print all perfect numbers between 1 to n.
 
   A perfect number is a positive integer that is equal to the
   sum of its positive divisors, excluding the number itself		
*/

#include<iostream>
#include<vector>

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

vector<int> perfectNumbers(int num){
	int flag = 0;
	
	vector<int> v;
	
	while(num>0){
		if(isPerfect(num)){
			v.push_back(num);
		}
		num--;
	}
	
	return v;
}

int main(){
	int num;
	char choice;
	vector<int> v;
	
	do{
		a:	cout<<"Enetr a positive integer : ";
		cin>>num;
	
		if(num<1){
			cout<<"Invalid Entry => ";
			goto a;
		}
	
		v = perfectNumbers(num);
		
		if(v.empty()){
			cout<<"There does not EXIT any perfect number between 1 to "<<num<<"."<<endl;
		}else{
			cout<<"All perfect numbers between 1 to "<<num<<" : ";
			for(int i=v.size()-1; i>=0; i--){
				cout<<v[i]<<"\t";
			}
		}
		cout<<endl<<endl;
		
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		cout<<endl;
		
	}while(choice == 'Y' || choice=='y');
	
return 0;	
}
