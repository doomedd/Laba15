#include <iostream>//�������� ����� �� ������ 
#define SIZE 3//������� ��������� ��������� 
using namespace std;//����������� ������ ���� std

int main() {
    int numbers[SIZE];//���������� ������ 

    cout << "Enter 3 numbers: ";//���� ������
    for (int i = 0; i < SIZE; ++i) {//������������� ���� ��� ����� ����� 
        cin >> numbers[i];//������� 3 ����� 
    }

    cout << "reverse array: ";//���� ������
    for (int i = 2; i >= 0; --i) {//������������� ���� ��� ������ ���������� ������ 
        cout << numbers[i] << " ";//���� ������ 
    }

    return 0;//������� ����� 
}
