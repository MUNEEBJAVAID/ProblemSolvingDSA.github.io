#include <iostream>
#include <vector>
using namespace std;

int findIndex(vector<int > arr , int target){
  int s = 0;
  int e = arr.size()-1;
  
  int mid = s + (e-s)/2;
  
  while(s <= e){
    if(arr[mid] == target){
      return mid;
    }
    else if(mid - 1 >= s && arr[mid - 1] == target){
      return mid -1;
    }
    
    else if(arr[mid + 1] == target && mid + 1 <= e){
      return mid +1;
    }
    
    if(arr[mid] > target){
      e = mid -2;
    }else{
      s = mid + 1;
    }
    
    mid = s + (e-s)/2;
  }
  
  return -1;
}


int main() 
{
// Jab ma apny array ko sort krdeta hun tu har element sort array ma jo ha 
// wo nearly sorted array ma in i , i + 1 , i - 1  three index ma sy kisi aek
// index par para ho ga.

 vector<int > arr= {10 , 3 , 40 , 20 , 50 ,80 ,70};
 
 int target = 70;
 
 int index = findIndex(arr , target);
 cout << "Target element is at index: " << index;
    return 0;
}
