#include"str.h"

int main()
{
    str s1(20),s2(20),s3,sdest;
    int len;
    cout << "Enter a string " << endl;
    cin >> s1;
    len = s1.length(s1);
    s1.copy(sdest);
    s3 = s1.concat(s2);

    cout << s1;
    cout << len;
    cout << sdest;
    cout << s3;

    return 0;
}