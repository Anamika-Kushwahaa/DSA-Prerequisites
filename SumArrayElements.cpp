#include<iostream>
using namespace std;

int SumofArrElements(int arr[] , int n){
    if(n<=0){
        return 0;
    }
    return(SumofArrElements(arr,n-1)+arr[n-1]);
}

int main(){
    int n;
    cout<<"Enter no of elements -> ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements -> ";
    for(int i=0 ; i<n ; i++ ){
        cin>>arr[i];
    }

    int Sum = SumofArrElements(arr,n);
    cout<<"SUM OF ARRAY ELEMENTS -> " <<Sum;
}


// OUTPUT:-
// Enter no of elements -> 5
// Enter array elements -> 1 2 3 4 6
// SUM OF ARRAY ELEMENTS -> 1
