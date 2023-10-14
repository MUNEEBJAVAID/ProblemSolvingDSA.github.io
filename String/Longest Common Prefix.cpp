#include <iostream>
#include <vector>
using namespace std;

string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        int i = 0;

        while(true){
            char currChar = 0;
         for(auto str : strs){
        // out of bound
            if(i == str.length()){
                 currChar = 0;
                 break;
             }
        // comparing character
             if(currChar == 0){
            currChar = str[i];
             }else if(str[i] != currChar){
                 currChar = 0;
                 break;
             }
         }
            if(currChar == 0){
                break;
            }
            ans.push_back(currChar);
            i++;
        }

        return ans;

   }        

int main() 
{
 vector<string> strs = {"flower","flow","flight"};
 
 cout << longestCommonPrefix(strs);
    return 0;
}
