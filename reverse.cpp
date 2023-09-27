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
int main()
{
    char ch[100];
    cin.getline(ch, 100);
    int l = len(ch, 100);
    cout << l << endl;
    stringReverse(ch, l);
    // after revetse
    cout << ch << endl;
}