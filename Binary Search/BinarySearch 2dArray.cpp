#include <iostream>
#include <vector>
using namespace std;

int  BinarySearch2DArray(vector<vector<int>>arr ,int target){
 
 int rowSize = arr.size();
 int colSize = arr[0].size();
 
 int s = 0;
 int e = rowSize * colSize -1;
 
 int ans = 0;
 while(s <= e){
   int mid = s  + (e - s)/2;
   
   int rowIndex = mid / colSize;
   int colIndex = mid % colSize;
   
   if(arr[rowIndex][colIndex] == target){
    ans =  mid;
    break;
   }else if(arr[rowIndex][colIndex] > target){
     e = mid - 1;
   }else{
     s = mid + 1;
   }
   
 }

return ans;
}

int main()
{

vector<vector<int>> arr{
  {1 , 2 ,3 ,4},
  {5 , 6 ,7 ,8},
  {9 , 10 , 11 , 12}
};

int target = 4;
int number = BinarySearch2DArray(arr , target);

cout << number;
    return 0;

}
