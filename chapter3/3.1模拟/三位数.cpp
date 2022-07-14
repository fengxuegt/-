/*
 * Created 2022-07-08 23:07:59
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << n / 100 << " ";
    n = n % 100;
    cout << n / 10 << " ";
    cout << n % 10;
    return 0;
}