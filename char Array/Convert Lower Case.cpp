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

void convertLowerCase(char name[]){
  
   for(int i = 0; i < getLength(name); i++){
     
     if(name[i] >= 'A' && name[i] <= 'Z'){
      name[i] = name[i] - 'A' + 'a';
     }
     
  }
   
}

int main() 
{

  char name[100];
   
  cout <<"Enter you name: " << endl;
  cin.getline(name , 100);

    cout <<"Before Conversion: " << name << endl;
  convertLowerCase(name);
   cout <<"After Conversion: " << name << endl;
  
 
    return 0;
}
