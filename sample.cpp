#include <iostream> //<> - 표준 표현

using namespace std;
//파란색 - 키워드

//C언어 style
int main(/*int argc, char* argv[]*/) // entry point(무조건 하나는 있어야함, 가장 먼저 실행)
{
	int Number = 10; // RAM에 공간을 만들어서 그 공간 이름을 Number(변수)로 정의 후 안에 10
	// 변수는 숫자로 시작시 x, 대소문자 구분
	// Pascal 표기법
	// 언리얼 엔진해서는 GoldOfBand 처럼 단어가 바뀔떄마다 대문자로 표시 Gold_of_band x
	// + 첫번째 글자도 대문자로 ex) number x Number o 

	cin >> Number; // cin(입력) >>(을 오른쪽에 넣어라)

	cout << Number << endl; // cout(출력해라) << Number(어딘가에 있는 Number을 찾아서) 

	cout << 1 / 2 << endl;
	// 1(초록색) - 상수
	// 회색 - 명령어
	
	// 숫자 상수 0, 1, 2, 3, 4
	// 문자 상수 'A', 'B'
	// 문자열 "AB"
	// 연산자 -> operator, 산술연산자 +, -, *, /, %
	return 0; // 반환 , 필수
}