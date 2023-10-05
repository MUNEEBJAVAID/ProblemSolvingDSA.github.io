
int findPivot(vector<int> arr)
{
    int start = 0;
    int end = arr.size() - 1;
    
    while(start < end){
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
    
    return start;
   
}

int binarySeacrh(vector<int>& nums, int start,int end,int key){
  
  int s=start;
  int e=end;
  
  int mid = s + (e-s)/2;
    
  while(s <= e){
      
    if(nums[mid] == key){
      return mid;
    }
      
    if(key > nums[mid]){
      s = mid+1;
    }else{
      e = mid - 1;
    }
    
    mid = s + (e - s)/2;
  }
return -1;
}

int main(){
    
        int start = 0;
        int end = nums.size() - 1; 
        int pivotIndex = findPivot(nums);
        
        if(target >= nums[start] && target <= nums[pivotIndex]){
         return binarySeacrh(nums , start , pivotIndex , target);
        }else{
         return binarySeacrh(nums ,pivotIndex + 1 , end , target);
        }

   return 0;
}
