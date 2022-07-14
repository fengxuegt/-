/*
 * Created 2022-07-08 23:05:21
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int sum = 0;
    for (int i = 0; i < N; i++) {
        int tmp;
        cin >> tmp;
        if (tmp % 2) {
            sum += tmp;
        }
    }
    cout << sum;
    return 0;
}