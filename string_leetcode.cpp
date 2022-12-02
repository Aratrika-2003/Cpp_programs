class Solution {
public:
    bool halvesAreAlike(string s) 
    {
        int count1 = 0,count2 = 0;
        vector<char> alike = {'a','e','i','o','u','A','E','I','O','U'};

        for(int i = 0; i < s.size()/2; i++)
        {
            for(auto ch1 : alike)
            {
                if(s[i] == ch1)
                {
                    count1++;
                    break;
                }
            }
        }
        for(int j = s.size()/2; j < s.size(); j++)
        {
            for(auto ch2 : alike)
            {
                if(s[j] == ch2)
                {
                    count2++;
                    break;
                }
            }
        }
        return count1 == count2;
    }
};
