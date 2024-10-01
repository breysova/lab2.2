#include <iostream>

    using namespace std;

    int main() {
        // Константа байт в килобайте
        const int bytesInKilobytes = 1024;

        // переменная размер файла в байтах
        long long fileSizeInBytes;
        cout << "Введите размер файла в байтах: ";
        cin >> fileSizeInBytes;

        // Вычисление размер файла в килобайтах
        long long fileSizeInKilobytes = fileSizeInBytes / bytesInKilobytes;
        cout << "Размер файла в килобайтах: " << fileSizeInKilobytes << std::endl;

        return 0;
    }