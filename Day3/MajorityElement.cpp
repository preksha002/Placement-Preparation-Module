class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        vector<int>x;
        int r;
        int c= nums.size()/2;
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]+=1;
        }
        
        for(auto q:m)
        {
           if(q.second >c)
               r= q.first;
        }
        
        return r;
        
    }
};
