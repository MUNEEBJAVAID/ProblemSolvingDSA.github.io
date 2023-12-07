#include <iostream>
#include <vector>
using namespace std;

int Partition(vector<int>&arr , int start, int end){
  // Step - 1 => Select the pivot element
  int pivotElement = arr[start];
  
 // Step - 2 => Find right place of pivot element 
  int cnt = 0;
  for(int i = start; i <= end; i++){
    if(arr[i] < pivotElement) cnt++;
  }
  
  // Now we have known the correct place of pivot element. So place it there
  int pivotIndex = start + cnt;
  swap(arr[pivotIndex] , arr[start]);
  
    // Step - 3 => Create the partition now such that left elements of pivot is lesser than pivot and right elements should be greater than pivot
  while(start < pivotIndex && end > pivotIndex){
    
    while(arr[start] < pivotElement )start++;
    while(arr[end] > pivotElement) end--;
    
      // Need to swap now 
        // verify once that i is behind pivotIndex and j > pivotIndex => Elements found to swap
    if(start < pivotIndex && end > pivotIndex){
      swap(arr[start++] , arr[end--]);
    }
   }
   
   return pivotIndex;
}

void quickSort(vector<int>&arr , int start, int end){
  // Base case ==> start == end => Already sort and start > end => invalid array
  if(start >= end){
    return;
  }
  
// Partition logic  
 int pivotIndex =  Partition(arr , start , end);
 
  // Recursion Logic
  
  // Call for left array
  quickSort(arr , start , pivotIndex - 1);  
  // Call for Right array
  quickSort(arr , pivotIndex + 1 , end); 
}

int main() 
{
  
  vector<int> arr{12,23,1,3,5,6,82,34,56,7,8,90,96,4};
  
  cout << "Before Sorted : ";
  for(auto value:arr){
    cout << value << " ";
  }
  
  quickSort(arr , 0 , arr.size()-1);
  
  cout << "\nAfter Sorted : ";
   for(auto value:arr){
    cout << value << " ";
  }
  
//  Time complexity
// Best and Average case => O(nlogn)
// WorstCase => O(n^2)
    
    return 0;
}
