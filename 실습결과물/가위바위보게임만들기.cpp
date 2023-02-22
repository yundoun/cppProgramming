// 83p

# include <iostream>
# include <cstring>

using namespace std;

int main() {
	cout << "가위 바위 보 게임을 합니다. 가위, 바위, 보 중에서 입력하세요" << endl << "exit를 입력하면 게임을 종료합니다." << endl << endl;

	string a;
	string b;
	while (true) {


		cout << "로미오 >>";
		cin >> a;

		if (a == "exit") {
			cout << "게임을 종료합니다.";
			break;
		}

		cout << "줄리엣 >>";
		cin >> b;

		if (a == b) {
			cout << "무승부 입니다." << endl << endl;
		}
		else if (a == "가위" && b == "보") {
			cout << "로미오의 승리 입니다." << endl << endl;
		}
		else if (a == "바위" && b == "가위") {
			cout << "로미오의 승리 입니다." << endl << endl;
		}
		else if (a == "보" && b == "바위") {
			cout << "로미오의 승리 입니다." << endl << endl;
		}
		else
			cout << "줄리엣의 승리 입니다." << endl << endl;
	}
}
