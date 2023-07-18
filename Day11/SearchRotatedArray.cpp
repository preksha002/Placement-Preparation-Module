class Solution{
    int solve(vector<int>& nums){
        int start =0;
        int end =nums.size()-1;
        while(start<end){
            int mid  = start+(end-start)/2;
            if(nums[mid]>=nums[0]) start = mid+1;
            else end = mid;
        }
     return start;
    }
    int ans(vector<int>& nums, int target,int start,int end){
        if(end==start ){
            if(target!= nums[start]) return -1 ; 
            return start ;  
        }
        int s =start;
        int e = end;
        if(start<0) return -1;
        if(end>=nums.size()) return -1;
        while(e>=s){
            int mid  =s+(e-s)/2;
            if(nums[mid]==target) return mid;
            else if(nums[mid]>target) e = mid-1;
            else s = mid+1;
        }
        return -1;
    }
public:
    int search(vector<int>& nums, int target) {
        if(nums.size() == 1 ){
            if(target != nums[0]) return -1 ; 
            return 0 ;  
        }
        int idx = solve(nums);
       if( (nums[0]<=target) && (target<=nums[idx-1])) return ans(nums,target,0,idx-1);
       else if((nums[idx]<=target )&&(target<=nums[nums.size()-1]))
       return ans(nums,target,idx,nums.size()-1);
      else return -1;
    }
};
