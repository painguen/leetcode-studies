var sumFourDivisors = function(nums) {
    let len = nums.length
    let finalsum = 0;
    for (let i = 0;i < len; i++){
        let n = nums[i];
        let count = 0
        let sum = 0
            for(let c = 1; c <= n; c++){
                
                if(n % c === 0){
                    sum = sum+c;
                    count++;
                }
                if (count > 4) break;
            }
        if(count === 4){
                    finalsum = sum+finalsum
                }
    }
    return(finalsum)
};
