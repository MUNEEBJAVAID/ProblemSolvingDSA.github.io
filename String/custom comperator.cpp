#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

  // For Ascending Order we use custom comperator 
  // custom--> apny hisab sy design kar skta hun
  // comperator -> compare karna
  
// Ascending
// bool cmp(char a , char b){
//   // sorting processing ma a ko phly rkhun ya b koo.
//   return a < b;
// }

// Descending
bool cmp(char a , char b){
  // sorting processing ma a ko phly rkhun ya b koo.
  return a > b;
}


// Descending vector
bool comp(int a , int b){
  // sorting processing ma a ko phly rkhun ya b koo.
  return a > b;
}

int main() 
{
  // string str = "babbar";
  // // sort in lexicographicaly order / alphabet order --> ASCII Value of a is  -> 65
  // sort(str.begin() , str.end() , cmp);
  // cout << str << endl;
   

  vector<int> v{5,4,6,7,2,3};
 sort(v.begin() , v.end() , comp);
 
 for(auto it: v){
   cout << it << " ";
 }
 cout << endl;
 
// Ascending string char
 vector <string> str{"babbar" , "muneeb" , "javaid" , "wao"};
   
 for(int i = 0; i < str.size(); i++){
    sort(str[i].begin() , str[i].end() , cmp);
 }
 
 for(auto s: str){
   cout << s << " ";
 }
    return 0;
}
