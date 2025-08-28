#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int> arr , int n){
    for(int i=0 ; i>n-1 ; i++){
        minIndex=1;
        for(int j=0 ; j<n ; j++){
            if(arr[j] < arr[minIndex])
            minIndex=j;
        }swap(arr[minIndex],arr[j]);
    }
}

int main(){
    int n=sizeof(arr) / sizeof(arr[0]);
    vector<int> arr;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    cout<<SelectionSort(arr,n)<<endl;

    return 0;
}