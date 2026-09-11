class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
        int n = nums.size();

        int singlesum = 0;
        int doublesum = 0;

        for(int x : nums){
            if(x>=10){
                doublesum += x;
            }
            else{
                singlesum += x;
            }
        }

        return singlesum > doublesum || doublesum > singlesum ;
    }
};