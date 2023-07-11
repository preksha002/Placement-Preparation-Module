class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) 
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            // whenever the number becomes greater than zero then from there sum of any 3 numbers can't be equal to zero
            if(nums[i]>0) break;
            // below if statement makes sure that duplicate values is not considered
            // hence distinct triplets are there in ans
            if(i>0 and nums[i]==nums[i-1]) continue;

            int j=i+1, k=n-1, sum=0;
            while(j<k){
                sum=nums[i]+nums[j]+nums[k];
                // k-- so that sum decreases
                if(sum>0) k--;
                // j++ so that sum increases
                else if(sum<0) j++;
                else{
                    ans.push_back({nums[i],nums[j],nums[k]});
                    int lowestTillnow=nums[j], highestTillnow=nums[k];

                    // for single i multiple j and k can exist such that 3sum=0
                    // so we are doing j++ and k++ to remove duplicates
                    // and to find different values of j and k in next iterations, while(j<k)
                    while(j<k and nums[j]==lowestTillnow) j++;
                    while(j<k and nums[k]==highestTillnow) k--;
                }
            }
        }
        return ans;
        
    }
};