class Solution {
public:
    int strStr(string haystack, string needle)  {
        if(haystack.length()==1 && needle.length()==1 && haystack[0]==needle[0])
            return 0;

        int point1=0,point2=0;
        int point_needle=0;
        for( ; point1 < haystack.length(); point1++)
        {
            point_needle=0;
            if(haystack[point1] == needle[point_needle])
            {
                cout<<"here";
                point2 = point1;
                while (point_needle < needle.length())
                {
                    if(haystack[point2] == needle[point_needle])
                    {
                        ++point2;
                        ++point_needle;
                    }
                    else
                        break;
                }
                if(point2 == point1+needle.length())
                    return point1;
            }
        }
        return -1;
        
    }
};