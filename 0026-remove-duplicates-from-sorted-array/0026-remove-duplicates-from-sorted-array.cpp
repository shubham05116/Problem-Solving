class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int k =0;
        int n = nums.size();
        if(n==1){
            return 1;
        }
        for(int i =0 ; i<n-1; i++){
            if(nums[i]!=nums[i+1]){
                nums[k++]=nums[i];
            }
           
        }
        nums[k++] = nums[n-1];
        return k;
    }
};