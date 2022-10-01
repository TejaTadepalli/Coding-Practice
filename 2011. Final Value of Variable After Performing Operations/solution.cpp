class Solution
{
  public:
    int finalValueAfterOperations(vector<string>& operations)
    {
      int x=0;    //initial value
      for(int i=0;i<operations.size();i++)
      {
        if(operations[i]=="--X" or operations[i]=="X--")
          x-=1;
        else if(operations[i]=="X++" or operations[i]=="++X")
          x+=1;
        else
          continue;   //operation is not correctly written
      }
      return(x);
    }
};
