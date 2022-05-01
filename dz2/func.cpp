#include "func.h"
						//тут сами функции

void outp(int n, int a[]) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << endl;
	}
}
int sum(int n, int a[]) {
	int s = 0;
	for (int i = 0; i < n; i++) {
		s += a[i];
	} 
	return s;
}

void inv(int n, int a[]) {
	cout << "Запускаю инверсию" << endl;
	for (int i = 0; i < n / 2; i++) {
		a[i], a[n - i] = a[n - i], a[i];
	}
	
}

void sortup(int n, int *a) {
	cout << "Запуск сортировки по неубыванию(возрастанию)" << endl;
	
	int max = a[0];
	int nmax = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] < max) {		//возрастание
				max = a[j];
				nmax = j;

			}

		}
		max = a[i];
		a[i] = a[nmax];
		a[nmax] = max;


		max = a[i + 1];
		nmax = i + 1;
	}
	
}

void sortdown(int n, int *a) {
	cout << "запуск сортировки по невозрастанию(убыванию)"<<endl;
	int max = 0;
	int nmax = 0;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[j] > max) {		//убывание
				max = a[j];
				nmax = j;

			}

		}
		max = a[i];
		a[i] = a[nmax];
		a[nmax] = max;
		max = a[i + 1];
		nmax = i + 1;
	}
	
	
	
}







void (*alfa(int b, int c[]))(int, int *) {
	outp(b, c);
	int s=sum(b, c);
	if (s == c[0]) {
		return *inv;
	}
	else if (s > c[0]) {
		return *sortdown;
	}
	else {
		return *sortup;
	}


}




