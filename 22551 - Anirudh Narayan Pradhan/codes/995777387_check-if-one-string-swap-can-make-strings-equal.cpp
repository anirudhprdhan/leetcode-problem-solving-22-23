class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        int l1;
        l1=s1.size();

        // if two strings are same returning that both are same
        if(s1.compare(s2)==0)
            return true;
        // if above cases are false then we need to find 2 chars that could be swapped
        else
        {
            vector<char> mis;
            for(int i=0;i<l1;i++)
            {
                if(s1[i]!=s2[i])
                {
                    mis.push_back(s1[i]);
                    mis.push_back(s2[i]);
                }
            }
            if (mis.size()>4 || mis.size()<4)
                return false;
            else
                if (mis[1]==mis[2] && mis[0]==mis[3])
                    return true;
        }
        return false;
    }
};