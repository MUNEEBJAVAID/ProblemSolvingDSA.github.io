#include <iostream>
#include <vector>
using namespace std;

int  findOddNumber(vector<int>arr){
 

 int s = 0;
 int e = arr.size() - 1;
 
 int ans = -1;
 while(s <= e){
   int mid = s  + (e - s)/2;
  
    if(mid % 2 == 0){
      if(arr[mid] == arr[mid+1]){
        s = mid + 2;
      }else{
        ans = mid;
        e = mid - 1;
      }
    }else{
        if(arr[mid] == arr[mid-1]){
        s = mid + 1;
      }else{
        e = mid - 1;
      }
    }
 }

return ans;
}

int main()
{

vector<int> arr{2  , 2 , 1 , 1 , 4 , 4 , 5 ,10,10};

int index = findOddNumber(arr);

cout << index;
    return 0;

}
