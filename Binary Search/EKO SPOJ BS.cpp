#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibeSolution(vector<long long int> trees , long long int M , 
 long long int bladHeight){
   long long int woodCollects = 0;
      for(long long int i = 0; i < trees.size(); i++){
    if(trees[i] > bladHeight){
      woodCollects = woodCollects + trees[i] - bladHeight;
    }
    }
    
    return woodCollects >= M;
  
 }

long long int maxSawBladeHeight(vector<long long int> trees ,long long int M){
  
  long long int start = 0 , end;
  end = *max_element(trees.begin() , trees.end());
  
  long long int ans = 0;
 
 while(start <= end){
   long long int mid = start + (end - start)/2;
   
   if(isPossibeSolution(trees , M , mid)){
     ans =  mid;
     start = mid + 1;
   }else{
     end = mid - 1;
   }
 }
  return ans;
  
}

int main() 
{
    long long int N , M;
    cin >> N >> M;
    
    vector<long long int> trees;
    
    while(N--){
      long long int Height;
      cin >> Height;
      
      trees.push_back(Height);
    }
    
   cout <<  maxSawBladeHeight(trees , M);
    
    return 0;
}
