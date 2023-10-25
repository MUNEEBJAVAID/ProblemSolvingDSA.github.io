#include <iostream>
using namespace std;

// Naive Approach
bool isPrime(int number){
  // beacuse two factor are necessary but here are one factor(1 , N)
 if(number == 1) return false;
 
 for(int i = 2; i < number; i++){
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
