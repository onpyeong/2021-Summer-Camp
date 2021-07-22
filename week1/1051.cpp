/*
1. n, m과 배열을 입력받는다.
2. 0,0을 기준으로 0행을 보면서 같은 수를 찾는다.
2.1 (k열)같은 수를 찾으면 같은 길이의 k행이 같은 수인지 체크 -> 같으면 (k,k)가 같은지 체크해서 같으면 -> 넓이 갱신//
-> 다르면 0행에 끝까지 이동하기
3. 0행 끝까지 같으면 1행을 본다. 이런식으로 쭉 가면서 n-2행까지 체크!
*/
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	int n, m, tmp;
	int arr[50][50] = { 0 };
	string row;
	int area = 1;

	cin >> n >> m;

	for (int i = 0; i < n; i++) {
		cin >> row;
		for (int j = 0; j < m; j++) {
			arr[i][j] = row[j] - '0';
		}
	}

	for (int s_x = 0; s_x < n - 1; s_x++) { //0~1
		for (int s_y = 0; s_y < m - 1; s_y++) { //0~4
			tmp = arr[s_x][s_y]; //좌상
 			for (int c = 1; s_y + c < m; c++) { //길이 
				if (tmp == arr[s_x][s_y + c] && s_x + c < n) { //우상  
					if (tmp == arr[s_x + c][s_y]) { //좌하
						if (tmp == arr[s_x + c][s_y + c]) { //우하
							area = max(area, (c + 1)*(c + 1));
						}
					}
				}
			}
		}
	}

	cout << area;
	
}