class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin() , candyType.end());
        int n = candyType.size();
        int m = n/2;
        int count = 1;
        for(int i = 0 ; i<n-1 ; i++){
            if(candyType[i] != candyType[i+1]){
                count++;
            }
        }

        if(m>=count){
            return count;
        }
        return m;
    }
};