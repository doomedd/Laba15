#include <iostream> // �������� ����� �� ������ 

#define SIZE 2// ������� ��������� ��������� SIZE � ��������� 2

using namespace std; // ������������ �������� ����  std

int main() {
    int numbers[SIZE]; //���������� ������ 'numbers' ������� SIZE
    cout << "Enter two numbers separated by a space: ";// ��������� ������

    for (int i = 0; i < SIZE; ++i) {//��� ������ ���� ��� ����� ������ �� �������
        cin >> numbers[i];// �������� ����� � ����� ������������
    }

    if (numbers[0] > numbers[1]) { //�������� ������ ����� If
        cout << "The first number is bigger: " << numbers[0] << endl;// ���� ����� ����� �����, ������� ����
    }
    else {//������ ����� else
        cout << "Both: " << numbers[0] << " " << numbers[1] << endl;// ���� ����� ����� �����, ������� ������ �����
    }

    return 0;//���������� ������ ��������
}