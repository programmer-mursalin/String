#include <bits/stdc++.h>
using namespace std;
int len(char ch[], int size)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        index++;
    }
    return index;
}
void stringReverse(char ch[], int len)
{
    int i = 0;
    int j = len - 1;
    while (i <= j)
    {
        swap(ch[i], ch[j]);
        i++;
        j--;
    }
}
void upperCase(char ch[], int n)
{
    int index = 0;
    while (ch[index] != '\0')
    {
        char cur = ch[index];
        if (cur >= 'a' && cur <= 'z')
        {
            ch[index] = cur - 'a' + 'A';
        }
        index++;
    }
}
// void rePlace(char ch, int n)
// {
//     int index = 0;
//     while (ch[index] != '\0')
//     {
//         if (ch[index] == '@')
//         {
//             ch[index] = ' ';
//         }
//         index++;
//     }
// }
bool palidrom(char ch[], int n)
{
    int i = 0;
    int j = n - 1;
    while (i <= j)
    {
        if (ch[i] == ch[j])
        {
            i++;
            j--;
        }
        else
        {
            return false;
        }
    }
    return true;
}
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int l = len(ch, 100);
    // cout << l << endl;
    // stringReverse(ch, l);
    // // after revetse
    // cout << ch << endl;
    // upperCase(ch, 100);
    // // cout << ch << endl;
    // rePlace(ch, 100);
    // cout << ch << endl;
    bool ispalidrom = palidrom(ch, l);
    if (ispalidrom)
    {
        cout << "palidrom" << endl;
    }
    else
    {
        cout << "not palidrom" << endl;
    }
}
