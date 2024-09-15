class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int maxp = 0;
        int mini = INT_MAX;
        int n = arr.size();
        int sum = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] < arr[i + 1]) {
                mini = arr[i];
                 int diff =  arr[i+1]-mini;
                  sum = sum + diff;
            }
           
        }
        return sum;
    }
};