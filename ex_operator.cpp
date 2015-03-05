
//간단한 스마트 포인터 
//c++11을 참조하자 
//더 쉬운방법을 볼 수 있다.
//CStream이란 class와 
//그것을 관리하는 CStremaSP class



#include <iostream>
#include <windows.h>

using namespace std;

class CStream
{
public: 
	BYTE *mBufferPointer;
	DWORD mLenghth;
};

class CStreamSP
{
private:
	CStream *Stream;

public:
	CStreamSP(VOID)
	{
		Stream = new CStream();
	}
	~CStreamSP(VOID)
	{
		delete Stream;
	}

	//멤버변수인 Stream에 접근하기 위한 연산자 오버로딩
	//S->를 사용할시 멤버변수 접근 가능 
	CStream* operator->(VOID)
	{
		cout << "adf" << endl;
		return Stream;
	}

	//cout<<으로 부를 시 주소값을 리턴
	operator CStream*(VOID)
	{
		cout << "aaewfdf" << endl;
		return Stream;
	}

};



int main()
{

	CStreamSP S;
	S->mBufferPointer;
	cout << S << endl;
}