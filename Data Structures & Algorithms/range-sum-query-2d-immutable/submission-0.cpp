class NumMatrix {
private:
    vector<vector<int>> prefix;
public:
    NumMatrix(vector<vector<int>>& matrix) {
        prefix = vector<vector<int>>(matrix.size() + 1, vector<int>(matrix[0].size() + 1));
        for (int i = 0; i < matrix.size() + 1; i++){
            for (int j = 0; j < matrix[0].size() + 1; j++){
                if (i == 0 || j == 0){
                    prefix[i][j] = 0;
                }
                else{
                    // prefix[i][j] = matrix[i][j] + top + left - topLeft
                    prefix[i][j] = matrix[i - 1][j - 1] + prefix[i][j - 1] + prefix[i - 1][j] - prefix[i - 1][j - 1];
                }
                
            }
        }
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        int r1 = row1 + 1;
        int r2 = row2 + 1;
        int c1 = col1 + 1;
        int c2 = col2 + 1;
        int result = 0;
        int totalSum = prefix[r2][c2];
        int leftSum = prefix[r2][c1 - 1];
        int topSum = prefix[r1 - 1][c2];
        int topLeftSum = prefix[r1 - 1][c1 -1];
        // reverse of what we did for prefix sum

        result = totalSum - leftSum - topSum + topLeftSum;

        return result;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */