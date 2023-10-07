#include <iostream>
using namespace std;

int LinearSearch(int arr[],int size,int key){
  
  for(int i=0;i<size;i++){
    if(arr[i] == key){
        return i;
    }
  }

  return -1;
}

int main() {
  int arr[6] = {3,6,8,10,23,45};
  int target = 6;
  cout<<LinearSearch(arr,6,target)<<endl;
  return 0;
}