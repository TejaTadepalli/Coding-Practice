class Solution
{
  public:
    string defangIPaddr(string address)
    {
      string value="";
      for(int i=0;i<address.length();i++)
      {
        if(address[i]=='.')
          value+="[.]";
        else
          //value.push_back(address[i]); can also be done
          value+=address[i];
      }
      return value;
    }
};
