// square.cpp
#include <iostream>

//표준 라이브러리에서 가져와서 사용할이름을 언급
using std::cin;
using std::cout;
using std::endl;

//*네모만들기
int main(void) {
	cout << "1. square OR 2. Rect?>>>";

	int option;
	cin >> option;

	if (option != 1 && option != 2) {
		cout << "Error: Only choose 1 or 2!";
		return 0x712F; //16진법


		cout << "What size square? >>> ";

		int size;
		cin >> size;//10

		//행 출력
		for (int i = 0; i < size; i++) {
			//열출력
			for (int j = 0; j < size; j++) {
				if (option == 1) {
					cout << "*";//  10X10 네모
				}
				else if (option == 2) {
					cout << "**"; //20X10 직사각형
				}
				else {
					cout << "error : Only Choose 1 or 2!";
					return 0x712F;
				}
			}
			cout << endl;
		}

		return 0;
	}
