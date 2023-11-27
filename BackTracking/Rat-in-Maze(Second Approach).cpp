#include <iostream>
#include <vector>
using namespace std;


    int r[4] = {1 ,  0 , 0 , -1};
    int c[4] = {0 , -1 , 1 , 0};
    char dr[4] = {'D' , 'L' , 'R' , 'U'};

bool isSafe(vector<vector<int>> &maze , int i ,int  j ,int &row , int& col , vector<vector<bool>>& visted){
  if(((i >= 0 && i < row )&&(j >= 0 && j < col)) && (maze[i][j] == 1) && (visted[i][j] == false)){
    return true;
  }else{
    return false;
  }
}

void  mazeGame(vector<vector<int>> &maze , int i ,int  j ,int &row , int& col , vector<vector<bool>>& visted ,string output ,vector<string>&PossibleWays ){
  // Base case
  if(i*j == (row - 1)*(col- 1)){
    PossibleWays.push_back(output);
    return;
  }
  
for(int k = 0; k < 4; k++){
    
    int newI = i + r[k];
    int newJ = j + c[k];
    char newDr = dr[k];
    
   if(isSafe(maze , newI , newJ , row , col , visted)){
    // Visited Marks
    visted[newI][newJ] = true;
    
    // Recursive Call
      mazeGame(maze , newI , newJ , row , col , visted , output + newDr , PossibleWays);
      
    //BackTracking
     visted[newI][newJ] = false;
   }
}
  
}

int main() 
{

    vector<vector <int>> maze{{1,0,0},{1,1,0},{1,1,1}};
    int row = maze.size();
    int col = maze[0].size();
    if(maze[0][0] == 0){
        cout<<"No Path exists";
        return 0;
    }
    // Creating a 2D array for visited array
    vector<vector<bool>>visited(row,vector<bool>(col,false));
    // Source value should be 1 as rat is standing on it only
    visited[0][0] = true;
    // Create string which stores all the paths
    vector<string>PossibleWays;
    string output = "";
    
   mazeGame(maze , 0 , 0 , row , col , visited , output , PossibleWays);
    
    for(auto i:PossibleWays){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}
