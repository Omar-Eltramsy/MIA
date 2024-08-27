#include <bits/stdc++.h>
#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
int main()
{
    int size;
    cin >> size;
    int array[size];
    // get an array from user
    for (int i = 0; i < size; i++)
    {
        cin >> array[i];
    }
    int target;
    cin >> target;
    int check = 0;
    for (int i = 0; i < size; i++)
    {
        if (array[i] == target)
        {
            check = i;
        }
    }
    if (check)
    {
        cout << check;
    }
    else
    {
        cout << -1;
    }
    _getch();
}
