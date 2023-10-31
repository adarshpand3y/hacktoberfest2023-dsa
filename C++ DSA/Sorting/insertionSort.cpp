#include <iostream>
using namespace std;

void insertionSort(int arr[],int size){
    for(int i=1;i<size;i++){
        int curr = arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

int main(){
    int arr[7] = {6,2,3,1,10,23,4};
    insertionSort(arr,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}