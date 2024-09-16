#include <bits/stdc++.h>
using namespace std;
int secondLargest(int arr[],int size){
    int largest = arr[0];
    int sLargest = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>largest){
            sLargest = largest;
            largest = arr[i];
        }
        else if(arr[i]<largest && arr[i]>sLargest){
            sLargest = arr[i];
        }
    }
    return sLargest;
}

int main(){
    int arr[] ={1,2,4,7,7,7,5};
    cout << secondLargest(arr,7);
}