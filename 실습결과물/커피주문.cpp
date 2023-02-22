// 93p 14번

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];
	int num;
	int total =0;
	

	cout << "=====================메뉴판===================" << endl;
	cout << "에스프레소 2000\n아메리카노2300\n카푸치노2500" << endl << endl;
	cout << "=============================================" << endl;
	
	while (true)
	{
		cout << "주문하세요 >>";
		cin >> coffee >> num;
		
		int sum = 0;

		if (strcmp(coffee, "에스프레소") == 0) {
			sum += (num * 2000);
			total += sum;
			cout << sum << "원입니다. 맛있게 드세요" << endl << endl;
		}

		else if (strcmp(coffee, "아메리카노") == 0) {
			sum += (num * 2300);
			total += sum;
			cout << sum << "원입니다. 맛있게 드세요" << endl <<endl;
		}

		else if (strcmp(coffee, "카푸치노") == 0) {
			sum += (num * 2500);
			total += sum;
			cout << sum << "원입니다. 맛있게 드세요" << endl<<endl;
		}


		if (total >= 20000) {
			cout << "오늘 " << total << "원 을 판매하여 카페를 닫습니다. 내일 봐요~ ";
			break;
		}

	}
	



}