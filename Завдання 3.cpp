#include <iostream>//�������� ����� �� ������
#define SIZE 8//������� ��������� ��������� 
using namespace std;//����������� ������ ���� std

int main() {
    int numbers[SIZE];//������� ����� ������� 2 �������� 

    cout << "Enter 8 number:"; //������ ����������� 
    cin >> numbers[0];
    cin >> numbers[1];  
    cin >> numbers[2];
    cin >> numbers[3]; 
    cin >> numbers[4];
    cin >> numbers[5]; 
    cin >> numbers[6];
    cin >> numbers[7];
    //��� �������� �������
    for (int i = 0; i < SIZE; ++i) {//���� �� ������� ����� ������ 
        if (numbers[i] % 2 == 0) {//������ �����
            numbers[i] = 0;//���� ������ ����� ���������� 
        }
    }

    cout << "Result: ";//���� ����������� 
    for (int i = 0; i < SIZE; ++i) {//���� ��� ������ ����������
        cout << numbers[i] << " ";//���������� ������� 
    }

    return 0;//������� ����� 
}
