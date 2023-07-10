class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n= nums.size();
        int ind=-1;
        for(int i=n-2;i>=0;i--){ // We need to find the longest prefix match,
                                // So that we can make combination of the remaining 
                            // values to get the next permutaion.
            if(nums[i]<nums[i+1]){ // As long as the values are sorted in ascending order 
                                //we cannot find the next greater permutation. 
                                //So we must get a value which is lesser than the previos one
                ind=i;
                break;
            }
        }
        if(ind==-1){
                   // It indicates it is lexicographically the largest permutation 
                    //or we can say it is in descending order. So we will simply reverse it 
                    //to get the smallest possible permutation 
                    //which can be made from those elements
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=0;i--){ 
                // As we know all the values after 'ind' are sorted in descending order,
                // so we can simply traverse from the end to the begining 
            //to get the value which is greater than ind but smaller than the remaining values.
            // Then we can swap them. 
            //and we must break out of the loop. 
            if(nums[i]>nums[ind]){
                swap(nums[i],nums[ind]);
                break;
            }
        }
        reverse(nums.begin()+ind+1,nums.end());// After that the 
                        //remaining array will be revesed to get the next permutation
        return;
        
    }
};
