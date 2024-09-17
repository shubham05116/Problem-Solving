class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int l = 0;
        int r = 0;
        int maxi = 0;
        vector<int> hash(256, -1);

        while (r < n) {
            if (hash[s[r]] != -1) {
                l = max(hash[s[r]] + 1, l);
            }
            hash[s[r]] = r;
            int len = r - l + 1;
            maxi = max(len, maxi);
            r++;
        }
        return maxi;
    }
};