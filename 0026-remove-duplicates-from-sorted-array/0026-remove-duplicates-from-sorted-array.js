/**
 * @param {number[]} nums
 * @return {number}
 */
var removeDuplicates = function(nums) {
    let newArray = [];
    let n = nums.length;

    for(let i =0 ; i<n ; i++){
        if(!newArray.includes(nums[i]))
        newArray.push(nums[i]);
    }

    nums.length = 0;
    nums.push(...newArray);

    return newArray.length;
};