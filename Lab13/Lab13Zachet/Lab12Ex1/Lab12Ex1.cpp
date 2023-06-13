#include <iostream>
#include <vector>
#include "human.h"
#include "student.h"
#include "teacher.h"
using namespace std;

int main()
{

	system("chcp 1251");
	/*
	// Оценкистудента
	std::vector<int> scores;
	// Добавление оценок студента в вектор
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(4);
	scores.push_back(4);
	scores.push_back(5);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);
	scores.push_back(3);

	student* stud = new student("Петров", "Иван", "Алексеевич", scores);
	std::cout << stud->get_full_name() << std::endl;
	std::cout << "Средний балл : " << stud->get_average_score() << std::endl;

	unsigned int teacher_work_time = 40;
	teacher* tch = new teacher("Сергеев", "Дмитрий", "Сергеевич",
		teacher_work_time);
	std::cout << tch->get_full_name() << std::endl;
	std::cout << "Количество часов: " << tch->get_work_time() <<
		std::endl;

	*/

	human* humans[100];
	int n = 0;
	char choice;
	do {
		cout << "Вводить данные для учителя или для студента (a/b)? => ";
		cin >> choice;
		if (choice == 'a')
			humans[n] = new teacher;
		else
			humans[n] = new student;
		humans[n++]->setData();
		cout << "Продолжить (y/n)?";
		cin >> choice;

	} while (choice == 'y');

	for (int j = 0; j < n; j++) 
		humans[j]->getData(); 
	cout << endl;




	return 0;

}