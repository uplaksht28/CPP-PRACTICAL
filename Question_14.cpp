/*QUESTION :-
             Copy the contents of one text file to another file, after removing all whitespaces.
SOLUTION :-
*/
	#include<bits/stdc++.h>
using namespace std;


int main(){
    ifstream in("Q14_input.txt");
    ofstream out("Q14_output.txt");
    string str="", temp;
    
    while (in.good()){
        in>>temp;
        str.append(temp);
    }
    cout<<"Program Executed"<<endl;
    out<<str;
    in.close();
    out.close();
    
    return (0);
} 