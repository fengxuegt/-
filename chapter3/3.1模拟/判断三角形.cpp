/*
 * Created 2022-07-08 22:58:51
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a) {
        cout << "YES";
        return 0;
    }
    cout << "NO";
    return 0;
}