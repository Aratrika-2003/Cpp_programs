class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) 
    {
        map<int,int>frequency;
        set<int> set;
        for(auto i : arr)
        {
            frequency[i]++;
        }
        for(auto ch : frequency)
        {
            set.insert(ch.second);
        }
        // if(set.size() == frequency.size())
        //     return true;
        // else
        //     return false;
        return (set.size() == frequency.size());
    }
};
