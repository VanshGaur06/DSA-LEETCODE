class Solution {
public:
    int countCommas(int n) {

        int count = 0;

        if(n >= 1000){
            count += n - 999;
        }

        if(n >= 1000000){
            count += n - 99999;
        }

        if(n >= 1000000000){
            count += n - 99999999;
        }

        return count;
    }
};