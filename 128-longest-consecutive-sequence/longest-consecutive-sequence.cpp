class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        if( n == 0){
            return 0 ;
        }
        sort( nums.begin() , nums.end());

        int count = 1;
        int maxi = 1;

        for( int i = 0 ; i < n-1 ; i++){
            if( nums[i+1] == nums[i]+1){
                ans.push_back(nums[i]);
                count++;
            }
             
            else if( nums[i+1] == nums[i]){
                continue;
            } 

            else{
                count = 1;
            }
        
        maxi = max( maxi  , count);
        }

        return maxi;
    }
};