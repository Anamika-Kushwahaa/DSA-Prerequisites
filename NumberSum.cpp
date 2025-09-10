#include<iostream>
using namespace std;

int NumSum(int n){
    
    if(n<=0){
        return 0;
    }
    return n+NumSum(n-1);
}
int main(){
    int num;
    cout<<"Enter a number -> ";
    cin>>num;

    cout<<"SUM -> "<<NumSum(num);
    return 0;
}

OUTPUT:-
Enter a number -> 3
SUM -> 6
