<<<<<<< HEAD
#include <bits\stdc++.h>
using namespace std;
int substring(string str, string output[])
{
    if (str.empty())
    {
        output[0] = "";
        return 1;
    }
    int size = substring(str.substr(1), output);
    for (int i = 0; i < size; i++)
    {
        output[i + size] = str[0] + output[i];
    }
    return 2 * size;
}
int main()
{
    string str;
    getline(cin, str);
    string output[1000];
    int count = substring(str, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
=======
#include <bits\stdc++.h>
using namespace std;
int substring(string str, string output[])
{
    if (str.empty())
    {
        output[0] = "";
        return 1;
    }
    int size = substring(str.substr(1), output);
    for (int i = 0; i < size; i++)
    {
        output[i + size] = str[0] + output[i];
    }
    return 2 * size;
}
int main()
{
    string str;
    getline(cin, str);
    string output[1000];
    int count = substring(str, output);
    for (int i = 0; i < count; i++)
    {
        cout << output[i] << endl;
    }
    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}