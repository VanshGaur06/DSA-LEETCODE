class Solution {
public:
    int mySqrt(int x) {
        int low = 1;
        int high = x;

        while(low<=high){

            int mid = low + (high-low) / 2;

            if(mid > x/mid){
                high = mid - 1;
            }
            else{
                if(mid*mid == x){
                    return mid;
                }
                low = mid + 1;
            }
        }

        return high;
    }
};