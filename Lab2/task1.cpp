#include <iostream>

using namespace std;

bool isInArea(double x, double y) { // �1
    if (x >= -1 && x <= 1 && y >= 0 && y <= 1)
        return true;
    else if (x >= -1 && x <= 0 && y >= -1 && y <= 1)
        return true;
    else false;

}

double f(double x) { // �2
    return x <= 3 ? pow(x, 2) - 3 * x + 9 : 1 / (pow(x, 3) + 6);
}

int main()
{
    setlocale(LC_ALL, "Ru");

    int number;
    cout << "������� 1 > 1, ������� 2 > 2" << "\n";
    cin >> number;

    switch (number)
    {
    case 1:
        cout << "������� �1. ������� ���������� x � y" << "\n";
        double x, y;
        cin >> x >> y;
        if (isInArea(x, y) == true)
            cout << "�������� ����� ������ � ������� ������";
        else
            cout << "�������� ����� �� ������ � ������� ������";
        break;

    case 2:
        cout << "������� �2. ������� ����� x" << "\n";
        double x1;
        cin >> x1;
        cout << "��������� �������: " << f(x1);
        break;

    default:
        cout << "������ ��� ������ ������ �������.";
        break;
    }

    return 0;
}