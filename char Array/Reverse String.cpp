#include <iostream>
#include <string.h>
using namespace std;

// void reverseString(char name[] , int length){
  
//   for(int i = length - 1; i >= 0; i--){
//     cout << name[i];
//   }
// }

void reverseString(char name[] , int length){
  
   int start = 0;
   int end = length - 1;
   
   while(start <= end){
     swap(name[start] , name[end]);
     start++;
     end--;
   }
}


int main() 
{

  char name[100];
   
  cout <<"Enter you name: " << endl;
  cin.getline(name , 100);
  

  int length = strlen(name); 
  
  reverseString(name , length);
  
  for(int i = 0; i < length; i++){
    cout << name[i];
  }
    return 0;
}
