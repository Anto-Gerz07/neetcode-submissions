class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         unordered_map<int, vector<char>> rows;
        unordered_map<int, vector<char>> cols;
        unordered_map<int, vector<char>> grids;


        for (int i = 0; i < 9; i++){
            for (int j = 0; j < 9; j++){
                char currVal = board[i][j];

                if (board[i][j] != '.'){
                    if (find(rows[i].begin(), rows[i].end(), currVal) != rows[i].end()){
                    return false;
                }
                rows[i].push_back(currVal);


                if (find(cols[j].begin(), cols[j].end(), currVal) != cols[j].end()){
                    return false;
                }
                cols[j].push_back(currVal);


                int grid = (i/3) * 3 + (j/3);

                if (find(grids[grid].begin(), grids[grid].end(), currVal) != grids[grid].end()){
                    return false;
                }
                grids[grid].push_back(currVal);
            }
        }
                }

        return true;
    }
};
