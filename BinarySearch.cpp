#include <iostream>
using namespace std;

int BSearch(int arr[], int size, int key){
    
    int s=0;
    int e=size-1;
    
    while(s<=e){
        int mid =(s+e)/2;
        if(key==arr[mid]){
            return mid;
        }else if(key < arr[mid]){
            e = mid-1;
        }else{
            s = mid +1;
        }
    }
    return -1;
}
int main() {
    int even[6]={2,4,6,8,10,12};
    int odd[7]={1,2,3,4,5,6,7};
    
    int forEven = BSearch(even,6,10);
    cout<<forEven<<endl;
    
    int forOdd = BSearch(odd,7,7);
    cout<<forOdd<<endl;

    return 0;
}