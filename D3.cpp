class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      int n=matrix.size();
     int m=matrix[0].size();
      int low=0;
      int high=n-1;
      while(low<=high){
        int mid=(low+high)/2;
        if(matrix[mid][m-1]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }

      }
         if(low==n){
            return false;
        }
      int left=0;
      int right=m-1;
      while(left<=right){
        int mid=(left+right)/2;
     
        if(matrix[low][mid]==target){
            return true;
        }
        else if(matrix[low][mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
      }
      return false;


    }
};