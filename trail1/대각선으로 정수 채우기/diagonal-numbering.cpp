#include <iostream>

using namespace std;

int n, m;

int main() {
    int n, m;
    cin >> n >> m;
    int cnt = 1;
    int arr[102][102] = {};

    //처음 i j 채우고 우 i+1 j로 가서 채운 뒤 i j+1로 가서 채움
    //1행씩 더 둘러서 0이면 채우지 않게 돌기 i를 쭉 증가하면서 돌면 될듯 
    for (int i = 1; i <= m; ++i) { //1행 기준으로만 생각하면 될듯 -- 여기서 오류남
        if (i == m) {  //대각 채우기 한번 더 실행해야됨
            arr[1][i] = cnt;
            ++cnt;
            for (int j = 1; j < m; ++j) {
                if ((1 + j == n + 1) || i - j == 0) {
                    break;
                }
                else {
                    arr[1 + j][i - j] = cnt;
                    ++cnt;
                }
            }
            //여기부터 2행 n열 시작부분 설정
            for (int k = 1; k < n; ++k) {
                arr[1 + k][i] = cnt;//행만1개씩 커지고 열은고정인 시작부분 설정
                ++cnt;
                for (int j = 1; j < m; ++j) {
                    if ((1 + k + j == n + 1) || i - j == 0) {
                        break;
                    }
                    else {
                        arr[1 + k + j][i - j] = cnt;
                        ++cnt;
                    }
                }
            }
        }
        
        
        else {
            arr[1][i] = cnt;
            ++cnt;
            for (int j = 1; j < m; ++j) {
                if ((1 + j == n + 1) || i - j == 0) {
                    break;
                }
                else {
                    arr[1 + j][i - j] = cnt;
                    ++cnt;
                }
            }
        }



}

for (int i = 1; i <= n; ++i) {
    for (int j = 1; j <= m; ++j) {
        cout << arr[i][j] << " ";
    }
    cout << endl;
}
return 0;
}