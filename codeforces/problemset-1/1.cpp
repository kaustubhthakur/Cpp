#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

void solve()
{
    int nx;
    cin >> nx;

    string sx;
    cin >> sx;

    int dx = INT_MAX, dy = INT_MAX;
    bool dz = false;

    int ex = 0, ey = 0;
    int ix = 0, iy = 0;
    int fx = -1, fy = -1;

    while (ix < nx)
    {
        if (iy % 2 == 0)
        {
            if (sx[ix] == '0')
            {
                if (fx != -1)
                    fy = 0;
                if (fx == -1)
                    fx = 0;

                ix++;
                iy++;
            }
            else
            {
                ey++;
                ix++;
                continue;
            }
        }
        else
        {
            if (sx[ix] == '1')
            {
                if (fx != -1)
                    fy = 1;
                if (fx == -1)
                    fx = 1;

                ix++;
                iy++;
            }
            else
            {
                ex++;
                ix++;
                continue;
            }
        }
    }

    int ax = 0, ay = 0;

    if (fx != -1)
        ax++;

    if (fy == 0)
        ax++;

    if (fy == 1)
        ay++;

    if (abs(ex - ey) <= 1)
    {
        dx = ex + ey;
        dz = true;
    }
    else if (ey > ex && ey - ax - ex <= 1)
    {
        dx = ex + ey + ax;
        dz = true;
    }

    if (ex > ey && ex - ey - ay <= 1)
    {
        dx = min(dx, ex + ey + ay);
        dz = true;
    }

    ix = 0;
    iy = 0;
    ex = 0;
    ey = 0;
    fx = -1;
    fy = -1;

    while (ix < nx)
    {
        if (iy % 2 == 1)
        {
            if (sx[ix] == '0')
            {
                if (fx != -1)
                    fy = 0;
                if (fx == -1)
                    fx = 0;

                ix++;
                iy++;
            }
            else
            {
                ey++;
                ix++;
                continue;
            }
        }
        else
        {
            if (sx[ix] == '1')
            {
                if (fx != -1)
                    fy = 1;
                if (fx == -1)
                    fx = 1;

                ix++;
                iy++;
            }
            else
            {
                ex++;
                ix++;
                continue;
            }
        }
    }

    ax = 0;
    ay = 0;

    if (fx != -1)
        ay++;

    if (fy == 0)
        ax++;

    if (fy == 1)
        ay++;

    if (abs(ex - ey) <= 1)
    {
        dy = ex + ey;
        dz = true;
    }
    else if (ex > ey && ex - ey - ay <= 1)
    {
        dy = ex + ey + ay;
        dz = true;
    }

    if (ey > ex && ey - ex - ax <= 1)
    {
        dy = min(dy, ex + ey + ax);
        dz = true;
    }

    if (dz)
        cout << min(dx, dy) << '\n';
    else
        cout << -1 << '\n';
}

int main()
{
    int tx;
    cin >> tx;

    while (tx--)
        solve();

    return 0;
}