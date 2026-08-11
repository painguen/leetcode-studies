int missingInteger(int* nums, int numsSize) {
    int solution = nums[0];
    int found = 0;
    for(int y = 1; y < numsSize; y++){
        if(nums[y] == nums[y - 1]+1){
            solution = solution + nums[y];
        }
        else{
            break;
        }
    }
    for(int y = 0; y < numsSize; y++){
        for(int z = 0; z < numsSize; z++){
            if(solution == nums[z]){
            found = 1;
            }
        }

        if(found == 1){
            solution+=1;
            found = 0;
        }
    }

    return solution;
}