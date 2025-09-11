//Finding the maximum element of an array ->
#include<iostream>
using namespace std;

int MaxElement(int arr[],int n){
    int max_element=arr[0];
    for(int i=0 ; i<n ; i++){
        if(max_element<arr[i]){
            max_element = arr[i];
        }
    }
    return max_element;
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
    int Max_Element = MaxElement(arr,n);
    cout<<"Maximum Element of the array is -> "<<Max_Element;
}

OUTPUT:-
Enter size of the array -> 7
Enter array elements -> 1 24 63 968 525 536 41    
Maximum Element of the array is -> 968
