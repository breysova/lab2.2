#include <iostream>

    using namespace std;

    int main() {
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