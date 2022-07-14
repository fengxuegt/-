/*
 * Created 2022-07-08 21:32:01
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
const int arraySize = 5;
using namespace std;

int main()
{
    int arr[arraySize] = {3, 1, 4, 5, 2};
    for (int i = 0; i < arraySize; i++) {
        for (int j = 0; j < arraySize - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for (int i = 0; i < arraySize; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}