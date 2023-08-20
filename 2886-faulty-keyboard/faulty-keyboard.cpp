class Solution {
public:
    string finalString(string s) {
        string final;
        for(char c=0; c<s.size(); c++)
        {
            if(s[c]=='i')
                reverse(final.begin(), final.end());
            else
                final=final+s[c];
        }
        return final;
    }
};