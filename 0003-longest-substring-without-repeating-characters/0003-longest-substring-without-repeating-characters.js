var lengthOfLongestSubstring = function(s) {
    let n = s.length;
    if (n === 0) return 0;

    let maxLength = 1;

    for (let i = 0; i < n; i++) {
        let count = 1;
        for (let j = i + 1; j < n; j++) {
            // Check if s[j] has occurred between s[i] to s[j - 1]
            let found = false;
            for (let k = i; k < j; k++) {
                if (s[k] === s[j]) {
                    found = true;
                    break;
                }
            }
            if (found) break;
            count++;
        }
        maxLength = Math.max(maxLength, count);
    }

    return maxLength;
};
