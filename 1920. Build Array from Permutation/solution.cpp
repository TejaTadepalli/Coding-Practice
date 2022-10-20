class Solution {
public:
    vector<int> buildArray(vector<int>& nums)
    {
        vector<int> solution;
        solution=nums;
        for(int i=0;i<nums.size();i++)
        {
            solution[i]=nums[nums[i]];
        }
        return solution;
    }
};
