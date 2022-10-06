class Solution
{
  public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums)
    {
      vector<int> greaterNum;
      int greater=0;
      for(int i=0;i<nums.size();i++)
      {
        greater=0;
        for(int j=0;j<nums.size();j++)
        {
          if(j!=i and nums[j]<nums[i])
            greater++;
        }
        greaterNum.push_back(greater);
      }
      return(greaterNum);
    }
};
