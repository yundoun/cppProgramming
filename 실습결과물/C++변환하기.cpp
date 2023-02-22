//#include <stdio.h>
//int main() {
//	int k, n=0;
//	int sum = 0;
//	printf("끝 수를 입력하세요 >>");
//	scanf("%d", &n);
//	for (k = 1; k <= n; k++) {
//		sum += k;
//	}
//	printf("1에서 %d까지의 합은 %d입니다. \n", n, sum);
//	return 0;
//}


#include <iostream>
using namespace std;

int main() {
	int k, n = 0;
	int sum = 0;

	cout << "끝 수를 입력하세요 >> " << endl;

	cin >> n;

	for (k = 1; k <= n; k++) {
		sum += k;
	}
	cout << "1에서 " << n << "까지의 합은 " << sum << "입니다.";
}
