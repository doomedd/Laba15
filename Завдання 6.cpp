#include <iostream>//підключаємо директиву вводу та виводу 
#define SIZE 7//зазначаємо константу 
using namespace std;//використовуємо простір імен std

int main() {
    int numbers[SIZE];//створюємо масив 

    cout << "Enter 7 numbers: ";//вивід тексту повідомлення 
    for (int i = 0; i < SIZE; ++i) {//цикл для введення даних 
        cin >> numbers[i];//введеня даних 
    }

    int minValue = numbers[0];
    int maxValue = numbers[0]; 
    //задання змінної

    for (int i = 1; i < SIZE; ++i) {//цикл для перевірки значень 
        if (numbers[i] < minValue) {//умова 
            minValue = numbers[i];
        }//якщо виконується  
        if (numbers[i] > maxValue) {//умова 
            maxValue = numbers[i];
        }//якщо виконується
    }


    cout << "Minimum value: " << minValue << " Maximum value: " << maxValue;// Виведення результату

    return 0;//Логічний кінець 
}
