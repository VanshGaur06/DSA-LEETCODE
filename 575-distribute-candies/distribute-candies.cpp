class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        sort(candyType.begin() , candyType.end());
        int n = candyType.size();
        int count = 1;
        for(int i = 0 ; i<n-1 ; i++){
            if(candyType[i] != candyType[i+1]){
                count++;
            }
        }
        return min(count , n/2);
    }
};