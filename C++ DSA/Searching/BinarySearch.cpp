#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
  int start = 0;
  int end = size;
  int mid = (start+end)/2;
  while( start <= end ){
    if( arr[mid] == key ){
      return mid;
    }
    else if( arr[mid] < key ){
      start = mid+1;
    }
    else{
      end = mid-1;
    }
    mid = (start+end)/2;
  }
  return -1;
}

int main() {
  int arr[6] = {3,6,8,10,23,45};
  int target = 6;
  cout<<binarySearch(arr,6,target)<<endl;
  return 0;
}