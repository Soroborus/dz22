#include "func.h"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;            //основной файл
int main()
{
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    int n1,i; 
    cout << "Введите размерность массива ";
    cin >> n1;
    if (n1 > 0) {
        int* a1 = new int[n1];
    
        for (i = 0; i < n1; i++) {
            
            a1[i]=rand()%100;
            if (rand() % 2 == 0) {
                a1[i] *= -1;
            }
        }
        int* a2 = a1;
       
        void (*z)(int n1, int a2[]);
        z = alfa(n1, a2);
        z(n1,a2);
        outp(n1, a2);
    }
    else {
        cout << "Ошибка ввода массива";
    }
    
    return 0;
}



