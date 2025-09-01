//Reverse a string 
#include<iostream>
using namespace std;
 
void revStr(char s[],int n){
    int start=0;
    int end=n-1;
    
    while(start<end){
        swap(s[start++],s[end--]);

    }
}
int main(){
    char str[20];
    cout<<"Enter a string -> ";
    cin>>str;
    int n=strlen(str);
    
    revStr(str,n);
    cout<<"Reversed String -> "<<str;

    return 0;
}

// OUTPUT:-
// Enter a string -> FunDay 
// Reversed String -> yaDnuF
