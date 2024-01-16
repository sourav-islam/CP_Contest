#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        // approach 1
        /* for (int i = 0; i < 3; i++)
        {
            char a, b, c;
            cin >> a >> b >> c;
            int sum1 = int('A' + 'B' + 'C');
            int sum2 = int(a + b + c);
            if (sum1 != sum2)
                cout << char(sum1 - (sum2 - '?')) << endl;
        } */

        // approach 2
        int ctn[3] = {0};
        for (int i = 0; i < 9; i++)
        {
            char ch;
            cin >> ch;
            if (ch == 'A')
                ctn[ch - 'A']++;
            else if (ch == 'B')
                ctn['B' - 'A']++;
            else if (ch == 'C')
                ctn['C' - 'A']++;
        }
        for (int i = 0; i < 3; i++)
        {
            if (ctn[i] == 2)
                cout << char(i + 'A') << endl;
        }
    }

    return 0;
}