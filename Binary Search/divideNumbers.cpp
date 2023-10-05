#include <iostream>
#include <vector>
using namespace std;

int  divide(int divisor , int dividend){
 

 int s = 0;
 int e = abs(dividend);
 
 int ans = 0;
 while(s <= e){
   int mid = s  + (e - s)/2;
  
   
   if(abs(mid* divisor) > abs(dividend)){
     e = mid - 1;
   }else{
     ans = mid;
     s = mid + 1;
   }
 }

if(divisor < 0 && dividend < 0 || divisor > 0 && dividend > 0){
  return ans;
}else
{
  return -ans;
}

}

int main()
{

int divisor , dividend;
cin >> divisor >> dividend;

int ans = divide(divisor , dividend);

cout << ans;
    return 0;

}
