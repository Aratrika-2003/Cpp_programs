#include <bits/stdc++.h>

using namespace std;

void Prime(int num)
{
    vector<bool> check(num,true);
    for(int i = 2; i * i < num; i++)
    {
        if(check[i] == true)
        {
            for(int j = i * i; j < num; j += i)
                check[j] = false;
        }

    }
    for(int k = 2; k < num; k++)
    {
        if(check[k])
            cout << k << ' ';
    }

}
int main()
{
    Prime(30);

    return 0;
}
