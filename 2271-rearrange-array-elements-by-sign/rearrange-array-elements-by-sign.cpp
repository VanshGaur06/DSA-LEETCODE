class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        int positive[n/2];
        int negative[n/2];
       
       int p = 0;
       int k = 0;

        for( int i = 0 ; i<n ; i++){
            if( nums[i] >= 0 ){
               positive[p] = nums[i] ;
               p++;
            }else{
               negative[k] = nums[i] ;
               k++;
            }
        }

        for( int i = 0 ; i<n/2 ; i++){
            nums[i*2] = positive[i];
            nums[i*2 + 1] = negative[i];
        }

        return nums;
    }
};