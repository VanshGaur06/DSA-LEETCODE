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


        vector<int> ans;
        int n = nums.size();
        map<int , int> mpp ;
        int mini = int (n/3) + 1 ;

        for( int i = 0 ; i<n ; i++){

            mpp[ nums[i] ]++;
            if( mpp[nums[i]] == mini ){
                ans.push_back(nums[i]);
            }

            if( ans.size() == 2) break;
        }
        sort( ans.begin() , ans.end() );
        return ans;
    }
};