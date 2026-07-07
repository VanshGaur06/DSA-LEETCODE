class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
    /*    int el ;
        int count = 0 ;
        int n = nums.size();
        
        for( int i = 0 ; i<n ; i++){
            if( count == 0){
                count = 1 ;
                el = nums[i]; 
            }

            else if( nums[i] == el ){
                count++;
            }

            else{
                count--;
            }
        }

        int count1 = 0;
        vector<int> ans;
        for( int i = 0 ; i<n ; i++){
            if( nums[i] == el ){
                count1++;
            }

            if( count1 > n/3 ){
               ans.push_back(el) ;
            }
        }
        return ans; */


        vector<int> ans ;
        int n = nums.size();

        for( int i = 0 ; i<n ; i++){
            if( ans.size() == 0 || ans[0] != nums[i]){
                int count = 0;

                for( int j = 0 ; j<n ; j++){
                     if( nums[j] == nums[i]){
                        count++;
                     }
                }
                     if( count > n/3){
                        ans.push_back(nums[i]);
                     }
            }
                     if( ans.size() == 2){
                        break;
                     }
                }

        return ans;
    }
};