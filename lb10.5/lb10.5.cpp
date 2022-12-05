// lb10.5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Використовуючи відповідні компоненти створити додаток для розв’язування наступної задачі: знайти значення виразу врахувавши область визначення.
//завдання 15

#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    cout <<"Ця програма розраховує функцію задану завданням 5 номер 15.(також вона враховує область визначень)"
    double a, b ,y,n, F; //щоб враховувати область значень можна задати знаменик і чисельник через різні змінні
   cout << "Скільки дорівнює y ?" << endl << "y =";
   cin >> y;
   if (y <= 0) {
       cout << "Введіть значення більше 0" << endl << "F = пуста множина"; //число під коренем не може бути відємним тому задаємо таку команду
   }
   else
       cout << "Скільки дорівнює n ?" << endl << "n =";
   cin >> n;
       //задамо чисельник через а
   a = pow(y, 2) - 0.8 * y + sqrt(y); //вираховуєма числівник
   b = 23.1 * pow(n, 2) + cos(n); //вираховуємо знаменик
   if (b == 0) {
       cout << "F = пуста множина"; //знаменик не може дорівнювати 0 і тому ми задаємо таку команду
   }
   else
   F = a / b; //розраховуємо
   cout << "F=" << F;

}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
