/*
 * Created 2022-07-08 22:59:36
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
#include<vector>
using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> vec(N, 0);
    for (int i = 0; i < N; i++) {
        cin >> vec[i];
    }
    for (int i = 0; i < N - 1; i++) {
        if (vec[i] > vec[i + 1]) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}