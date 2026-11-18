class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int maxl = 0;

        while (left < right) {

            int width=right-left;
            int small;
            if(heights[left]<heights[right])
            small=left;

            else
            small=right;
        
            maxl=max(maxl,width*heights[small]);
            // Hint 3: area = width * smaller height.

            // Hint 4: Update maxl.

            if (heights[left] < heights[right]) {
                left++;
            }
            else {
                right--;
            }
        }

        return maxl;
    }
};