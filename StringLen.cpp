//to find the length of a string
#include<iostream>
using namespace std;

int getLen(char str[]){
    int count=0;
    for(int i=0 ; str[i]!='\0' ; i++){
        count++;
    }
    return count;
}

int main(){
    char str[20];
    cout<<"Enter a string -> ";
    cin>> str;

    cout<<"Length of string is : "<<getLen(str)<<endl;

    return 0;
}

// OUTPUT:-
// Enter a string -> Anamika
// Length of string is : 7
