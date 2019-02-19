#include <iostream>

using namespace std;

/**
 * 插入排序
 * @param data
 * @param length
 */
void insertSort(int data[], int length) {
    int key;
    for (int i = 1; i < length; i++) {
        key = data[i];
        int j = i - 1;
        while (j > 0 && data[j] > key) {
            data[j + 1] = data[j];
            j--;
        }
        data[j + 1] = key;
    }
}

int main() {
    int data[] = {1, 3, 4, 2, 9, 30, 10};
    int length = sizeof(data) / sizeof(data[0]);
    cout << "len = " << length << endl;
    insertSort(data, length);

    for (int i = 0; i < length; i++) {
        std::cout << data[i] << std::endl;
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}