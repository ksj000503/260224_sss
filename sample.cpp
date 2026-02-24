#include <iostream> //<> - 표준 표현

using namespace std;
//파란색 - 키워드

//C언어 style
int main(/*int argc, char* argv[]*/) // entry point(무조건 하나는 있어야함, 가장 먼저 실행)
{
	int Number = 10; // RAM에 공간을 만들어서 그 공간 이름을 Number(변수)로 정의 후 안에 10
	// 변수는 숫자로 시작시 x, 대소문자 구분
	// Pascal 표기법
	// 언리얼 엔진해서는 GoldOfBank 처럼 단어가 바뀔떄마다 대문자로 표시 Gold_of_band x
	// + 첫번째 글자도 대문자로 ex) number x Number o 
	// 생략 x -> 자동

	cin >> Number; // cin(입력) >>(을 오른쪽에 넣어라)

	cout << Number << endl; // cout(출력해라) << Number(어딘가에 있는 Number을 찾아서) 

	// endl -> 바로 출력, 엔터 "\n" 엔터

	cout << 1 / 2 << endl;
	// 1(초록색) - 상수
	// 회색 - 명령어
	
	// 숫자 상수 0, 1, 2, 3, 4
	// 문자 상수 'A', 'B'
	// 문자열 "AB"
	// 연산자 -> operator, 산술연산자 +, -, *, /, %

	int Money[10];
	// [0][1][2][3][4][5][6][7][8][9] // 같은 이름의 칸을 10개 만든다
	/*int money1 = 0;
	int money2 = 0;
	int money3 = 0;
	int money4 = 0;
	int money5 = 0;
	int money6 = 0;
	int money7 = 0;
	int money8 = 0;
	int money9 = 0;*/
	/* *(Money + 1) = 2; Monet와 1만큼 떨어진 곳에 2를 집어넣기 */
	for (int i = 0; i < 10; ++i) // 반복문 
	{
		Money[i] = 10;
	}
	// i는 0, i가 10보다 작을때까지 i는 1씩 증가
	// ranged for
	// int Data : Money

	// 정리
	// 상수 작업 X -> HardCoding
	// 4byte 2 ^ 32 = -2G ~ 0 ~ 2G
	int Number = 0; // 무조건 일단 초기화 시키기
	// 자료형 + 변수형 = 0;
	// Creative project -> GitHub -> Commit, push, pull


	return 0; // 반환 , 필수
}