#include <iostream>
#include <vector>
using namespace std;

int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    
    while(start <= end){
      
      if(start == end){
        return start;
      }
      
      int mid = start + (end - start) / 2;
      
      if(mid + 1 < arr.size() && arr[mid] > arr[mid+1]){
        return mid;
      }
      if(mid - 1 >= 0 &&arr[mid] < arr[mid - 1]){
        return mid - 1;
      }
      
      if(arr[start] > arr[mid]){
        end = mid -1;
      }else{
        start = mid + 1;
      }
    }
    
    return -1;
   
}
int main()
{

    vector<int> arr{2 ,3 ,4, 5};
    int PivotIndex = findPivot(arr);
    cout << "PivotIndex: " << PivotIndex << endl;
    cout << "PivotElement: " << arr[PivotIndex] << endl;
    return 0;

}
