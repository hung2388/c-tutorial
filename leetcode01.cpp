class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.size()>2)
        {
            int index=1;
            string sa="";
            while(index<s.size())
            {
                char temp=(s[index]-'0'+s[index-1]-'0')%10;
                sa+=temp+'0';
                index++;
            }
            s=sa;
        }
        if(s[0]==s[1])
        {
            return true;
        }
        return false;
    }
};