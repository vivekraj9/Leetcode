class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int start=0;
        int max1=0;
        int end=nums.size()-1;
        while(start<end)
        {
            max1=max(max1,nums[start]+nums[end]);
            start++;
            end--;
        }
        return max1;
    }
};