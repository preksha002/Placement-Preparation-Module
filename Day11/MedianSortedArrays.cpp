
class Solution {
    private:
        int dop_num1(vector<int>& nums1) {
            if (nums1.size() == 0) {
                return 0;
            } else if (nums1.size()/2 > nums1.size() -1 && nums1.size() > 1) {
                return nums1[nums1.size()/2 -1];
            } else {
                return nums1[nums1.size()/2];
            }
        }
        int dop_num2(vector<int>& nums2) {
            if (nums2.size() == 0) {
                return 0;
            } else if (nums2.size() > 1){
                return nums2[nums2.size()/2 - 1];
            } else {
                return nums2[nums2.size()/2];
            }
        }

    public:
        double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
            vector<int> all;
            all = nums1;
            for (int i = 0; i < nums2.size(); i++) all.push_back(nums2[i]);
            std::sort(all.begin(), all.end());
            if (all.size() % 2 == 0) {
                return (double)(dop_num1(all)+dop_num2(all))/2;
            } else {
                return (double)dop_num1(all);
            } 
        }
};