class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        int x;
        map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]+=1;
        }
        for(auto p :m){

        if(p.second>1)
            x= p.first;
        }
        
        return x;
    }
};