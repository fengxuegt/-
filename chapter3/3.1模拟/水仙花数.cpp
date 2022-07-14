/*
 * Created 2022-07-08 23:08:13
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int t = N;
    int sum = 0;
    while (N > 0) {
        sum += pow(N % 10, 3);
        N /= 10;
    }
    if (t == sum) {
        cout << "YES";
        return 0;
    } else {
        cout << "NO";
        return 0;
    }
}