#include <iostream>
#include <clocale>


using namespace std;

int main() {
    setlocale(LC_ALL, "ru");
    // ��������� ���� � ���������
    const int bytesInKilobytes = 1024;

    // ���������� ������ ����� � ������
    long long fileSizeInBytes;
    cout << "������� ������ ����� � ������: ";
    cin >> fileSizeInBytes;

    // ���������� ������ ����� � ����������
    long long fileSizeInKilobytes = fileSizeInBytes / bytesInKilobytes;
    cout << "������ ����� � ����������: " << fileSizeInKilobytes << std::endl;

    return 0;
}