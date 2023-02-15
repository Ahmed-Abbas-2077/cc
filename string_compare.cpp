#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int x, y;
    string s1, s2;

    cin >> s1 >> s2;

    int size1 = s1.size();
    for (int i = 0; i < size1; i++)
    {
        x = tolower(static_cast<unsigned char>(s1[i]));
        y = tolower(static_cast<unsigned char>(s2[i]));
        if (x != y)
        {
            if (x > y)
                cout << "1";
            else
                cout << "-1";
            return 0;
        }
    }

    if (s1.size() > s2.size())
        cout << "1";
    else if (s1.size() < s2.size())
        cout << "-1";
    else
        cout << "0";

    return 0;
}
