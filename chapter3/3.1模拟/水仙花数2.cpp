/*
 * Created 2022-07-08 23:08:33
 * Author : fengxuegt
 * Email : fengxuegt@163.com
 */

#include<iostream>
#include<cmath>
#include<vector>
using namespace std;

int isWaterFlower(int N)
{
    int t = N;
    int sum = 0;
    while (N > 0) {
        sum += pow(N % 10, 3);
        N /= 10;
    }
    if (t == sum) {
        return 1;
    } else {
        return 0;
    }
}

int main()
{
    int a, b;
    cin >> a >> b;
    vector<int> vec;
    for (int i = a; i <= b; i++) {
        if (isWaterFlower(i)) {
            vec.push_back(i);
        }
    }
    if (vec.empty()) {
        cout << "NO";
    } else {
        for (int i = 0; i < vec.size(); i++) {
            if (i == vec.size() -1) {
                cout << vec[i];
            } else {
                cout << vec[i] << " ";
            }
        }
    }
    return 0;
}