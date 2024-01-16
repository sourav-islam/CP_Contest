#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long sum = 0;
        while (n--)
        {
            int x;
            cin >> x;
            sum += x;
            if (sum > 200000)
                break;
        }
        int val = sqrt(sum);
        if ((val * val) == sum)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
