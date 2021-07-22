#include<iostream>
#include<string>

using namespace std;

int main(void) {
	//첫째 줄에 입력 받을 행,열
	int row, col, size;
	cin >> row >> col;
	//행과 열 중 가장 작은 수를 사이즈에 저장 (행렬의 정사각형 최대 크기)
	size = (row < col) ? row : col;
	
	//2차원 배열(행렬) 크게 만들어 놓기
	int hangryeol[50][50];
	string temp;
	for (int i = 0; i < row; i++) {
		//각 행마다 열 숫자 통째로 temp에 받아오기
		cin >> temp;
		for (int j = 0; j < col; j++) {
			//temp의 맨 처음 숫자부터 한 자리씩 받아오기
			hangryeol[i][j] = temp[j] - '0';
		}
	}


	int comp;	//비교할 행렬의 값 임시 저장
	int result = 0;	//조건을 만족하는 결과를 찾았을 때의 최대 정사각형의 변의 길이
	bool find = false;	//찾았을 때는 k의 값(변의 길이)을 더 이상 줄이지 않고 종료함.

	//행렬의 정사각형 변의 길의 최댓값부터 1까지 탐색, 만족 결과를 찾았을 때는 종료
	for (int k = size; k > 0 && find == false; k--) {
		for (int i = 0; i < row && find == false; i++) {	//행
			for (int j = 0; j < col && find == false; j++) {	//열
				if (i + k - 1 < row && j + k - 1 < col) {	//탐색하는 곳이 행렬 범위를 벗어나지 않을 때
					comp = hangryeol[i][j];
					if (hangryeol[i + k - 1][j] == comp && hangryeol[i][j + k - 1] == comp && hangryeol[i + k - 1][j + k - 1] == comp) {
						//각 꼭짓점이 행렬의 값과 같을 때, 즉 조건을 만족하는 결과를 찾았을 때
						result = k;	//변의 길이 (k) 저장
						find = true;	//더 이상 k값 변화 없이 for문 종료
					}
				}
			}
		}
	}
	//넓이 출력
	cout << result * result << endl;
}