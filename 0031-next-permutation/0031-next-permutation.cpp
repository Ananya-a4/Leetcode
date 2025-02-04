class Solution
{
public:
    void nextPermutation(vector<int>& nums)
    {
        int pos = -1;

        for(int i=1; i<nums.size(); i++)
        {
            if(nums[i-1] < nums[i]) pos = i-1;
        }

        if(pos != -1)
        {
            for(int i=nums.size()-1; i>pos; i--)
            {
                if(nums[pos] < nums[i])
                {
                    swap(nums[pos], nums[i]);
                    break;
                }
            }
        }

        reverse(nums.begin()+pos+1, nums.end());
    }
};