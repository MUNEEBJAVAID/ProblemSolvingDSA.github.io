#include <iostream>
using namespace std;

void  updateValue(int &num3){
  num3+= 60;
}

int main() 
{
  
  int num = 12;
  
  // creating a Refrence variable
  int& num2 = num;
  
  cout << num << endl;
  cout << num2 << endl;
  
  num++;
  num2++;
  
  cout << num << endl;
  cout << num2 << endl;
   
   
  updateValue(num);
   
  cout << num << endl;
  cout << num2 << endl;
  
  // // Don't intialize with nullptr
  // int &setNULL = nullptr;
  
  // // Don't declare
  // int &declare;
  
  int* ptr = &num;
  int* &ptr2 = ptr;
  
    return 0;
}
