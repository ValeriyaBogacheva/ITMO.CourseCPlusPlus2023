
#include <iostream>
using namespace std;

int main()
{
	system("chcp 1251");
	int s, k, m;
	s = 0;
	cout << "Введите диапазон k и m =>";
	cin >> k >> m;
	for (int i = 1; i <= 100; i++)
	{
		if ((i > k) && (i < m))
			continue;
		s += i;
	}
	cout << "Сумма = " << s;
	return 0;
}

