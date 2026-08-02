class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(); 
        int cols = matrix[0].size(); 
        int low = 0; 
        int high = rows * cols - 1; 
        while(low <= high){ 
            int mid = (low + high)/2; 
            int row = mid / cols; 
            int col = mid % cols; 
            if(target == matrix[row][col]) return true; 
            else if(target > matrix[row][col]) low = mid + 1; 
            else high = mid - 1; 
        }
    return false; 
        
    }
};