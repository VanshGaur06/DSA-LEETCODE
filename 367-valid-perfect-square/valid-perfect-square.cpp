class Solution {
public:
    bool isPerfectSquare(int num) {
            int low = 1;
            int high = num;

            while(low<=high){
                int mid = low + ( high - low ) / 2;

            if( mid > num/mid ){
                high = mid - 1 ;
            }
            else{
                if(mid*mid==num){
                    return true;
                }
                low = mid + 1;
            }
        }

        return false;
    }
};