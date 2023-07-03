class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int mRight =0;
        int a = 0;
        for(int i = prices.size()-1; i>=0 ; i--) {
            mRight = max(mRight,prices[i]);
            a = max(a,mRight-prices[i]);
        }

        return a;
        
        
    }
};