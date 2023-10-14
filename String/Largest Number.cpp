static bool myCom(string a , string b){
   string str1 = a + b;
   string str2 = b + a;

    return str1 > str2;
}
    string largestNumber(vector<int>& nums) {
      
      vector<string> str;
      
      for(int i = 0; i < nums.size(); i++){
          str.push_back(to_string(nums[i]));
      }

      sort(str.begin() , str.end() , myCom);
     
      if(str[0] == "0"){
        return "0";
    } 
    
    string ans ="";
    for(auto it: str){
        ans += it;
    }

    return ans;
    }
