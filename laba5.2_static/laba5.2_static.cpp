#include <iostream>

using namespace std;

// Вариант 8
int main() {
	setlocale(LC_ALL, "ru");
	const int Y = 10;
	int N, b;
	int a[Y];

	cout << "Введите кол-во значений:";
	cin >> N;
	if (N > Y) {
		cout << "Ошибка! Количество значений не должно превышать 10";
		return 0;
	}
	cout << "Введите значения:";
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}

	for (int d = 0; d < N; d++) {
		if (a[d] % 2 == 0) {
			b = a[d];
			break;
		}
	}
	cout << "Обновлённый массив: ";
	for (int d = 0; d < N; d++) {
		if (a[d] % 2 == 0) {
			a[d] += b;
			cout << a[d] << " ";
		}
		else {
			cout << a[d] << " ";
		}
	}
}