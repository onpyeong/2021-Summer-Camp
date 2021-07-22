#include<iostream>
//#include<vector>
using namespace std;

int main(void) {
	int number, kim, im;
	cin >> number >> kim >> im;
	//첫 줄의 총 인원 수와, 첫 라운드의 김씨와 임씨의 번호표를 변수로 받아들임
	

	////모든 인원의 번호표 초기화
	//vector<int> seonsu;
	//for (int i = 1; i <= number; i++)
	//{
	//	seonsu.push_back(i);
	//}

	//for (int i = 0; i < seonsu.size(); i++)
	//{
	//	cout << seonsu[i] << " ";
	//}
	//cout << endl;

	//결과값 (몇 라운드에서 대결하는 지)
	int round = 1;
	int temps = 1;
	while ((kim / 2 + kim % 2) != (im / 2 + im % 2)) {
		temps = 1;
		kim = kim / 2 + kim % 2;
		im = im / 2 + im % 2;
		/*while (temp != seonsu.end()) {
			if (seonsu[temps - 1] == kim) {
				kim = seonsu[temps - 1] / 2 + seonsu[temps - 1] % 2;
			}
			if (seonsu[temps - 1] == im) {
				im = seonsu[temps - 1] / 2 + seonsu[temps - 1] % 2;
			}
			seonsu.emplace(temp, seonsu[temps - 1] / 2 + seonsu[temps - 1] % 2);
			if (temp + 1 != seonsu.end()) {
				seonsu.erase(temp + 1);
				temp += 2;
				temps += 2;
			}
			else {
				temp++;
				temps++;
			}
		}*/
		/*for (int i = 0; i < seonsu.size(); i++)
		{
			cout << seonsu[i] << " ";
		}
		cout << endl;*/
		round++;
	}
	/*if (round != 1) {
		round++;
	}*/
	cout << round << endl;
}