#include <iostream>//��������� ��������� ����� �� ������ 
#define SIZE 7//��������� ��������� 
using namespace std;//������������� ������ ���� std

int main() {
    int numbers[SIZE];//��������� ����� 

    cout << "Enter 7 numbers: ";//���� ������ ����������� 
    for (int i = 0; i < SIZE; ++i) {//���� ��� �������� ����� 
        cin >> numbers[i];//������� ����� 
    }

    int minValue = numbers[0];
    int maxValue = numbers[0]; 
    //������� �����

    for (int i = 1; i < SIZE; ++i) {//���� ��� �������� ������� 
        if (numbers[i] < minValue) {//����� 
            minValue = numbers[i];
        }//���� ����������  
        if (numbers[i] > maxValue) {//����� 
            maxValue = numbers[i];
        }//���� ����������
    }


    cout << "Minimum value: " << minValue << " Maximum value: " << maxValue;// ��������� ����������

    return 0;//������� ����� 
}
