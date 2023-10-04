class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> endd;
        for (int i =1;i<=n;i++)
        {
            if (i%3==0 && i%5==0)
                endd.push_back("FizzBuzz");
            else if(i%5==0)
                endd.push_back("Buzz");
            else if(i%3==0)
                endd.push_back("Fizz");
            else
                endd.push_back(to_string(i));
        }
        return endd;
    }
};