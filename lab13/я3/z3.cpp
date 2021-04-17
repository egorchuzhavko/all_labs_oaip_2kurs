#include<iostream>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "ru");
	char text[] = "So she was considering in her own mind, as well as she could, for the hot day made her feel very sleepy and stupid, whether the pleasure of making a daisy-chain would be worth the trouble of getting up and picking the daisies, when suddenly a White Rabbit with pink eyes ran close by her.";
	int dlina = strlen(text), summa = 0;
	int znachenie;
	for (int i = 0; i < dlina+1; i++)
	{
		znachenie = isupper(text[i]);
		if (znachenie >= 1)
		{
			summa++;
		}
	}
	cout << "Количество прописных букв = " << summa << endl;
	int m = strlen(text) + 1;
	cout << m << endl;
	char* pm = NULL;
	int korotkoe = 0;
	char* p = strtok(text, " ");
	while (p != NULL)
	{
		int l = strlen(p);
		if (p[l-1] == 'y' && l < m)
		{
			m = l;
			pm = p;
		}
		if (l < m)
		{
			korotkoe = l;
		}
		p = strtok(NULL, " ");
	}
	if (pm != NULL)
	{
		cout << "Самое короткое слово, заканчивающееся на y: " << pm << endl;
	}
	else
	{
		cout << "Не найдено.\n";
	}

	system("pause");
	return 0;
}