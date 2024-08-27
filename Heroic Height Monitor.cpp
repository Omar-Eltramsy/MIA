#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    int height_measure;
    cin >> height_measure;
    int array[height_measure];
    // get an array from user
    for (int i = 0; i < height_measure; i++)
    {
        cin >> array[i];
    }
    int max_height = 0;
    for (int i = 0; i < height_measure; i++)
    {
        if (max_height < array[i])
        {
            max_height = array[i];
        }
    }
    cout << max_height;
    _getch();
}
