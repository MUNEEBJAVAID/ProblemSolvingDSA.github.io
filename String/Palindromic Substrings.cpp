class Solution {
public:
  int expandAtIndex(string s , int left , int right){
    
    int count = 0;

// jab tak match karega , tak tak count increment kardo  and i ko peechy and j ko aage krdo..
    while(left >= 0 && right < s.length() && s[left] == s[right]){
          count++;
           left--;
           right++;
    }

    return count;

    }
    int countSubstrings(string s) {
      

        int totalCount = 0;
        int n = s.length();
         
         for(int center = 0; center < n; center++){
        //    even
          int evenKaAns = expandAtIndex(s , center , center + 1);
          totalCount = totalCount + evenKaAns;

        //   odd
         int oddKaAns = expandAtIndex(s , center , center);
             totalCount = totalCount + oddKaAns;
         }
         return totalCount;
    }
};
