#include<iostream>
#include<string>

using namespace std;

int main(void) {
	//ù° �ٿ� �Է� ���� ��,��
	int row, col, size;
	cin >> row >> col;
	//��� �� �� ���� ���� ���� ����� ���� (����� ���簢�� �ִ� ũ��)
	size = (row < col) ? row : col;
	
	//2���� �迭(���) ũ�� ����� ����
	int hangryeol[50][50];
	string temp;
	for (int i = 0; i < row; i++) {
		//�� �ึ�� �� ���� ��°�� temp�� �޾ƿ���
		cin >> temp;
		for (int j = 0; j < col; j++) {
			//temp�� �� ó�� ���ں��� �� �ڸ��� �޾ƿ���
			hangryeol[i][j] = temp[j] - '0';
		}
	}


	int comp;	//���� ����� �� �ӽ� ����
	int result = 0;	//������ �����ϴ� ����� ã���� ���� �ִ� ���簢���� ���� ����
	bool find = false;	//ã���� ���� k�� ��(���� ����)�� �� �̻� ������ �ʰ� ������.

	//����� ���簢�� ���� ���� �ִ񰪺��� 1���� Ž��, ���� ����� ã���� ���� ����
	for (int k = size; k > 0 && find == false; k--) {
		for (int i = 0; i < row && find == false; i++) {	//��
			for (int j = 0; j < col && find == false; j++) {	//��
				if (i + k - 1 < row && j + k - 1 < col) {	//Ž���ϴ� ���� ��� ������ ����� ���� ��
					comp = hangryeol[i][j];
					if (hangryeol[i + k - 1][j] == comp && hangryeol[i][j + k - 1] == comp && hangryeol[i + k - 1][j + k - 1] == comp) {
						//�� �������� ����� ���� ���� ��, �� ������ �����ϴ� ����� ã���� ��
						result = k;	//���� ���� (k) ����
						find = true;	//�� �̻� k�� ��ȭ ���� for�� ����
					}
				}
			}
		}
	}
	//���� ���
	cout << result * result << endl;
}