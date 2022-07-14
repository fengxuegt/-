/*
 * Created 2022-07-08 22:43:29
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
        int first, second;
        cin >> first >> second;
        vec[first - 1] += second;
    }
    int result = 0;
    for (int i = 1; i < N; i++) {
        if (vec[i] > vec[result]) {
            result = i;
        }
    }
    cout << result + 1 << " " << vec[result];// << endl;
    return 0;
}