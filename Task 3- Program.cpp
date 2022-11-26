#include <bits/stdc++.h>
using namespace std;
int main()
{

    int a[13] = {11, 23, 56, 97, 32, 40, 72, 65, 88, 56, 32, 79, 72};
    int n = 13;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i = 1; i <= n; i++)
    {
        if (a[i] == a[i - 1])
            continue;

        cout << a[i - 1] << " ";
    }
}