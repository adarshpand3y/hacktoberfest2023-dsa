#include <iostream>
using namespace std;

void bubbleSort(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main(){
    int arr[7] = {6,2,3,1,10,23,4};
    bubbleSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}