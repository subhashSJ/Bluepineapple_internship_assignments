/* crossWord problem using TREE data structure */

#include <bits/stdc++.h>
#include<string>
#include<vector>
#include<stdlib.h>

#define SIZE 26

using namespace std;
 
//defining trie node structure
struct TrieNode
{
    struct TrieNode *children[SIZE];
    bool isEndOfWord;
};
 
vector<string> v;

int flag=1;
 
// Returns new trie node with all NULL values
struct TrieNode *getNode(void)
{
    struct TrieNode *temp =  new TrieNode;
 
    temp->isEndOfWord = false;
 
    for (int i = 0; i < SIZE; i++)
        temp->children[i] = NULL;
 
    return temp;
}

//inserting a string 
void insert(struct TrieNode *root, string str)
{
    struct TrieNode *temp = root;
 
    for (int i = 0; i < str.length(); i++)
    {
        int index = str[i] - 'a';
        if (!temp->children[index])
            temp->children[index] = getNode();
 
        temp = temp->children[index];
    }
 
   // assuring end of the word
    temp->isEndOfWord = true;
}

void search(struct TrieNode *root, int length, string s)
{
    struct TrieNode *temp = root;
 	
 	if(length == 1 && temp->children[s[0] - 'a'] && temp->children[s[0] - 'a']->isEndOfWord){
 		v.push_back(s);
 		return;
	}else if(length == 1){
		return;
	}
	 
 	if(temp->isEndOfWord){
		if(s.length() == length){
			v.push_back(s);
			return;
		} 
	}
	
	if(flag == 1 ){
		int index = s[0] - 'a';
	    if (!temp->children[index])
	        return;
	    temp = temp->children[index];
	    flag++;
	}
	
    string str="";
    
	for(int i=0; i<SIZE; i++){	
		if(temp->children[i] != NULL){
			char ch = i + 'a';
			str+=ch;
			s+=ch;
					
			if(str.length() > 1){
				string str1;
					
				for(int i=0; i<s.length()-2; i++){
					str1+=s[i];
				}
					
				str1+=str[str.length()-1];
				s=str1;
				
			}
			search(temp->children[i], length, s);
		}
	}
	return;
}
 
int main(){ 
	int length;
	char choice;
	int flag1 = 1;
	int flag3 = 1;
	char ch;
    	
	
    string keys[] = {
		"the", "be", "and", "problem", "where", "believe", "country", "always",
		"week", "point", "hand", "off", "play", "turn", "few", "group", "such",
		"against", "run", "guy", "about", "case", "question", "work", "night",
		"live", "game", "number", "write", "bring", "without", "money", "lot",
		"most", "book", "system", "government", "next", "city", "company",
		"story", "today", "job", "move", "must", "bad", "during", "begin", "love",
		"each", "hold", "different", "american", "little", "before", "ever", "word",
		"fact", "right", "read", "anything", "nothing", "sure," ,"small", "month",
		"program", "maybe", "right", "under", "business", "home", "kind", "stop",
		"pay", "study", "since", "issue", "name", "idea", "room", "percent", "far",
		"away", "law", "actually", "large", "though", "provide", "lose", "power",
		"kid", "war", "understand", "head", "mother", "real", "best", "team", 
		"eye", "long", "long", "side", "water", "young", "wait", "okay", "both",
		"yet", "after", "meet", "service", "area", "important", "person", 
		"hey", "thank", "a", "as", "assure", "ball", "boy", "bat", "box", 
		"cat", "call", "catch", "day", "dog", "dig", "date", "devloper", 
		"elephant", "eat", "egg", "easy", "farm", "favour", "great", "goat", 
		"gathere", "goverment", "get", "hi", "hello", "hike", "hour", "hat",
        "in", "ink", "india", "is", "ideal", "joker", "jet", "just", "kilo", 
		"king", "kite", "keen", "lion", "lie", "left", "leave", "let", "menu",
		"mouse", "my", "next", "new", "nothing", "ok", "online", "pc", 
		"private", "queen", "quit", "rose", "rib", "salute", "sir","there", 
		"then", "talk", "up", "umbrella", "very", "van", "wrose","wrap", 
		"xerox", "yalk", "yes", "zygote", "zoo"
	};
    int n = sizeof(keys)/sizeof(keys[0]);
 	
    struct TrieNode *root = getNode();
 
    // Construct a dictionary for crossword
    for (int i = 0; i < n; i++)
        insert(root, keys[i]);
 	
 	cout<<"Dictionary has been loaded successfully."<<endl;
 	
    do{
    	v.clear();
    
    	string initialLetter="";
    	string LettersWithPositions="";
    	
		flag=1;
    	flag1=1;
    	flag3 = 1;
    	
		cout<<endl<<"Enter a first letter of the word : ";
	    cin>> ch;
	    
	    LettersWithPositions+=ch;
	    
	    while(flag1){
	    	char choice;
	    	
	    	cout<<endl<<"Would you like to provide other letter of a word and its position in a word?(y/n) : ";
	    	cin>>choice;
	    	
	    	if(choice == 'y' || choice == 'Y'){
	    		cout<<"Enter the letter : ";
	    		cin>>ch;
	    		LettersWithPositions+=ch;
	    		
	    		cout<<"Enter "<<ch<<"'s position : ";
	    		cin>>ch;
	    		LettersWithPositions+=ch;
			}else{
				flag1 = 0;
			}
		}
		
	    cout<<endl<<"Enter length of the word : ";
	    cin>> length;
	    
	    initialLetter+=LettersWithPositions[0];
	
	    search(root, length,initialLetter);
	    
	    if(!v.empty()){
			for(int i=v.size()-1; i>=0; i--){
				int flag2 = 1;
				for(int j=1; j<LettersWithPositions.length(); j+=2){
					if(LettersWithPositions[j] != v[i][(LettersWithPositions[j+1] - '0')-1]){
						flag2 = 0;	
					}
				}
				if(flag2 == 1){
					if(flag3 == 1){
						cout<<endl<<"Possible Hints : "<<endl;
						flag3 = 0;
					}
					cout<<"\t"<<v[i]<<endl;
				}	
			}
			if(flag3 == 1){
				cout<<endl<<"No word with given inputs and having length "<<length<<" exist in our dictionary as of now."<<endl;
			}
		}else{
			cout<<endl<<"No word starting with "<<ch<<" and having length "<<length<<" exist in our dictionary as of now."<<endl;
		}
			
		cout<<endl<<endl;
		cout<<"do you want to continue? (y/n) :";
		cin>>choice;
		cout<<endl;
		
	}while(choice == 'Y' || choice=='y');
	
return 0;
}
