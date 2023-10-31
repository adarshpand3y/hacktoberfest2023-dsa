#include <iostream>
using namespace std;

void selectionSort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=i+1;j<size;j++){
            if(arr[j]<arr[i]){
                swap(arr[j],arr[i]);
            }
        }
    }
}

int main(){
    int arr[7] = {6,2,3,1,10,23,4};
    selectionSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}