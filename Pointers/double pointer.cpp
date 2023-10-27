#include <iostream>
using namespace std;

// void util(int* ptr){
//   // pass by value
//   // ptr = ptr + 1;
  
//   // update values
//   *ptr = *ptr + 1;
// }


// void util(int** ptr){
//   // ptr  =  ptr + 1;
//   // *ptr = *ptr + 1;
//     **ptr = **ptr + 1;
// }

int main() 
{
  
  // int a = 9;
  // int*p = &a;
  // int**q = &p;
  
  // cout << a << endl;
  // cout << q << endl;
  // cout << p << endl;
  // cout << *p << endl;
  
  // util(q);
  
  // cout << a << endl;
  // cout << q << endl;
  // cout << p << endl;
  // cout << *p << endl;
  
  
  
  
  
  int a = 12;
  int* ptr1 = &a;
  int** ptr2 = &ptr1;
  int*** ptr3 = &ptr2;
  
  cout << *ptr1 << endl;
    cout << **ptr2 << endl;
      cout << ***ptr3 << endl;
  
  
  
  
  
  
  
  
  
  
  
  
  // int a = 12;
  // int *ptr = &a;
  
  // cout << a << endl;
  // cout << ptr << endl;
  // cout << *ptr << endl;
  
  // util(ptr);
  
  // cout << a << endl;
  // cout << ptr << endl;
  // cout << *ptr << endl;
  
  

  
    // int a = 7;
    
    // int* ptr = &a;
    
    // int** ptr2 = &ptr;
    
    // int***ptr3 = &ptr2;
    
    // cout << a << endl;
    // cout << &a << endl;
    //   cout << ptr << endl;
    //   cout << &ptr << endl;
    //     cout << *ptr << endl;
    //     cout << ptr2 << endl;
    //       cout << &ptr2 << endl;
    //       cout << *ptr2 << endl;
    //         cout << **ptr2 << endl;
    //         cout << ptr3 << endl;
    //           cout << &ptr2 << endl;
    //           cout << *ptr3 << endl;
    //             cout << **ptr3 << endl;
    //             cout << ***ptr3 << endl;
                 
                 
    return 0;
}
