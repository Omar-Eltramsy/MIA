#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int num;
    cin >> num;

    vector<int> input(num);
    for (int i = 0; i < num; i++)
    {
        cin >> input[i];
    }

    int ones = 0;
    for (int i = 0; i < num; i++)
    {
        if (input[i] == 1)
        {
            ++ones;
        }
    }

    vector<int> out;
    int max_value = 0;
    for (int i = 0; i < num; i++)
    {
        if (input[i] == 1)
        {
            if (max_value != 0)
            {
                out.push_back(max_value);
            }
            max_value = 0;
        }
        else
        {
            max_value = max(max_value, input[i]);
        }
    }
    if (max_value != 0)
    {
        out.push_back(max_value);
    }

    cout << ones << '\n';
    for (int i = 0; i < ones; i++)
    {
        cout << out[i] << ' ';
    }

    return 0;
}
