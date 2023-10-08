#include <iostream>
#include <string.h>
using namespace std;

int main() 
{

  char name[100];
   
  cout <<"Enter you name: " << endl;
  cin.getline(name , 100);
  
  int length = 0;
  
  for(int i = 0; name[i] != '\0'; i++){
    length++;
  }
  
  cout << "length --> " << length << endl;
  // using predefind function
  cout << "length --> " << strlen(name); 
  
  
//  Time complexity --> o(n)

  
    return 0;
}
