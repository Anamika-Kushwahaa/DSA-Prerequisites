//Case sensitive palindrome check
#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(char ch[]){
    int start=0;
    int end=strlen(ch)-1;    
    while(start<=end){
        if(ch[start]!=ch[end]){
            return false;  //not palindrome
        }else{
            start++;
            end--;
        }
    }return true;    //palindrome

}

int main(){
    char ch[100];
    cout<<"Enter a string -> ";
    cin>>ch;

    if(checkPalindrome(ch)){
        cout<<"PALINDROME";

    }else{
        cout<<"NOT PALINDROME";
    }

    return 0;

}

// OUTPUT:-
// Enter a string -> noon
// PALINDROME
