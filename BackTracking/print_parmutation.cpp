#include <iostream>
using namespace std;

void  printPermuattion(string &str , int i){
  // Base Case
  if( i >= str.length()){
    cout << str << " ";
    return;
  }
  
  
  for(int j = i; j < str.length(); j++){
    
    // swapping
    swap(str[i] , str[j]);
    
    // Recursion Call
    printPermuattion(str , i + 1);
    
    // BackTracking
    swap(str[i] , str[j]);
  }
  
}

int main() 
{
    string str = "abc";
    
    printPermuattion(str , 0);
    
//    Time Complexity ==> O(n ,n!) => O(n!)
    return 0;
    
}
