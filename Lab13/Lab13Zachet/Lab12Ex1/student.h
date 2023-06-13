#include "human.h"
#include <string>
#include <vector>
#include <iostream>
using namespace std;

class student : public human {
public:
	void setData()
	{
		human::setData();
		cout << "Введите последние 5 оценок => ";
		for (int i = 0; i < 5; i++) {
			int n;
			cin >> n;
			scores.push_back(n);
		}
	}
	void getData() {
		human::getData();
		cout << "Средняя оценка: " << get_average_score()<<endl;
	}
	// Получение среднего балла студента
	float get_average_score()
	{
		unsigned int count_scores = this->scores.size();
		unsigned int sum_scores = 0;
		float average_score;
		for (unsigned int i = 0; i < count_scores; ++i) {
			sum_scores += this->scores[i];
		}
		average_score = (float)sum_scores / (float)count_scores;
		return average_score;
	}
private:
	// Оценки студента
	std::vector<int> scores;
};