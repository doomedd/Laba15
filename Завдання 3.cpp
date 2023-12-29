#include <iostream>//бібліотека вводу та виводу
#define SIZE 8//визначає символічну константу 
using namespace std;//використовує простір імен std

int main() {
    int numbers[SIZE];//створює масив розміром 2 елемента 

    cout << "Enter 8 number:"; //виводе повідомлення 
    cin >> numbers[0];
    cin >> numbers[1];  
    cin >> numbers[2];
    cin >> numbers[3]; 
    cin >> numbers[4];
    cin >> numbers[5]; 
    cin >> numbers[6];
    cin >> numbers[7];
    //Ввід числових значень
    for (int i = 0; i < SIZE; ++i) {//цикл що перелічує числа масиву 
        if (numbers[i] % 2 == 0) {//логічна умова
            numbers[i] = 0;//якщо логічна умова виконується 
        }
    }

    cout << "Result: ";//вивід повідомлення 
    for (int i = 0; i < SIZE; ++i) {//цикл для виводу результату
        cout << numbers[i] << " ";//виводиться відповідь 
    }

    return 0;//Логічний кінець 
}
