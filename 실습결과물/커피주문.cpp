// 93p 14��

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char coffee[100];
	int num;
	int total =0;
	

	cout << "=====================�޴���===================" << endl;
	cout << "���������� 2000\n�Ƹ޸�ī��2300\nīǪġ��2500" << endl << endl;
	cout << "=============================================" << endl;
	
	while (true)
	{
		cout << "�ֹ��ϼ��� >>";
		cin >> coffee >> num;
		
		int sum = 0;

		if (strcmp(coffee, "����������") == 0) {
			sum += (num * 2000);
			total += sum;
			cout << sum << "���Դϴ�. ���ְ� �弼��" << endl << endl;
		}

		else if (strcmp(coffee, "�Ƹ޸�ī��") == 0) {
			sum += (num * 2300);
			total += sum;
			cout << sum << "���Դϴ�. ���ְ� �弼��" << endl <<endl;
		}

		else if (strcmp(coffee, "īǪġ��") == 0) {
			sum += (num * 2500);
			total += sum;
			cout << sum << "���Դϴ�. ���ְ� �弼��" << endl<<endl;
		}


		if (total >= 20000) {
			cout << "���� " << total << "�� �� �Ǹ��Ͽ� ī�並 �ݽ��ϴ�. ���� ����~ ";
			break;
		}

	}
	



}