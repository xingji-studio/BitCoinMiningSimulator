#include <iostream>
#include <string>
#include <Windows.h>
using namespace std;
int main()
{
	int in = 0;
	int jihuo = 0;
	string key = "";
	jihuo = key_out();

	cout << "=����=" << endl;
	cout << "�ڿ�ģ����������XINGJI Interactive Software���Ǽʹ����Ҽ�����������͹����ҵİ�Ȩ�ܵ��������Ͻ���δ�����������¶�" << endl;
	cout << "������������ĸ������з����롢δ���ؿ�ԴЭ�����Ȩ��Ϊ��ʹ���ߵ��µĴ浵��ʧ���豸�𻵵����XINGJI�����Ҳ����κ�" << endl;
	cout << "���Ρ��ٷ���վ��https://www.xingjisoft.top/����ַ��̫�����Ͻ�8�ţ������ʼ���Ʒ���ղ��ˣ���" << endl;

	Sleep(3000);
	
	system("bcms_files\\bcms.exe");

	return 0;
}
