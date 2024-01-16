// approach 1
#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{

    int test;
    cin >> test;
    while (test--)
    {
        int size;
        cin >> size;
        string s;
        cin >> s;

        if (s.length() == 3 || s.length() == 2)
        {
            cout << s << endl;
            continue;
        }
        cout << s[0] << s[1];

        for (int i = 2; i < s.length() - 1; i++)
        {
            if (s[i] == 'b' || s[i] == 'd' || s[i] == 'c')
            {
                if (s[i + 1] == 'e' || s[i + 1] == 'a')
                {
                    cout << "." << s[i];
                }
                else
                {
                    cout << s[i] << "." << s[i + 1];
                    i++;
                }
            }
            else
                cout << s[i];
        }
        cout << s[s.length() - 1];
        cout << endl;
    }
}

// approach 2
/* #include <iostream>
using namespace std;
void solve()
{
    int n;
    string s;
    cin >> n >> s;
    string ans = "";
    ans += s[0];
    for (int i = 1; i < n; i++)
    {
        if (s[i + 1] == 'a' || s[i + 1] == 'e')
        {
            ans += '.';
        }
        ans += s[i];
    }
    cout << ans << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
} */