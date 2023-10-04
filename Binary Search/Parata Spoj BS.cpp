#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isPossibleSoultion(vector<int>  ranked ,int  nP , int mid){
  int currP = 0;
  
  for(int i =0 ; i < ranked.size(); i++){
    int R = ranked[i] , j = 1;
    int timeTaken = 0;
    
    while(true){
      if(timeTaken + R*j <= mid){
        currP++;
        timeTaken+=R*j;
        j++;
    }else{
      break;
    }
  }
  
  if(currP >= nP){
    return true;
  }
}

return false;
}

int minTimeToCompleteOrder(vector<int>  ranked , int nP){
  int s = 0;
  int highestRank = *max_element(ranked.begin() , ranked.end());
  int e = highestRank *(nP * (nP + 1)/2);
  
  int ans  = 0;
  while(s <= e){
    int mid = s + (e - s)/2;
    
    if(isPossibleSoultion(ranked , nP , mid)){
      ans = mid;
      e  = mid - 1;
    }else{
      s = mid + 1;
    }
  }
  return ans;
}

int main() 
{
 
 int t;
 cin >> t;
 
 while(t--){
   int nP ,  nC;
   cin >> nP >> nC;
   
   vector<int> ranked;
   while(nC--){
     int R; cin >> R;
     ranked.push_back(R);
   }
   cout << minTimeToCompleteOrder(ranked , nP) << endl;
 }
    

    return 0;
}
