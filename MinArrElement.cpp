//Finding the minimum element of an array -> 
#include<iostream>
using namespace std;

int MinElement(int arr[],int n){
    int min_element=arr[0];
    for(int i=0 ; i<n ; i++){
        if(min_element>arr[i]){
            min_element = arr[i];
        }
    }
    return min_element;
}
int main(){
    
    int n;
    cout<<"Enter size of the array -> ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements -> ";
    for(int i=0 ; i<n ;i++){
        cin>>arr[i];
    }
    int Min_Element = MinElement(arr,n);
    cout<<"Minimum Element of the array is -> "<<Min_Element;
}

// OUTPUT:-
// Enter size of the array -> 6
// Enter array elements -> 23 45 12 76 67 99
// Minimum Element of the array is -> 12
