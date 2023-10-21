#include <iostream>
using namespace std;

string removeOccurrences(string s, string part) {
      
        int start = s.find(part);

        while(start != string::npos){
            s.erase(start , part.length());
            start = s.find(part);
        }
      return s;
            }
            
            
int main() 
{
      
   string sentence = "daabcbaabcabc";
   
  string target = "abc";
   
   
  cout <<  removeOccurrences(sentence, target);
    return 0;
}
