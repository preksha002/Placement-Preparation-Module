class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n;
        n = nums.size();
         set<vector<int>>s;
      
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {
            for(int j=i+1;j<n-2;j++)
            {
                int left=j+1;
                int right=n-1;
                while(left<right)
                {
                    int sum1=nums[i]+nums[j];
                    int sum2=target-(nums[left]+nums[right]);
                    if(sum2<sum1)
                    {
                        right--;
                    }
                    else if(sum1==sum2)
                    {
                        vector<int>v{nums[i],nums[j],nums[left],nums[right]};
                        s.insert(v);
                        left++;
                    }
                    else
                    {
                        left++;
                    }
                }
            }
        }
        vector<vector<int>>ans(s.begin(),s.end());
        return ans;
        
    }
};