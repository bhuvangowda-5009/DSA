class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size()/2;
        sort(nums.begin(),nums.end());
     for(int i=0;i<nums.size();i++){
     int count=0;
      while(i+1<nums.size() && nums[i]==nums[i+1]){
        count++;
        i++;
        
    }
     count++;
     if(count>n){
        return nums[i];
     } 
     }
     return 0;
    }
};