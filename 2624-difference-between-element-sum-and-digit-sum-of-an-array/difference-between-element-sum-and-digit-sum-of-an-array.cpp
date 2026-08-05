class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int n = nums.size();

        int digitSUM = 0;
        int elementSUM = 0;
        int digit = 0;

        for(int i = 0 ; i<n ; i++){
            int x = nums[i];

            while(x>0){
                digit = x%10;
                digitSUM += digit;
                x /= 10;
            }
        }

        for(int i = 0 ; i<n ; i++){
            elementSUM += nums[i];
        }

        return abs(elementSUM - digitSUM);
    }
};