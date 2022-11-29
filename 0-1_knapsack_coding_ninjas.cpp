#include <bits/stdc++.h> 
int driver(vector<int>w,vector<int>val,int n,int maxcap)
{
    vector<int>temp(maxcap + 1);
    
    for(int i = w[0];i <= maxcap;i++)
    {
        if(w[0] <= maxcap)
            temp[i] = val[0];
        else
            temp[i] = 0;
    }
    for(int j = 1;j < n; j++)
    {
        for(int k = maxcap; k >= 0; k--)
        {
            int take,not_take;
            if(w[j] <= k)
            {
                take = val[j] + temp[k - w[j]];
                not_take = 0 + temp[k];
                temp[k] = max(take,not_take);
            }
        }
    }
    return temp[maxcap];
}

int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight) 
{
	// Write your code here
    return driver(weight,value,n,maxWeight);
    
}
