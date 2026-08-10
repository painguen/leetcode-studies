var isPalindrome = function(x) {
    if(x < 0){
        return(false)
    }
    let rev = 0;
    let n = x;
    while(n != 0){
        let digit = n % 10;
        rev = rev * 10+digit;
        n = Math.floor(n/10);
    }
    if(rev == x){
        return(true)
    }
    else{
        return(false)
    }
};
