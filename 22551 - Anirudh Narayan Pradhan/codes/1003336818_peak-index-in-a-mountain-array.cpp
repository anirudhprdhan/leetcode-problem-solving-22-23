class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size_a=arr.size();
        int l=0,r=size_a-1,m;
        while(l<r)
        {
            m=l+(r-l)/2;

            if(arr[m]>arr[m+1])
                r=m;
            else if(arr[m]<arr[m+1])
                l=m+1;
        }
        return l;
    }
};