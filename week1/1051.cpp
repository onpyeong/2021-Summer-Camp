/*
1. n, m�� �迭�� �Է¹޴´�.
2. 0,0�� �������� 0���� ���鼭 ���� ���� ã�´�.
2.1 (k��)���� ���� ã���� ���� ������ k���� ���� ������ üũ -> ������ (k,k)�� ������ üũ�ؼ� ������ -> ���� ����//
-> �ٸ��� 0�࿡ ������ �̵��ϱ�
3. 0�� ������ ������ 1���� ����. �̷������� �� ���鼭 n-2����� üũ!
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
			tmp = arr[s_x][s_y]; //�»�
 			for (int c = 1; s_y + c < m; c++) { //���� 
				if (tmp == arr[s_x][s_y + c] && s_x + c < n) { //���  
					if (tmp == arr[s_x + c][s_y]) { //����
						if (tmp == arr[s_x + c][s_y + c]) { //����
							area = max(area, (c + 1)*(c + 1));
						}
					}
				}
			}
		}
	}

	cout << area;
	
}