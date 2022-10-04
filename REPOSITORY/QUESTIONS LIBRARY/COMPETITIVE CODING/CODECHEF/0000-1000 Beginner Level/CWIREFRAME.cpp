//CWIREFRAME
#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int k, n, m, x;
    cin >> k;
    while (k--)
    {
        cin >> n >> m >> x;
        cout << (2 * n + 2 * m) * x << endl;
    }
    return 0;
}