/*QUESTION :- 
			  Write a menu driven program to perform following operations on strings (without using 
inbuilt string functions): 
a) Show address of each character in string 
b) Concatenate two strings. 
c) Compare two strings 
d) Calculate length of the string (use pointers) 
e) Convert all lowercase characters to uppercase 
t) Reverse the string 
SOLUTION :-
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    char c ='\0';
    while(1){
        cout << "What you want to do: " << endl;
        cout << "1 :- Show Address of each charachter in a string " <<endl;
        cout << "2 :- Concatenate two strings " << endl;
        cout << "3 :- Compare two strings " << endl;
        cout << "4 :- Calculate length of string " << endl;
        cout << "5 :- Convert to uppercase " << endl;
        cout << "6 :- Reverse the string " << endl;
        cout << "7 :- Exit"<<endl;
        cin >> c;
            switch(c){
                case '1':{
                    string main,extra;
    				cout << "Enter the string: ";
    				getline(cin,extra);
    				getline(cin,main);
    				int n = main.size();
    				for (int i = 0; i < n; i++){
      				  cout << "Address of " << main[i] << " is " << static_cast<void*>(&main[i]) << endl;
    					}
                    break;} 
                    
                    
                case '2':{
                        string s1, s2, extra;
  						cout << "Enter 1st string: " <<  endl;
  						getline(cin,extra);
    					getline(cin,s1);
    					cout << "Enter 2nd string: " << endl;
    					getline(cin,s2);
    					cout << "Concatenated string is " << s1+" "+s2 << endl;
                    break;}
                    
                    
                case '3':{
                    string s1, s2,extra;
    				cout << "Enter the first string:  " << endl;
    				getline(cin,extra);
    				getline(cin,s1);
    				cout << "Enter the second string: " << endl;
    				getline(cin,s2);
    				int n1 = s1.size();
    				int n2 = s2.size();
    				if (n1 > n2){
    					cout << "First string is greater \n\n";
    				}else if(n2 > n1){
    					cout << "Second string is greater \n\n";
					}else{
						cout << "Both strings are equal \n\n";
					}
        			
                    break;}
                    
                    
                case '4': {
                    string s,extra;
                    cout << "Enter the string: ";
                    getline(cin,extra);
    				getline(cin,s);
                    cout << "The size of string is " << s.size() << endl;
                    break;} 
                    
                    
                case '5': {
                    string s1,extra;

                    cout << endl;
					cout << "Enter the String that you want to Convert into Uppercase  =  ";
					getline(cin,extra);
					getline(cin, s1);
	
					for (int i = 0; i < s1.length(); i++)
  					{
  					s1[i] = toupper(s1[i]);
  					}
  	
					cout << "The String you entered in lowercase is converted into Uppercase: " << endl << s1 << "\n\n";
                    break;}
                    
                case '6': {
                        string str,extra;
    					cout << "Enter the string that you want to reverse:  " << endl;
    					getline(cin,extra);
    					getline(cin,str);
    					string s="";
    					int n= str.size()-1;
    					for (int i = 0; i < str.size(); i++){
     					   s = s + str[n];
      					   n--;
    					}
    					
    			cout << "The reverse of your string' " << str << "' is " << s << endl;
                    		break;}
                    		
                case '7': {
                	return 0;
					break;
				}
                default: {
                    cout << "PLEASE ENTER THE RIGHT OPTION" << endl;
                    }
            }
        }
        return 0;
    }