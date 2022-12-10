#include <iostream>
#include <string>

using namespace std;

int main()
{
    int t, sx, sy, ex, ey;
    cin >> t >> sx >> sy >> ex >> ey;
    string s;
    cin >> s;

    for (int i = 0; i < t; i++)
    {
        if (sx < ex && s[i] == 'E')
            sx++;
        else if (sx > ex && s[i] == 'W')
            sx--;

        if (sy < ey && s[i] == 'N')
            sy++;
        else if (sy > ey && s[i] == 'S')
            sy--;

        if (sx == ex && sy == ey)
        {
            cout << i + 1 << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}
