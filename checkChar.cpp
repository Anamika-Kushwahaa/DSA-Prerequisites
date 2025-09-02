//Check if a character is upper case or lower case alphabet

#include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter a character -> ";
    cin>>ch;

    if(ch>=65 && ch<=90){
        cout<<"Upper Case Alphabet"<<endl;
    }else if(ch>=97 && ch<=122){
        cout<<"LowerCase Alphabet"<<endl;
    }else{
        cout<<"Number"<<endl;
    }

    return 0;

}


// OUTPUT:-
// Enter a character -> A
// Upper Case Alphabet
