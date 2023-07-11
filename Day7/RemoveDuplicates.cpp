class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {

        nums.resize(std::distance(nums.begin(), unique(nums.begin(), nums.end())));
        return size(nums);
        
    }
};