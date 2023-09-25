#include <iostream>

using namespace std;

struct truba {
	string name;
	int dlina;
	int diam;
	string status;
};

struct ks {
	string name;
	int cehNumber;
	int cehWorkNumber;
	string effectivness;
};

void trubaChange() {
	int point = 0;
	string newName;
	int newDlina;
	int newDiam;
	string newStatus;
	truba tom;
	while (point != 5) {
		cout << "Выберите, что вы хотите сделать:" << endl << "1) Изменить имя" << endl << "2) Изменить длинну" << endl
			<< "3) Изменить диаметр" << endl << "4) Изменить статус" << endl << "Для завершения редактирования нажмите 5" << endl;
		cin >> point;
		if (point == 1) {
			cout << "Введите новое имя: ";
			cin >> newName;
			tom.name = newName;
			point = 0;
			cout << tom.name;
		}
		if (point == 2) {
			cout << "Введите новую длинну: ";
			cin >> newDlina;
			tom.dlina = newDlina;
			point = 0;
		}
		if (point == 3) {
			cout << "Введите новый диаметр: ";
			cin >> newDiam;
			tom.diam = newDiam;
			point = 0;
		}
		if (point == 4) {
			cout << "Введите новый статус: ";
			cin >> newStatus;
			tom.status = newStatus;
			point = 0;
		}
	}
}

void ksChange() {
	int point = 0;
	string newName;
	int newCehNumber;
	int newCehWorkNumber;
	string newEffectivness;
	ks tom;
	while (point != 5) {
		cout << "Выберите, что вы хотите сделать:" << endl << "1) Изменить имя" << endl << "2) Изменить количество цехов" << endl
			<< "3) Изменить количество рабочих цехов" << endl << "4) Изменить эффективность" << endl << "Для завершения редактирования нажмите 5" << endl;
		cin >> point;
		if (point == 1) {
			cout << "Введите новое имя: ";
			cin >> newName;
			tom.name = newName;
			point = 0;
		}
		if (point == 2) {
			cout << "Введите новую длинну: ";
			cin >> newCehNumber;
			tom.cehNumber = newCehNumber;
			point = 0;
		}
		if (point == 3) {
			cout << "Введите новый диаметр: ";
			cin >> newCehWorkNumber;
			tom.cehWorkNumber = newCehWorkNumber;
			point = 0;
		}
		if (point == 4) {
			cout << "Введите новый статус: ";
			cin >> newEffectivness;
			tom.effectivness = newEffectivness;
			point = 0;
		}
	}
}
void vivod() {
	truba vtom;
	ks vbon;
	cout << "*************************************" << endl;
	cout << "Труба:" << endl << "Имя: " << vtom.name << endl << "Длина: " << vtom.dlina << endl << "Диаметр: " << vtom.diam <<
		endl << "Статус: " << vtom.status << endl;
	cout << "*************************************" << endl;
	cout << "КС:" << endl << "Имя: " << vbon.name << endl << "Количество цехов: " << vbon.cehNumber << endl << 
		"Количество рабочих цехов: " << vbon.cehWorkNumber << endl << "Эффективность: " << vbon.effectivness << endl;
	cout << "*************************************" << endl;
}
int main() {
	int point;
	while (true) {
		setlocale(LC_ALL, "Russian");
		cout << "Выберите что вы хотите сделать:" << endl << "1) Изменить трубу" << endl << "2) Изменить КС" << endl <<
			"3) Вывести данные" << endl;
		cin >> point;
		if (point == 1) {
			trubaChange();
		}
		else if (point == 2) {
			ksChange();
		}
		else if (point == 3) {
			vivod();
		}
		else {
			cout << "Вы ввели неверное значение, попробуйте снова";
		}
	}
}
