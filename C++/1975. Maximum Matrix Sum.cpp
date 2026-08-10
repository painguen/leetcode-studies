class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int x = matrix.size();
        long long negatives = 0;
        long long sum = 0;
        long long small = 999999999;
        for(int i = 0; i < x; i++){
            for(int j = 0; j < x; j++){
                if(matrix[i][j] < 0){
                    negatives++;
                }
                sum += abs(matrix[i][j]);
                    if(abs(matrix[i][j]) < small){
                        small = abs(matrix[i][j]);        
                    }
            }
        }
        if(negatives % 2 != 0){
            sum -= (small*2);
        }
        return(sum);
    }
};
