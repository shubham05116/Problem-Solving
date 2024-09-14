class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int k) {

        // Brute force Approach:

        int n = arr.size();
        //    int sum =0;
        //    for(int i =0 ; i<n-1; i++){
        //     for(int j =i+1; j<n ; j++){
        //         sum= arr[i]+arr[j];
        //         if(sum==k){
        //             return {i ,j};
        //         }
        //     }
        //    }
        //    return {-1 , -1};

        // optimal by using two pointers:

        // first sort the array:
        unordered_map<int, int> mpp;

        for (int i = 0; i < n; i++) {
            int num =arr[i];
            int diff = k-num ;
            if (mpp.find(diff) != mpp.end()) {
                return { i, mpp[diff] };
            }
            mpp[num] = i;
        }
        return {-1, -1};
    }
};