#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

void ex_1();
void ex_2();

int main() {
	setlocale(LC_ALL, "Russian");
	//ex_1();
	ex_2();
	return 0;
}

void ex_1() {
	char ch, str[128];
	float prob;
	int k = 0, quantility = 0;
	
	cout << "Введите строку > "; gets_s(str);
	cout << "Введите символ > "; ch = getchar();

	while (str[k] != '\0') {
		if (ch == str[k]) quantility++;
		k++;
	}

	prob = quantility / float(k);
	printf("Частота появления символа '%c' в строке \"%s\" равна %.2f", ch, str, prob);
	cin.get();
}

void ex_2() {
	char str[128];
	bool flag = true;
	int k = 0;

	cout << "\nВведите строку > "; gets_s(str);
	
	while (str[k] != '\0') {
		if (str[k] == '(') flag = false;
		if ((str[k] == ')') && (flag == false)) flag = true;
		k++;
	}

	if (flag == true) cout << "Скобки в функции раставлены правильно";
	else cout << "Скобки в функции раставлены неправильно";
}