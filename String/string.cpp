#include <iostream>
#include <string>
using namespace std;

bool compare(string a , string b){
  
  if(a.length() != b.length()){
    return false;
  }
  
  for(int i = 0; i < a.length(); i++){
    if(a[i] != b[i]){
      return false;
    }
  }
  
  return true;
}

int main() 
{
 // create
 string str;
 
 // input
 getline(cin , str);
 
 //Print 
 cout << str << endl;
 
 cout << "Length: " << str.length() << endl;
 cout << "isEmpty: " << str.empty() << endl;
 cout << "Sub string: " <<str.substr(0 , 5) << endl;
 
 str.push_back('j');
     cout << str << endl;
   
  str.pop_back();
     cout << str << endl;
   
   string a = "muneeb";
   string b = "muneeb";
   
  // if(a.compare(b) == 0){
  //   cout << "Exactly Same";
  // }else{
  //   cout << "Not Same";
  // }
   
   
     if(compare(a,b)){
     cout << "Exactly Same" << endl;
   }else{
     cout << "Not Same \n";
   }
   
   
   
   string sentence = "Hello je Kaya Haall Chaal";
   
  string target = "kia";
   
  // if(sentence.find(target) == string::npos){
  //   cout << "Not Found";
  // }else{
  //   cout << "Found";
  // }
   
  // start length target
   sentence.replace(9 , 4 ,target);
   cout << sentence << endl;
   
  // start length
   sentence.erase(9 , 4);
   cout << sentence;
  
   
    return 0;
}
