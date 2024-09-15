class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int size = nums.size();
        vector<int> result(size); 
      
        
        int left = 0;        
        int right = size - 1; 
        int position = size - 1; 
      
       
        while (left <= right) {
           
            if (nums[left] * nums[left] > nums[right] * nums[right]) {
               
                result[position] = nums[left] * nums[left];
                ++left; 
            } else {
               
                result[position] = nums[right] * nums[right];
                --right; 
            }
            --position; 
        }
      
        
        return result;
    }
};