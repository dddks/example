
//������ ����Ʈ ������ 
//c++11�� �������� 
//�� �������� �� �� �ִ�.
//CStream�̶� class�� 
//�װ��� �����ϴ� CStremaSP class



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

	//��������� Stream�� �����ϱ� ���� ������ �����ε�
	//S->�� ����ҽ� ������� ���� ���� 
	CStream* operator->(VOID)
	{
		cout << "adf" << endl;
		return Stream;
	}

	//cout<<���� �θ� �� �ּҰ��� ����
	operator CStream*(VOID)
	{
		cout << "aaewfdf" << endl;
		return Stream;
	}

};

int ddd()
{
	if (1)
	{
		return 20;
	}
}
int aaa()
{
	if (1)
	{
		return 1515;
	}
}

int main()
{

	CStreamSP S;
	S->mBufferPointer;
	cout << S << endl;
}