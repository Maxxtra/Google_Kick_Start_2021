#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int t;
    int n, d, c, m;
    string a;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        cin >> n >> d >> c >> m;
        cin >> a;
        int aux_d = 0, aux_c = 0;
        int j;
        for (j = 0; j < n; j++)
            if (a[j] == 'D')
                aux_d++;
            else
                aux_c++;
        if (aux_d == 0)
            cout << "Case #" << i << ": YES\n";
        else if (aux_c == 0)
        {
            if (d > aux_d)
                cout << "Case #" << i << ": YES\n";
            else
                cout << "Case #" << i << ": NO\n";
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (a[j] == 'D')
                {
                    if (d == 0)
                    {
                        cout << "Case #" << i << ": NO\n";
                        break;
                    }
                    d--;
                    c += m;
                    aux_d -= 1;
                }
                else if (a[j] == 'C')
                {
                    if (c == 0)
                    {
                        if (aux_d == 0)
                        {
                            cout << "Case #" << i << ": YES\n";
                            break;
                        }
                        cout << "Case #" << i << ": NO\n";
                        break;
                    }
                    c--;
                }
                if (j == n - 1)
                    cout << "Case #" << i << ": YES\n";
            }
        }
    }
}
