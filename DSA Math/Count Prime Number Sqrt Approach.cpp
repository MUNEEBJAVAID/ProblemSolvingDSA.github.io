#include <iostream>
#include<cmath>
using namespace std;

// sqrt Approach
bool isPrime(int number){
int sqrtN = sqrt(number);

 for(int i = 2; i <= sqrtN; i++){
   if(number % i == 0) return false;
 }
 return true;

} 

 int countPrimes(int n) {
        int count = 0;
         if(n == 1 || n == 0) return count;

        for(int i = 2; i < n; i++){
         if(isPrime(i)) count++;
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
