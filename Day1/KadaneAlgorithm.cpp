class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        long long tSum = 0;
        long long mm = arr[0];
        for(long long x: arr){
            tSum = tSum + x;
            mm = max(tSum, mm);
            if(tSum<0){
                tSum = 0;
            }
        }
        return mm;
        
    }
};
