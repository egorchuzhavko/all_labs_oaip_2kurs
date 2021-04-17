#include <iostream>
#include <string.h>
#include <stdio.h>s
using namespace std;
int main()
{
    setlocale(LC_ALL, "ru");
    const int n = 100;
    char s[n];
    cout << "Введите строку" << endl;
    gets_s(s);
    int count = 0;
    int p = strlen(s), i = 0;
    while (i < p)
    {
        if (s[i] != ' ' && (s[i + 1] == ' ' || s[i + 1] == '\0'))
        {
            count++;
        }
        i++;
    }
    cout << endl << "Количество слов: " << count;
    return 0;
}