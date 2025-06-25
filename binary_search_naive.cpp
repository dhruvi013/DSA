// Online C++ compiler to run C++ program online
#include <iostream>
#include <vector>
using namespace std;

int findrow(vector<vector<int>>& matrix, int target){
    int top= 0;
    int bottom = matrix.size() - 1;
    int col = matrix[0].size();
    int row = matrix.size();
    while(top <= bottom ){
        int mid = top + (bottom - top) /2 ;
        
        if ( target >= matrix[mid][0] && target <= matrix[mid][col-1]){
            return mid;
        } else if (target < matrix[mid][0]){
            bottom = mid - 1;
        } else {
            top = mid + 1;
        }   
    }
    return -1;
}

int binaryseacrhinrow(vector<int>& row, int target){
    int left = 0, right = row.size() -1 ;
   while (left <= right){
        int mid = left + (right - left) / 2;


       if ( row[mid] == target){
            return mid;
       }  else if  ( row[mid] < target){
           left = mid + 1;
       } else {
           right = mid - 1;
       }  
    }
    return false;
    }


int main() {
    int target = 30;
    vector<vector<int>> matrix {{1,3,5,7},{10,11,16,20},{21,30,31,34}};
    
    int row  = findrow( matrix,target);
    if(row != -1){
        int col = binaryseacrhinrow(matrix[row],target);
         if(col != -1){
        cout << "target at the (" << row << "," << col << ")"; 
    } else {
         cout << "target  not at the (" << row << ","  << ")"; }
    } else {
         cout << "target  not at the rNGE\n " ;
    
    }
    
    return 0;
}