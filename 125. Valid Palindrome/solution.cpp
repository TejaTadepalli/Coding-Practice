class Solution
{
  public:
    bool isPalindrome(string s)
    {
        string p="",rev;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))  //checking if digit or non-alphanumeric
                p+=s[i];
            else if(isalpha(s[i]))  //making all digits lowercase
                p+=tolower(s[i]);
        }
        rev=p;
        reverse(rev.begin(),rev.end()); //making rev string reversed
        return(p==rev);
    }
};
