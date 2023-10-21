int SeocndLargestNumber(int n, vector<int> a){

int Largest = INT_MIN;

   for(int i= 0 ; i < a.size(); i++){
       if(a[i] > Largest){
           Largest = a[i];
       }
   }

  int sLArgest= INT_MIN;
    for(int i= 0 ; i < a.size(); i++){
       if(a[i] > sLArgest && a[i] != Largest){
           sLArgest = a[i];
       }
   }

   return sLArgest != INT_MIN?sLArgest:Largest;
}


int SeocondSmallestNumber(int n, vector<int> a){

int Smallest = INT_MAX;

   for(int i= 0 ; i < a.size(); i++){
       if(a[i] < Smallest){
           Smallest = a[i];
       }
   }

  int sSmallest= INT_MAX;
    for(int i= 0 ; i < a.size(); i++){
       if(a[i] < sSmallest && a[i] != Smallest){
           sSmallest = a[i];
       }
   }

   return sSmallest != INT_MAX?sSmallest:Smallest;

}
vector<int> getSecondOrderElements(int n, vector<int> a) {

 int sLN =   SeocndLargestNumber(n , a); 
 int sSN =   SeocondSmallestNumber(n , a);
   
   return {sLN , sSN};
}
