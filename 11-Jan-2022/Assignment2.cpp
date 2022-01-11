/* Matrix Multiplication m*n . n*r */

#include<iostream>

using namespace std;

int main(){
	int col1;
	int col2;
	int row1;
	int row2;
	int sum = 0;
	
	char choice;
	
	do{
		a: cout<<"Enter row dimension of the first matrix : ";
		cin>>row1;
		
		if(row1<1){
			cout<<"Invalid Entry => ";
			goto a;
		}
		
		b: cout<<"Enter column dimension of the first matrix : ";
		cin>>col1;
		
		if(col1<1){
			cout<<"Invalid Entry => ";
			goto b;
		}
		
		int M1[row1][col1];

		cout<<"Enter matrix entries of first matrix :"<<endl;
		for(int i=0; i<row1; i++)
			for(int j=0; j<col1; j++){
				cin>>M1[i][j];
			}
		
		cout<<"First Matrix : "<<endl<<endl;
		for(int i=0; i<row1; i++){
			for(int j=0; j<col1; j++)
				cout<<M1[i][j]<<"\t";
			cout<<endl;
		}	
		
		c: cout<<"Enter row dimension of the second matrix : ";
		cin>>row2;
		
		if(row2<1){
			cout<<"Invalid Entry => ";
			goto c;
		}
		
		if(row2 != col1){
			cout<<"Invalid Entry (Row dimension of the second matrix must be same as column dimension of the first matrix)";
			cout<<endl;
			goto c;
		}
		
		d: cout<<"Enter column dimension of the first matrix : ";
		cin>>col2;
		
		if(col2<1){
			cout<<"Invalid Entry => ";
			goto d;
		}
		
		int M2[row2][col2];

		cout<<"Enter matrix entries of the second matrix :"<<endl;
		for(int i=0; i<row2; i++)
			for(int j=0; j<col2; j++){
				cin>>M2[i][j];
			}
		
		cout<<"Second Matrix : "<<endl<<endl;
		for(int i=0; i<row2; i++){
			for(int j=0; j<col2; j++)
				cout<<M2[i][j]<<"\t";
			cout<<endl;
		}
				
		int output[row1][col2];
		
		for(int i=0; i<row1; i++){
			for(int j=0; j<col2; j++){
				sum = 0;
				for(int k=0; k<col1; k++){
					sum+=M1[i][k]*M2[k][j];
				}
				output[i][j] = sum;
			}
		}
		
		cout<<"Product of the given matrices : "<<endl<<endl;
		for(int i=0; i<row1; i++){
			for(int j=0; j<col2; j++)
				cout<<output[i][j]<<"\t";
			cout<<endl;
		}
		cout<<endl;
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		
	}while(choice == 'Y' || choice=='y');
return 0;	
}
