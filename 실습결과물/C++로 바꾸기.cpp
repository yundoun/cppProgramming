// 91p 11�� 


//#include <stdio.h>
//int main() {
//	int k, n=0;
//	int sum = 0;
//	printf("�� ���� �Է��ϼ��� >>");
//	scanf("%d", &n);
//	for (k = 1; k <= n; k++) {
//		sum += k;
//	}
//	printf("1���� %d������ ���� %d�Դϴ�. \n", n, sum);
//	return 0;
//}


#include <iostream>
using namespace std;

int main() {
	int k, n = 0;
	int sum = 0;

	cout << "�� ���� �Է��ϼ��� >> " << endl;

	cin >> n;

	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1���� " << n << "������ ���� " << sum << "�Դϴ�.";
}
