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
		cout << "��������, ��� �� ������ �������:" << endl << "1) �������� ���" << endl << "2) �������� ������" << endl
			<< "3) �������� �������" << endl << "4) �������� ������" << endl << "��� ���������� �������������� ������� 5" << endl;
		cin >> point;
		if (point == 1) {
			cout << "������� ����� ���: ";
			cin >> newName;
			tom.name = newName;
			point = 0;
			cout << tom.name;
		}
		if (point == 2) {
			cout << "������� ����� ������: ";
			cin >> newDlina;
			tom.dlina = newDlina;
			point = 0;
		}
		if (point == 3) {
			cout << "������� ����� �������: ";
			cin >> newDiam;
			tom.diam = newDiam;
			point = 0;
		}
		if (point == 4) {
			cout << "������� ����� ������: ";
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
		cout << "��������, ��� �� ������ �������:" << endl << "1) �������� ���" << endl << "2) �������� ���������� �����" << endl
			<< "3) �������� ���������� ������� �����" << endl << "4) �������� �������������" << endl << "��� ���������� �������������� ������� 5" << endl;
		cin >> point;
		if (point == 1) {
			cout << "������� ����� ���: ";
			cin >> newName;
			tom.name = newName;
			point = 0;
		}
		if (point == 2) {
			cout << "������� ����� ������: ";
			cin >> newCehNumber;
			tom.cehNumber = newCehNumber;
			point = 0;
		}
		if (point == 3) {
			cout << "������� ����� �������: ";
			cin >> newCehWorkNumber;
			tom.cehWorkNumber = newCehWorkNumber;
			point = 0;
		}
		if (point == 4) {
			cout << "������� ����� ������: ";
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
	cout << "�����:" << endl << "���: " << vtom.name << endl << "�����: " << vtom.dlina << endl << "�������: " << vtom.diam <<
		endl << "������: " << vtom.status << endl;
	cout << "*************************************" << endl;
	cout << "��:" << endl << "���: " << vbon.name << endl << "���������� �����: " << vbon.cehNumber << endl << 
		"���������� ������� �����: " << vbon.cehWorkNumber << endl << "�������������: " << vbon.effectivness << endl;
	cout << "*************************************" << endl;
}
int main() {
	int point;
	while (true) {
		setlocale(LC_ALL, "Russian");
		cout << "�������� ��� �� ������ �������:" << endl << "1) �������� �����" << endl << "2) �������� ��" << endl <<
			"3) ������� ������" << endl;
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
			cout << "�� ����� �������� ��������, ���������� �����";
		}
	}
}
