#include <iostream>
#include "worker.h"
#include "Department.h"
#include "Director.h"
#include "Control.h"
using namespace std;

int main()
{
	
	Department* d1 = new Department(231);
	Department* d2 = new Department(546);

	Control control = Control();
	worker w1 = worker("Alik", "Alikov", "Alikovich", 26, "89999999999");
	worker w2 = worker("Ivan", "Osipov", "Olegovich", 27, "81234242325");
	worker w3 = worker("Aleks", "Ivanov", "Aleksandrovich", 20, "81231232345");

	control.addWorker(w1);
	control.addWorker(w2);
	control.addWorker(w3);

	control.setWorkerDepartment(w1,d1);
	control.setWorkerDepartment(w2, d2);
	control.setWorkerDepartment(w3, d1);

	control.setWorkerHours(w1, 123);
	control.setWorkerHours(w2, 23);
	control.setWorkerHours(w3, 520);
	
	control.setRate(w1, 10);
	control.setRate(w2, 50);
	control.setRate(w3, 5);

	Director dr1 = Director("Anastasia", "Osipova", "Olegovna", 25, "89545545555");
	Director dr2 = Director("Aleksandr", "Krasilnikov", "Germanovich", 45, "8123412332111");
	
	control.addDirector(dr1);
	control.addDirector(dr2);

	control.addDepartment(dr1, *d1);
	control.addDepartmentWorker(dr1, *d1, w1);
	control.addDepartmentWorker(dr1, *d1, w3);
	control.addDepartment(dr2, *d1);
	control.addDepartmentWorker(dr2, *d1, w2);

	control.saveDirectors();
	control.saveWorkers();
	delete[] d1, d2;

}
