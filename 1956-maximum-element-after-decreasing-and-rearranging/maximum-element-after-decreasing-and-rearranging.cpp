/*class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        for( int i = 1 ; i<n ; i++){
            if( arr[0] == 1 && abs(arr[i] - arr[i - 1]) <= 1){
                 return arr[n-1];
        }else if( arr[0] == 1 && abs(arr[i] - arr[i - 1])  > 1 ){
            arr[i+1] = arr[i] + 1 ; 
            return arr[n-1];
        }else{
            if( arr[i] == 1  && abs(arr[i] - arr[i - 1])  > 1 ){
                swap( arr[0] , arr[i] );
                arr[i+1] = arr[i] + 1 ; 
                 return arr[n-1];
            }
        } 
        }
        return n;
    }
};


class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        
        for( int i = 1 ; i<n ; i++){
            if( arr[0] == 1 && abs(arr[i] - arr[i - 1]) <= 1){
                 return arr[n-1]; 
        }else{
            arr[0]
        }
    }
};*/

class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {

        sort(arr.begin(), arr.end());

        arr[0] = 1;

        for(int i = 1; i < arr.size(); i++) {

            arr[i] = min(arr[i], arr[i-1] + 1);
        }

        return arr.back();
    }
};