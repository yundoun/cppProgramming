# include <iostream>
# include <cstring>

using namespace std;

int main() {
	cout << "���� ���� �� ������ �մϴ�. ����, ����, �� �߿��� �Է��ϼ���" << endl << "exit�� �Է��ϸ� ������ �����մϴ�." << endl << endl;

	string a;
	string b;
	while (true) {


		cout << "�ι̿� >>";
		cin >> a;

		if (a == "EXIT") {
			cout << "������ �����մϴ�.";
			break;
		}

		cout << "�ٸ��� >>";
		cin >> b;

		if (a == b) {
			cout << "���º� �Դϴ�." << endl << endl;
		}
		else if (a == "����" && b == "��") {
			cout << "�ι̿��� �¸� �Դϴ�." << endl << endl;
		}
		else if (a == "����" && b == "����") {
			cout << "�ι̿��� �¸� �Դϴ�." << endl << endl;
		}
		else if (a == "��" && b == "����") {
			cout << "�ι̿��� �¸� �Դϴ�." << endl << endl;
		}
		else
			cout << "�ٸ����� �¸� �Դϴ�." << endl << endl;
	}
}
