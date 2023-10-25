#include <iostream>
#include<vector>
using namespace std;

    int countPrimes(int n) {
      
  if(n == 0 || n == 1) return 0;

  vector<bool>arr(n , true);

  int count = 0;
  
  for(int i = 2; i < n; i++){
    if(arr[i]){
     count++;
    for(int j = 2 * i; j < n; j += i){
     arr[j] = false;
    }
   }
  }
 return count;
 
}

int main() 
{
  
 int number;
 cin >> number;
 
cout << countPrimes(number);
  
    return 0;
}
