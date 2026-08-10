class Solution {
    public int[] twoSum(int[] nums, int target) {
        for(int loops = 0; loops < nums.length; loops++){
            for(int secondaryloop = loops + 1; secondaryloop < nums.length; secondaryloop++){
                if(nums[secondaryloop] + nums[loops] == target){
                    return new int[] {loops, secondaryloop}; 
                }
            }
        }
        return new int[] {};
    }
}
