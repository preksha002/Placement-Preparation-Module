class Solution {
public:
    void helper(vector<int> nums , vector<vector<int>> &ans , vector<int> &tmp , vector<int> &vis){
        if(tmp.size()==nums.size()){
            ans.push_back(tmp);
            return;
        }
        for(int i=0 ; i<nums.size() ; i++){
            if(vis[i] == true) continue;
            vis[i] = 1;
            tmp.push_back(nums[i]);
            helper(nums , ans , tmp , vis);
            tmp.pop_back();
            vis[i]=0;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> tmp , vis(nums.size() , 0);
        helper(nums , ans , tmp , vis);
        return ans;
    }
};