class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        // step 1: convert string into minutes value 
        vector<int> minutes;
         
         for(int i = 0; i < timePoints.size(); i++){
             int hour = stoi(timePoints[i].substr(0 , 2));
              int minute = stoi(timePoints[i].substr(3 , 2));

              int totalMinutes = hour * 60 + minute;
              minutes.push_back(totalMinutes);
         }

    //  step 2: sort the array bcz find minimum minutes 
         sort(minutes.begin() , minutes.end());
      
    //    step 3: differnce and calculate min diff
   
   int min = INT_MAX;
  int n = minutes.size()-1;
   for(int i = 0; i < n; i++){
     int diff = minutes[i+1] - minutes[i];
      if(diff < min){
          min = diff;
      }
   }

// step 4: array ke last minute value ko compare nai kiya tha first minutes value ke sath 
   int lastMinites = minutes[0] + 1440 - minutes[n];
     if(lastMinites < min){
          min = lastMinites;
      }
   return min;


    }
};
