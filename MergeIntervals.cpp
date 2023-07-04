class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int n=intervals.size();
        vector<int>vi = intervals[0];
        for(auto xi :intervals)
        {
           if(xi[0] <= vi[1])
           {
               vi[1]= max(vi[1],xi[1]);
           }
           else
           {
               ans.push_back(vi);
               vi=xi;
           }
        }
        ans.push_back(vi);
        return ans;
        
    }
};