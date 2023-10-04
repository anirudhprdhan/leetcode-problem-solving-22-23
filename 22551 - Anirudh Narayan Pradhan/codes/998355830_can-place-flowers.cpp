class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        if(n==0)
        return true;
        if(flowerbed.size()==0)
        {
            if(n==0)
                return true;
            else
                return false;
        }
        else if(flowerbed.size()==1)
        {
            if(flowerbed[0]==1)
            {
                if(n==1)
                return false;
                else 
                return true;
            }
            else
            return true;

        }
        if(flowerbed[0]==0 && flowerbed[1]==0)
        {
            flowerbed[0]=1;
            n-=1;
        }
        for(int i=1;i<flowerbed.size()-1;)
        {
            if(flowerbed[i]==1)
                i+=2;
            else if(flowerbed[i-1]==0 && flowerbed[i+1]==0)
            {
                if(flowerbed[i]==0)
                {
                    flowerbed[i]=1;
                    n-=1;
                }
                i+=2;
            }
            else
                i+=1;
        }
        if(flowerbed[flowerbed.size()-2]==0 && flowerbed[flowerbed.size()-1]==0)
        {
            flowerbed[0]=1;
            n-=1;
        }

        if(n<=0)
            return true;
        return false;
    }
};