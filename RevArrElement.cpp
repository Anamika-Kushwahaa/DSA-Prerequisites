#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &arr){
    int start=0;
    int end=arr.size()-1;
    
    while(start<end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int main(){
    vector<int> arr;
    arr.push_back(32);
    arr.push_back(22);
    arr.push_back(12);
    arr.push_back(2);
    arr.push_back(42);

    cout<<"Berfor Reverse :- "<<endl;
    for ( int i = 0; i < arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }cout<<endl;

    reverse(arr);
    cout<<"After Reverse :- "<<endl;
    for ( int i = 0; i < arr.size() ; i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}

// OUTPUT:-
// Berfor Reverse :- 
// 32 22 12 2 42 
// After Reverse :- 
// 42 2 12 22 32 
