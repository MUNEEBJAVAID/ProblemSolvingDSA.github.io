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


void   spaceReplaces(char name[]){
  
  for(int i = 0; i < getLength(name); i++){
    if(name[i] == ' '){
      name[i] = '@';
    }
  }
  
}

int main() 
{

  char name[100];
   
  cout <<"Enter you name: " << endl;
  cin.getline(name , 100);

  
  cout << "Befor Replaces: " << name << endl;
  
  spaceReplaces(name);
  
  cout << "After Replaces: " << name;
    return 0;
} 
