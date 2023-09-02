class Solution {
public:
    int reverse(int n) {
        int reversed = 0;
        while (n > 0) {
            int digit = n % 10;
            reversed = reversed * 10 + digit;
            n = n / 10;
        }
        return reversed;
    }

    int countDistinctIntegers(vector<int>& nums) {
        unordered_set<int> distinctIntegers;
        
        for (int num : nums) {
            distinctIntegers.insert(reverse(num));
            distinctIntegers.insert(num); // Add the original integer as well
        }
        
        return distinctIntegers.size();
    }
};
