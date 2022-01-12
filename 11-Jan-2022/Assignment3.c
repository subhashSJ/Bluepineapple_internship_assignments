/*Book Management System using Singly linked list*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define size 100

struct book{
	int id;
	char name[100];
	struct book *next;
};

struct book *newBook=NULL,*head=NULL;
struct book *temp=NULL;

void createABook()
{
	newBook = (struct book*)malloc(sizeof(struct book));
	if(newBook==NULL)
	{
		printf("Error in book creation!\n");
	}
	else
	{
		newBook->next=NULL;
		printf("Enter book id : ");
		scanf("%d",&newBook->id);
		
		printf("Enter book name : ");
		while((getchar())!='\n');     // clears input buffer
		scanf("%[^\n]%*c", newBook->name);
		
		if(head==NULL)
		{
			temp=head=newBook;
		}
		else
		{
			temp->next=newBook;
			temp=newBook;
		}
	}
}

int getCount(){
	int count=1;
	if(head==NULL)
		return 0;
	else{
		temp=head;
		while(temp->next!=NULL)
		{
		temp=temp->next;
		count++;
		}
	return count;
	}
}

void insert_front(){
	newBook = (struct book*)malloc(sizeof(struct book));
	if(newBook==NULL){
		printf("Error in book creation!\n");
	}
	else{
		newBook->next=NULL;
		printf("Enter book id : ");
		scanf("%d",&newBook->id);
		
		printf("Enter book name : ");
		while((getchar())!='\n');     // clears input buffer
		scanf("%[^\n]%*c", newBook->name);
		
		if(head==NULL){
			head=newBook;
		}
		else{
			newBook->next=head;
			head=newBook;
		}
	}
}

void insert_in_bet(int position){
	int i=1;
	newBook = (struct book*)malloc(sizeof(struct book));
	if(newBook==NULL){
		printf("Error in book creation!\n");
	}else{
		newBook->next=NULL;
		printf("Enter book id : ");
		scanf("%d",&newBook->id);
		
		printf("Enter book name : ");
		while((getchar())!='\n');     // clears input buffer
		scanf("%[^\n]%*c", newBook->name);
		
		temp=head;
		while(i<position-1)
		{
		temp=temp->next;
		i++;
		}
		newBook->next=temp->next;
		temp->next=newBook;
	}
}

void insert_end(){
	newBook = (struct book*)malloc(sizeof(struct book));
	if(newBook==NULL){
		printf("Error in book creation!\n");
	}else{
		newBook->next=NULL;
		printf("Enter book id : ");
		scanf("%d",&newBook->id);
		
		printf("Enter book name : ");
		while((getchar())!='\n');     // clears input buffer
		scanf("%[^\n]%*c", newBook->name);
		
		if(head==NULL){
			head=newBook;
		}else{
			temp=head;
			while(temp->next!=NULL){
				temp=temp->next;
			}
			temp->next=newBook;
		}
	}
}

void delete_front(){
	temp=head;
	if(head==NULL){
		printf("No book present to delete");
	}else if(head->next==NULL){
		free(head);
		head=NULL;
		printf("Book deleted successfully.\n");
	}
	else{
		head=temp->next;
		free(temp);
		temp=NULL;
		printf("Book deleted successfully.\n");
	}
}

void delete_end(){
	int i=1;
	temp=head;
	if(head==NULL){
		printf("No book present to delete\n");
	}else if(head->next==NULL){
		free(head);
		head=NULL;
		printf("Book deleted successfully.\n");
	}else{
		while(temp->next->next!=NULL){
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
		printf("Book deleted successfully.\n");
	}
}

void delete_in_bet(int position){
	int i=1;
	struct book *ptr;
	temp=head;
	while(i<position-1){
		temp=temp->next;
		i++;
	}
	ptr=temp->next->next;
	free(temp->next);
	temp->next=ptr;
	printf("Book is deleted successfully.\n");
}

void display(){
	int i;
	temp=head;
	if(head==NULL){
		printf("No book present to display.\n");
		return;
	}else{
		printf("Available book : \n");
		while(temp->next!=NULL){
		printf("Book id : %d\t",temp->id);
		printf("Book name : %s\n",temp->name);
		temp=temp->next;
		}
		printf("Book id : %d\t",temp->id);
		printf("Book name : %s\n",temp->name);
	}
}

int main(){
	
	int num;
	int choice1;
	int choice2;
	int choice3;
	int choice4;
	int position;
	int position_1;
	int i;
	
	printf("How many books do you want to create initially : ");
	x : scanf("%d",&num);
	if(num<0){
		printf("\nInvalid Input! Try Again.\n");
		goto x;
	}
	
	for(i=0; i<num; i++){
		printf("\n\nCreating %dth book...\n",i+1);
		createABook();
	}
	
	do{
		do{
			printf("Choose one of the following option : \n");
			printf("1.Insert New Book\n");
			printf("2.Delete a Book\n");
			printf("3.Traverse all books \n");
			printf("4.Get total number of books present\n");
			printf("5.Exit\n");
			scanf("%d",&choice1);
			if((choice1<1)|| (choice1>5))
				printf("Error! Invalid Input.Try Again : \n");
		}while(choice1<1 || choice1>5);
		
		switch(choice1){
		case 1 :{
					printf("Choose one of the following option for insertion of new book : \n\n");
					printf(" 1.Insert At Front\n");
					printf(" 2.Insert in Between (after somenode)\n");
					printf(" 3.Insert At End\n");
					do{
						scanf("%d",&choice2);
						if(choice2<1 || choice2>3)
							printf("Error! Invalid Input.Try again : \n");
					}while(choice2<1 || choice2>3);
					
					switch(choice2){
						case 1:{
									insert_front();
									break;
								}
						case 2 :{
									if(getCount()<2){
										printf("For insertion in between,there must be atleast two books availabe.");
										break;
									}else{
										printf("Enter position where do you want to insert new book : ");
										y : scanf("%d",&position);
										if(position<=1 || position>getCount()){
											printf("Invalid position.Enter again : ");
											goto y;
										}
										insert_in_bet(position);
										break;
									}
							}
						case 3 :{
									insert_end();
									break;
								}
						}
					break;
				}
		case 2 :{
					printf("Choose one of the following option for deletion of book : \n");
					printf(" 1.Delete First book\n");
					printf(" 2.Delete any book in Between\n");
					printf(" 3.Delete Last book\n");
					
					do{
						scanf("%d",&choice3);
						if(choice3<1 || choice3>3)
							printf("Error! Invalid Input.Try again : \n");
					}while(choice3<1 || choice3>3);
						
					switch(choice3){
						case 1 :{
									delete_front();
									break;
								}
						case 2 :{
									if(getCount()<=2){
										printf("For deletion in between,there must be atleast two books availabe.");
										break;
									}else{
										printf("Enter position which book do you want to delete : ");
										z : scanf("%d",&position_1);
										if(position_1<=1 || position_1>=getCount()){
											printf("Invalid position.Enter again : ");
											goto z;
										}
										delete_in_bet(position_1);
									}
									break;
								}
						case 3 :{
									delete_end();
									break;
								}
						}	
					break;
				}
		case 3 :{
					display();
					break;
				}
		case 4 :{
					printf("Total number of books availabe is : %d",getCount());
					break;
				}
		case 5 : exit(0);
		}
		
		printf("\n\nDo you want to continue(1/0)\n");
		flag : scanf("%d",&choice4);
		if(choice4!=0 && choice4!=1){
			printf("Ivalid Choice! Try Again.\n");
			goto flag;
		}
	}while(choice4==1);
return 0;
}

