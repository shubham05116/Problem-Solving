class Solution {
public:
    int majorityElement(vector<int>& a) {
        int n = a.size();
        int c = 0;
        int ans;
        for (int i = 0; i < n; i++) {
            if (c == 0) {
                c++;
                ans = a[i];
            } else if (a[i] == ans) {
                c++;
            } else {
                c--;
            }
        }
        return ans;
    }
};