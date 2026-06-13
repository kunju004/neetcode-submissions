class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row=matrix.size()-1;
        int col=matrix[0].size()-1;
        int l,r;
        l=0,r=col;
        while(l<=row && r>=0)
        {
            
            if(matrix[l][r]==target)
            return true;

            else if(target<matrix[l][r])
            r--;

            else if(target>matrix[l][r])
            l++;

            
        }
        return false;

    }
};
