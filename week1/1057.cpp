/*
1. n, a, b를 입력받는다.
2. 반복문을 돌면서 라운드를 하나 증가시키고
2.1 홀수이면 (홀수 + 1) / 2로 등수를 계산
2.2 짝수이면 짝수 / 2로 등수를 계산
2.3 계산한 등수 a와 b가 서로 붙었는지 비교한다.
2.3.1(a와 b가 1씩 차이가 나고, 작은수가 홀수이면) -> 반복문을 나와서 라운드 출력
2.3.2 아니면 계속 반복문을 돈다.
3. 라운드가 n+1/2를 넘으면 모든 라운드를 돈 것
*/
#include <iostream>
using namespace std;

int main() {
	int n, a, b, round;

	cin >> n >> a >> b;

	a *= 2;
	b *= 2;
	for(round = 1; round <= (n+1)/2; round++) {
		if(a % 2 != 0){
			a = (a + 1) / 2;
		}else {
			a /= 2;
		}
		if(b % 2 != 0){
			b = (b + 1) / 2;
		}else {
			b /= 2;
		}

		if(a - b == 1){
			if(b % 2 != 0){
				break; //round
			}
		}else if (b - a == 1){
			if(a % 2 != 0){
				break; //round
			}
		}
	}

	cout << round;

}