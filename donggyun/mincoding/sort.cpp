#include <iostream>
using namespace std;

int main()
{
	int vect1[4];
	int vect2[4];

	for (int i = 0; i < 4; i++) {
		cin >> vect1[i];
	}
	
	for (int i = 0; i < 4; i++) {
		cin >> vect2[i];
	}

	int result[10];
	int t = 0; //tail
	int a = 0;
	int b = 0;

	while (1)
	{
		if (a == 4 && b == 4) break;

		if (a == 4) result[t++] = vect2[b++]; //a가 끝났으면 vect2 등록
		else if (b == 4) result[t++] = vect1[a++]; //b가 끝났으면 vect1 등록
		else if (vect1[a] <= vect2[b]) result[t++] = vect1[a++]; //두 숫자 비교 후 작은 값 result에 넣기
		else result[t++] = vect2[b++];
	}

	for (int i = 0; i < t; i++) {
		cout << result[i] << " ";
	}

	return 0;
}