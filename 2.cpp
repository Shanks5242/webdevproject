#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, l;
        cin >> n >> k >> l;
        int arr[n][2];

        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
            if (l == arr[i][1])
            {
                count++;
                
            }
        }
        if (count >= k)
        {
            int arr2[count];
            int z = 0;
            for (int i = 0; i < n; i++)
            {

                if (l == arr[i][1])
                {
                    arr2[z] = arr[i][0];
                    z++;
                }
            }
            
            sort(arr2, arr2 + count);
            
            int sum = 0;
            for (int h = count - 1; h > count - 1 - k; h--)
            {
                sum += arr2[h];
            }
            cout << sum << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
