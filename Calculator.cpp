#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "RU");
	int x, y;
	cout << "Введите два числа: ";
	cin >> x >> y;
	char oper;
	cout << "Введите операцию (+, -, *, /, %): ";
	cin >> oper;
	switch (oper) {
	case '+':
		cout << x + y;
		break;
	case '-':
		cout << x - y;
		break;
	case '*':
		cout << x * y;
		break;
	case '/':
		if (y != 0) cout << x / y;
		else cout << "у равен нулю.";
		break;
	case '%':
		cout << x % y;
		break;
	default: cout << "Неизвестная ошибка";
	}
}
