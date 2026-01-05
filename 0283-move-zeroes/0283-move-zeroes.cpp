class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int lastNonZeroIndex = 0;

        // Step 1: Move all non-zero elements to the beginning
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[lastNonZeroIndex++] = nums[i];
            }
        }

        // Step 2: Fill the remaining part with zeros
        for (int i = lastNonZeroIndex; i < nums.size(); i++) {
            nums[i] = 0;
        }
    }
};
