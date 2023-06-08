#include <iostream>
#include <windows.h>
#include <string>
#include <tuple>
#include <vector>
using namespace std;
using Tuple = tuple<string, int, double>;
using Tupledouble = tuple<string, double>;
Tuple funtup(string s, int a, double d)
{
	s.append("!");
	return make_tuple(s, a, d * 10);
}
void printTupleOfThree(Tuple t)
{
	cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ", "
		<< std::get<2>(t) << ")" << endl;
}
void printTupleOfThree(Tupledouble t)
{
	cout << "("
		<< std::get<0>(t) << ", "
		<< std::get<1>(t) << ")" << endl;
}
Tuple change(Tuple t) {
	get<0>(t) = "SSSeven";
	get<1>(t) = 5;
	get<2>(t) = 8.8;
	return t;
}
Tupledouble sum(Tuple t) {
	double sum = get<1>(t) + get<2>(t);
	auto t1 = make_tuple(get<0>(t), sum);
	return t1;
}
int main()
{

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	vector<string> v1{ "one", "two", "three", "four", "five", "six" };
	vector<int> v2 = { 1, 2, 3, 4, 5, 6 };
	vector<double> v3 = { 1.1, 2.2, 3.3, 4.4, 5.5, 6.6 };
	auto t0 = make_tuple(v1[0], v2[0], v3[0]);
	printTupleOfThree(t0);
	auto t1 = funtup(v1[1], v2[1], v3[1]);
	printTupleOfThree(t1);
	t1 = change(t1);
	printTupleOfThree(t1);
	Tupledouble t2 = sum(t1);
	printTupleOfThree(t2);
	return 0;

}
