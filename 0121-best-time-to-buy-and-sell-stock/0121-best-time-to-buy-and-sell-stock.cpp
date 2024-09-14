class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n = arr.size();
        int mini=INT_MAX;
        int maxp=0 ;
        for(int i =0 ; i<n ; i++){
            mini = min(mini , arr[i]);
            int diff= arr[i]-mini;
            maxp= max(maxp , diff);

        }
        return maxp;
    }
};