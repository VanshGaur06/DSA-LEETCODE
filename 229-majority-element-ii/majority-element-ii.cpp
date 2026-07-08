class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       int n = nums.size();
       int count1 = 0;
       int count2 = 0;
       int el1 = INT_MIN;
       int el2 = INT_MIN;

       for(int i = 0 ; i<n ; i++){
        if( count1 == 0 && nums[i] != el2 ){
            count1 = 1;
            el1 = nums[i];
        }

        else if( count2 == 0 && nums[i] != el1 ){
            count2 = 1;
            el2 = nums[i];
        }

        else if( el1 == nums[i] ){
            count1++;
        }
        else if( el2 == nums[i] ){
            count2++;
        }

        else {
            count1--;
            count2--;
        }
       }

       int counta = 0 ;
       int countb = 0;
       vector<int> ans;
       int mini = (int)(n/3) + 1;

       for( int i = 0 ; i<n ; i++){
           if(el1 == nums[i]) counta++;
           if(el2 == nums[i]) countb++;
       }

       if( counta>=mini ) ans.push_back(el1);
       if( countb>=mini ) ans.push_back(el2);

       return ans;
    }
};