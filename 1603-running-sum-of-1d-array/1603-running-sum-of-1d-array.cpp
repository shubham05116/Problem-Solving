class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size();
        int start=nums[0];
        for(int i =0 ; i<n ; i++){
            if(i==0){
                nums[i]=start;
            }
            else{
                start = start+nums[i];
                nums[i]=start;
            }
        }
        return nums;
    }
};