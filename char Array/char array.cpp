#include <iostream>
using namespace std;

int main() 
{

  char name[100];
   
  cout <<" Enter you name: " << endl;
  cin >> name;
  
  for(int  i = 0 ; i < 7; i++){
    cout << "Index: " << i << " Character: " << name[i] << endl; 
  }
  
  int nullValue = name[6];
  cout<< "Null termination Ascii Value: " << nullValue << endl;
  
  
  for(int  i = 0 ; i < 7; i++){
    cin >> name[i];
  }
  
    for(int  i = 0 ; i < 7; i++){
    cout << "Index: " << i << " Character: " << name[i] << endl; 
  }
  
    int nullValue = name[6];
  cout<< "Ascii Value of null character: " << nullValue << endl;
  
  
  char ch[20];
  
 
cin.getline(ch , 10);
 
delimeter -->32-->space 
 cin.getline(ch , 10 , 32);
 
 for(int i = 0; ch[i] != '\0'; i++){
   cout << ch[i];
 }
  

  
    return 0;
}
