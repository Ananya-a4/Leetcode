class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int index = 0;

        for (int start = 0; start < nums.size(); start++) {
            if(nums[start] != val) {
                nums[index] = nums[start];
                 index++;
            }
        }
        return index;
    }
};