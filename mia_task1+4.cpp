#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
// task 3
int main()
{
    int r, c;
    cin >> r;
    cin >> c;
    int justice_league[r][c];
    int villains[r][c];
    // take num to justice
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> justice_league[i][j];
        }
    }
    // take num to villains
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> villains[i][j];
        }
    }
    // check who will win
    int justice = 0;
    int villain = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (justice_league[i][j] > villains[i][j])
            {
                justice++;
            }
            if (justice_league[i][j] < villains[i][j])
            {
                villain++;
            }
        }
    }
    if (justice > villain)
    {
        cout << "Justice League";
    }
    else if (justice < villain)
    {
        cout << "Villains";
    }
    else
    {
        cout << "Tie";
    }
    _getch();
}
