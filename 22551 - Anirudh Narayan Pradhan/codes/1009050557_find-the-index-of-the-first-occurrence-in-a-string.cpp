class Solution {
public:
    int strStr(string haystack, string needle)  {
        if(haystack.length()==1 && needle.length()==1 && haystack[0]==needle[0])
            return 0;

        int point1=0,point2=0;
        int point_needle=0;
        int next_position=point1;
        for( ; point1 < haystack.length();)
        {
            point_needle=0;
            if(haystack[point1] == needle[point_needle])
            {
                next_position = point1;
                // cout<<"here";
                point2 = point1;
                while (point_needle < needle.length())
                {
                    if(next_position==point1 && haystack[point2]==needle[0])
                        next_position=point2;
                    
                    if(haystack[point2] == needle[point_needle])
                    {
                        ++point2;
                        ++point_needle;
                        
                    }
                    else
                        break;
                }
                cout<<next_position;
                if(point2 == point1+needle.length())
                    return point1;

                else if(next_position!=point1)
                    point1 = next_position;
                else
                    ++point1;
            }
            else
                ++point1;
            
        }
        return -1;
        
    }
};