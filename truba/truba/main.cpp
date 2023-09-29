#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <windows.h>

using namespace std;
std::ofstream out;

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

void trubaChange(truba& pipe) {
	int point = 0;
	string newName = pipe.name;
	int newDlina = pipe.dlina;
	int newDiam = pipe.diam;
	string newStatus = pipe.status;
	if (pipe.dlina > 0) {
		while (point != 5) {
			cout << "Выберите, что вы хотите сделать:" << endl << "1) Изменить имя" << endl << "2) Изменить длинну" << endl
				<< "3) Изменить диаметр" << endl << "4) Изменить статус" << endl << "Для завершения редактирования нажмите 5" << endl;
			cin >> point;
			switch (point) {
			case 1:
				cout << "Введите новое имя: ";
				cin >> newName;
				pipe.name = newName;
				point = 0;
				cout << pipe.name;
				break;

			case 2:
				cout << "Введите новую длинну: ";
				cin >> newDlina;
				pipe.dlina = newDlina;
				point = 0;
				break;

			case 3:
				cout << "Введите новый диаметр: ";
				cin >> newDiam;
				pipe.diam = newDiam;
				point = 0;
				break;

			case 4:
				cout << "Введите новый статус: ";
				cin >> newStatus;
				pipe.status = newStatus;
				point = 0;
				break;
			}
		}
		pipe = { newName, newDlina, newDiam, newStatus };
	}
}

void ksChange(ks& kas) {
	int point = 0;
	string newName = kas.name;
	int newCehNumber = kas.cehNumber;
	int newCehWorkNumber = kas.cehWorkNumber;
	string newEffectivness = kas.effectivness;
	if (newCehNumber > 0) {
		while (point != 5) {
			cout << "Выберите, что вы хотите сделать:" << endl << "1) Изменить имя" << endl << "2) Изменить количество цехов" << endl
				<< "3) Изменить количество рабочих цехов" << endl << "4) Изменить эффективность" << endl << "Для завершения редактирования нажмите 5" << endl;
			cin >> point;
			switch (point) {
				case 1:
					cout << "Введите новое имя: ";
					cin >> newName;
					kas.name = newName;
					point = 0;
					break;

				case 2:
					cout << "Введите новую длинну: ";
					cin >> newCehNumber;
					kas.cehNumber = newCehNumber;
					point = 0;
					break;

				case 3:
					cout << "Введите новый диаметр: ";
					cin >> newCehWorkNumber;
					kas.cehWorkNumber = newCehWorkNumber;
					point = 0;
					break;

				case 4:
					cout << "Введите новый статус: ";
					cin >> newEffectivness;
					kas.effectivness = newEffectivness;
					point = 0;
					break;
			}
		}
	}
}

void vivod(truba pipe, ks kas) {
	cout << "*************************************" << endl;
	if (pipe.dlina > 0) {
		cout << "Труба:" << endl;
		cout << "Имя: " << pipe.name << endl;
		cout << "Длина: " << pipe.dlina << endl;
		cout << "Диаметр: " << pipe.diam << endl;
		cout << "Статус: " << pipe.status << endl;
	}
	cout << "*************************************" << endl;
	if (kas.cehNumber > 0) {
		cout << "КС:" << endl;
		cout << "Имя: " << kas.name << endl;
		cout << "Количество цехов: " << kas.cehNumber << endl;
		cout << "Количество рабочих цехов: " << kas.cehWorkNumber << endl;
		cout << "Эффективность: " << kas.effectivness << endl;
	}
	cout << "*************************************" << endl;
}

void addTruba(truba& pipe) {
	string name;
	int dlina;
	int diam;
	string status;
	cout << "Введите имя:" << endl;
	cin >> name;
	cout << "Введите длину:" << endl;
	cin >> dlina;
	cout << "Введите диаметр:" << endl;
	cin >> diam;
	cout << "Введите статус:" << endl;
	cin >> status;
	pipe = {name, dlina, diam, status};
}

void addKs(ks& kas) {
	string name;
	int cehNumber;
	int cehWorkNumber;
	string effectivness;
	cout << "Введите имя:" << endl;
	cin >> name;
	cout << "Введите количество цехов:" << endl;
	cin >> cehNumber;
	cout << "Введите количество рабочих цехов:" << endl;
	cin >> cehWorkNumber;
	cout << "Введите эффективность:" << endl;
	cin >> effectivness;
	kas = {name, cehNumber, cehWorkNumber, effectivness};
}
void save(truba& pipe, ks& kas) {
	out.open("trubki.txt");
	if (out.is_open()) {
		if (pipe.dlina > 0) {
			out << "*************************************" << endl;
			out << "Труба:" << endl;
			out << "Имя: " << pipe.name << endl;
			out << "Длина: " << pipe.dlina << endl;
			out << "Диаметр: " << pipe.diam << endl;
			out << "Статус: " << pipe.status << endl;
			out << "*************************************" << endl;
		}
		if (kas.cehNumber > 0) {
			out << "*************************************" << endl;
			out << "КС:" << endl;
			out << "Имя: " << kas.name << endl;
			out << "Количество цехов: " << kas.cehNumber << endl;
			out << "Количество рабочих цехов: " << kas.cehWorkNumber << endl;
			out << "Эффективность: " << kas.effectivness << endl;
			out << "*************************************" << endl;
		}
	}
	out.close();
	cout << "Сохранено!" << endl << endl;
}

void load(truba& pipe, ks& kas) {
	string line;
	ifstream in("load.txt");
	int n = 0;
	if (in.is_open()) {
		while (getline(in, line))
		{
			switch (n) {
			case 0:
				pipe.name = line;
				break;
			case 1:
				pipe.dlina = stoi(line);
				break;
			case 2:
				pipe.diam = stoi(line);
				break;
			case 3:
				pipe.name = line;
				break;
			case 4:
				break;
			case 5:
				kas.name = line;
				break;
			case 6:
				kas.cehNumber = stoi(line);
				break;
			case 7:
				kas.cehWorkNumber = stoi(line);
				break;
			case 9:
				kas.effectivness = line;
				break;
			default:
				break;
			}
			n += 1;
		}
	}
}
int main() {
	int point;
	truba pipe;
	ks kas;
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	while (true) {
		
		cout << "Выберите что вы хотите сделать:" << endl << "1) Добавить трубу" << endl << "2) Добавить КС" << endl <<
			"3) Просмотр всех объектов" << endl << "4) Редактировать трубу" << endl << "5) Редактировать кс" << endl <<
			"6) Сохранить" << endl << "7) Загрузить" << endl << "0) Выход" << endl;
		cin >> point;
		switch (point){
		case 1:
			addTruba(pipe);
			break;
		case 2:
			addKs(kas);
			break;
		case 3:
			vivod(pipe, kas);
			break;
		case 4:
			trubaChange(pipe);
			break;
		case 5:
			ksChange(kas);
			break;
		case 6:
			save(pipe, kas);
			break;
		case 7:
			load(pipe, kas);
			break;
		case 0:
			return 0;
			break;
		default:
			break;
		}
	}
}
