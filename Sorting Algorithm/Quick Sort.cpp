#include <iostream>
#include <vector>
using namespace std;

int partitions(vector<int> &arr , int start , int end){
  int pivotElement = arr[end];
  int pivotIndex = start;
  
  for(int currentIndex = start; currentIndex < end ;currentIndex++){
    if(arr[currentIndex] <= pivotElement){
      swap(arr[pivotIndex++] , arr[currentIndex]);
    }
  }
  
  swap(arr[pivotIndex] , arr[end]);
  
  return pivotIndex;
}

void quickSort(vector<int>& arr , int start , int end){
  // Base Case 
  if(start >= end) return;
  
  // Find pivot Index 
  int pivotIndex = partitions(arr , start , end);
  
  quickSort(arr , start , pivotIndex - 1);
  quickSort(arr ,  pivotIndex + 1 , end);
}

int main() 
{
    vector<int>arr{5,3,2,9,0,3};
    for(auto value : arr){
      cout << value << " ";
    }
    
    quickSort(arr , 0 , arr.size()-1);
    cout << endl;
     for(auto value : arr){
      cout << value << " ";
    }
    return 0;
}
