#include <iostream>
#include <vector>
using namespace std;

int  findSqrt(int n){
  
 int ans = 0;
 
 int s = 0;
 int e = abs(n);
 
 while(s <= e){
   int mid = s  + (e - s)/2;
   
   if(mid * mid <= abs(n)){
     ans = mid;
     s = mid + 1;
   }else{
     e = mid - 1;
   }
 }
 
 if(n < 0){
   return -ans;
 }else{
  return ans;
 }
 
}

int main()
{

  int n;
  cin >> n;
  
  int ans = findSqrt(n);
  cout << "Ans is: " <<ans <<endl;
  
  
  
  double finalAnswer = abs(ans);
  double step = 0.1;
  
    int precedence;
  cin >> precedence;
  while(precedence--){
    
    for(double i = finalAnswer; i * i <= abs(n); i = i + step){
      finalAnswer = i;
    }
    step = step / 10;
  }
  
  if(ans < 0){
      cout << -finalAnswer;
  }
  else{
      cout << finalAnswer;
  }

  
    return 0;

}
