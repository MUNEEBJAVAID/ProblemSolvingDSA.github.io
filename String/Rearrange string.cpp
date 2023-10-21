#include <bits/stdc++.h> 
string reArrangeString(string &s)
{
	
        // find most occurent character and fit it non-adjacently
        // fill the rest
    
        int mp[26] = {0};


        for(int i = 0; i < s.length(); i++){
            mp[s[i] - 'a']++;
        } 

        int max_freq = INT_MIN;
        char max_freq_char;
        for(int i = 0; i < 26; i++){
            if(mp[i] > max_freq){
                max_freq = mp[i];
                 max_freq_char = i + 'a';
            }
        }
        // most occurent character  fit it non-adjacently
        int index = 0;
        while(max_freq > 0 && index < s.length()){
          s[index] = max_freq_char;
          index += 2;
          max_freq--;
        } 
//   fit it non-adjacently bcz
        if(max_freq != 0){
           return "not possible";
        }

    mp[max_freq_char - 'a'] = 0;

    //    fill the rest char

   for(int i = 0; i < 26; i++){
        while(mp[i] > 0){
         index = index >= s.length()? 1 : index;
          s[index] = i + 'a';
              mp[i]--;
            index += 2;
        } 
   }

   return s;
    }

    // tc ---> o(n)


