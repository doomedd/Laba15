#include <iostream>//�������� ����� �� ������ 
#define SIZE 5//����� ������ 
using namespace std;//������������ �������� ���� std

int main() {
    int numbers[SIZE];//���������� ������ 
    int sum = 0;//���������� ����� 

    cout << "Enter 5 numbers: "; //��������� �����������
    cin >> numbers[0];//��� ����� 1 
    cin >> numbers[1];//��� ����� 2
    cin >> numbers[2];//��� ����� 3 
    cin >> numbers[3];//��� ����� 4 
    cin >> numbers[4];//��� ����� 5
    for (int i = 0; i < SIZE; ++i) {//������������ ����� ��� ������������ ������� 
        sum = sum + numbers[i];//������� ���������� ���� �����
    }


    cout << "Sum of array elements: " << sum << endl;//��������� ���������� 

    return 0;//������� ����� 
}
