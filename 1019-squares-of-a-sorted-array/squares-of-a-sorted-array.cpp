class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> final;
        for(int i=0; i<nums.size(); i++)
        {
            final.push_back(nums[i]*nums[i]);
        }
        sort(final.begin(), final.end());
        return final;
    }
};