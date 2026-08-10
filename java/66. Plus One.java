class Solution {
    public int[] plusOne(int[] digits) {
        for(int loopcount = digits.length -1; loopcount >= 0; loopcount--){
            if(digits[loopcount] + 1 != 10){
                digits[loopcount]+=1;
                return digits;
            }
            digits[loopcount] = 0;
        }
        int[] secondArray = new int[digits.length+1];
         secondArray[0] = 1;
         return secondArray;
    }
}
