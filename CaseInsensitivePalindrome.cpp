//NOT CASE SENSITIVE ("Noon" and "noon" both are palindrome)
#include<iostream>
#include<string>
using namespace std;

//convert the upper case character to lower case 
char toLower(char ch){
    if(ch>='a'&&ch<='z'){
        return ch;
    }else{
        char temp=ch-'A'+'a';
        return temp;
    }
}
//check palindrome
bool checkPalindrome(char ch[]){
    int start=0;
    int end=strlen(ch)-1;
    while(start<=end){
        if(toLower(ch[start])!=toLower(ch[end])){
            return false;                //not palindrome
        }else{
            start++;
            end--;
        }
    }return true;                        //palindrome
}
int main(){
    char ch[100];
    cout<<"Enter a string -> ";
    cin>>ch;

    if(checkPalindrome(ch)){
        cout<<"Is Palindrome";
    }else{
        cout<<"Not Palindrome";
    }

    return 0;
}


// OUTPUT:-
// Enter a string -> Noon
// Is Palindrome

// Enter a string -> noon
// Is Palindrome
