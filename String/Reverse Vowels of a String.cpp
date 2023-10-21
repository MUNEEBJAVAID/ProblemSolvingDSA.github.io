#include <iostream>
#include <vector>
using namespace std;

 bool isVowel(char ch){
       if((ch == 'a'||ch =='A')||(ch == 'e'||ch =='E')||
                      (ch == 'i'||ch =='I')
         ||(ch == 'o'||ch =='O')||(ch == 'u'||ch =='U')){
             return true;
         }else{
             return false;
         }
   }

    string reverseVowels(string s) {
        int start = 0;
        int end = s.length() - 1;

        while(start < end){
            if(isVowel(s[start]) && isVowel(s[end])) {
                swap(s[start] , s[end]);
                start++;
                end--;
            }else if(!isVowel(s[start])){
                start++;
            }else if(!isVowel(s[end])){
                end--;
            }
        }
        return s;
    }    

int main() 
{

 string str = "HeLLO";
 cout << reverseVowels(str);
    return 0;
}
