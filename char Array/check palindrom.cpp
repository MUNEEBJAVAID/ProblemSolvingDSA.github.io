#include <iostream>
#include <string.h>
using namespace std;


int getLength(char name[]){
    int length = 0;
  
  for(int i = 0; name[i] != '\0'; i++){
    length++;
  }
   return length;
}


// bool isPalindrome(char name[]){
  
//   int start = 0;
//   int end = getLength(name) -1;
  
//   while(name[start] == name[end]){
//     start++;
//     end--;
//   }
  
//   if(start > end){
//     return true;
//   }else{
//     return false;
//   }
  
// }

bool isPalindrome(char name[]){
  
  int start = 0;
  int end = getLength(name) -1;
  
  while(start < end){
   
   if(name[start] != name[end]){
     return false;
   }
   
   start++;
   end--;
  }

  return  true;
}

int main() 
{

  char name[100];
   
  cout <<"Enter you name: " << endl;
  cin.getline(name , 100);

  
  
  
  bool isPal =  isPalindrome(name);
  
  if(isPal){
    cout << "Yes!";
  }else{
    cout << "No!";
  }
    return 0;
}
