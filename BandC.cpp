#include <iostream>
#include <locale.h> //для русского языкв
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x = 0, A = 0, B = 0, input=1, round = 0; //задуманное число, нижняя граница, верхняя граница, вводимое игроком число, счётчик ходов
    cout << "Игра Быки и Коровы" << endl;
    cout << "Введите числа определяющий диапозон выбора загадонного числа - 'число' enter 'число'" << endl;
    cin >> A >> B;
    if (A > B) { //меняет значения А и В, чтобы А было меньшим
        x = A;
        A = B;
        B = x;
    }
    x = A+rand()%(B-A+1); //установка значения задумнаного числа
    while (input != x) {
        round++; //счёт ходов
        cout << endl<< "Ход " << round << " , попытайтесь отгадать число: ";
        cin >> input;
        if (input > x) {
            cout << endl << "Загаданное число меньше чем " << input << endl;
        }
        else if (input < x) {
            cout << endl << "Загаданное число больше чем " << input << endl;
        }
    }
    cout << endl << "Победа!Загаданное число : " << x << "   Вы справились за " << round << " попыток.";
}