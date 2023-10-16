#include <iostream>
using namespace std;

void Swap(int arr[],int i,int j){
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

int partition(int arr[],int start,int end){
    int pivot=arr[end];
    int i=start-1;
    for(int j=start;j<end-1;j++){
        if(arr[j]<pivot){
            i++;
            Swap(arr,i,j);
        }
    }
    Swap(arr,i+1,end);
    return i+1 ;
}

void quickSort(int arr[],int start,int end){
    if(start<end){
        int pivot = partition(arr,start,end);
        quickSort(arr,start,pivot-1);
        quickSort(arr,pivot+1,end);
    }
}

int main(){
    int arr[7] = {6,2,3,1,10,23,4};
    quickSort(arr,0,6);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<' ';
    }
    return 0;
}