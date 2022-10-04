class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies)
    {
      int n=candies.size();
      vector<bool> solution(n);
      int maxCandy=*max_element(candies.begin(),candies.end());   //max_element "points" to the location (POINTER)
      for(int i=0;i<n;i++)
      {
        solution[i]=((maxCandy-candies[i])<=extraCandies);        //we will fill solution depending upon the value we get from condition
      }
      return solution;
    }
};
