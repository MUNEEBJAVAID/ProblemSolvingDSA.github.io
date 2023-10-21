  bool isAlpha(string s , int index){
      if(s[index] >= 'a' && s[index] <= 'z' || s[index] >= 'A' && s[index] <= 'Z'){
          return true;
      }else{
          return false;
      }
    }
    string reverseOnlyLetters(string s) {
        int i = 0;
        int j = s.length()-1;

        while(i <= j){
            if(isAlpha(s , i) && isAlpha(s , j)){
                swap(s[i] , s[j]);
                i++;
                j--;
            }else if(isAlpha(s , i) == false){
                i++;
            }else if(isAlpha(s , j) == false){
                j--;
            }
        }
        return s;
    }
