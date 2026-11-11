#include <bits/stdc++.h>
using namespace std;

int main()
{

    string t = "nice to see you";

    int counts = 0;
    for (int i = t.size() - 1; i >= 0; i--)
    {
        if (t[i] >= 65 && t[i] <= 122){
            counts++;
        }
        else{
            break;
        }
    }

    cout << counts;
    return 0;
}