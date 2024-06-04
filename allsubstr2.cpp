<<<<<<< HEAD
#include <bits\stdc++.h>
using namespace std;
void substring(string str, string output)
{
    if (str.empty())
    {
        cout << output << endl;
        ;
        return;
    }
    substring(str.substr(1), output);
    substring(str.substr(1), output + str[0]);
}
int main()
{
    string str;
    getline(cin, str);
    string output = " ";
    substring(str, output);

    return 0;
=======
#include <bits\stdc++.h>
using namespace std;
void substring(string str, string output)
{
    if (str.empty())
    {
        cout << output << endl;
        ;
        return;
    }
    substring(str.substr(1), output);
    substring(str.substr(1), output + str[0]);
}
int main()
{
    string str;
    getline(cin, str);
    string output = " ";
    substring(str, output);

    return 0;
>>>>>>> 6145df2e6edf6577d64161186124509ccee64e22
}