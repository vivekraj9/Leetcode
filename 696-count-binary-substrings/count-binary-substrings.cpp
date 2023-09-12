class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int> ans;
        int total=1;
        int sum=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==s[i+1])
            {
                total++;
            }
            else{
                ans.push_back(total);
                total=1;
            }
            
        }
        for(int i=0; i<ans.size()-1; i++)
        {
            sum=sum+min(ans[i], ans[i+1]);
        }
        return sum;
    }
};