var lengthOfLongestSubstring = function(s) {
    let n = s.length;
    if (n === 0) return 0;

    var maxLength = 0;
    let str = new Set()
    let left =0;

    for (let right = 0; right < n; right++) {
        while(str.has(s[right])){
            str.delete(s[left])
            left++;
        }
        str.add(s[right]);
        
        maxLength = Math.max(maxLength, right-left+1);
    }

    return maxLength;
};

