#include <iostream>
#include <vector>
using namespace std;

int  nearlySortedArray(vector<int>arr ,int target){
 

 int s = 0;
 int e = arr.size() - 1;
 
 int ans = 0;
 while(s <= e){
   int mid = s  + (e - s)/2;
  
   
   if(arr[mid] == target){
    return mid;
   }else if(arr[mid+1] == target){
    return mid + 1;
   }else if(arr[mid-1] == target){
     return mid - 1;
   }
   
   if(arr[mid] > target){
     e = mid - 1;
   }else{
     s = mid + 1;
   }
 }

return ans;
}

int main()
{

vector<int> arr{2 , 6 , 4 ,10,8};


int target = 8;
int index = nearlySortedArray(arr , target);

cout << index;
    return 0;

}
