#include <iostream>
#include <string.h>
using namespace std;

// void reverseString(char name[] , int length){
  
//   for(int i = length - 1; i >= 0; i--){
//     cout << name[i];
//   }
// }

int getLength(char name[]){
    int length = 0;
  
  for(int i = 0; name[i] != '\0'; i++){
    length++;
  }
   return length;
}

void reverseCharArray(char name[]){
  
   int start = 0;
   int end = getLength(name) - 1;
   
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
  
  // int length = strlen(name); 
  
  cout << "Befor Reverse: " << name << endl;
  
  reverseCharArray(name);
  
  cout << "After Reverse: " << name;
  
  //  Time complexity --> o(n/2) that is equal to o(n) linear
  
    return 0;
}
