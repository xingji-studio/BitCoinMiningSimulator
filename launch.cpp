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

	cout << "=声明=" << endl;
	cout << "挖矿模拟器”属于XINGJI Interactive Software。星际工作室及其旗下软件和工作室的版权受到保护。严禁在未经允许的情况下对" << endl;
	cout << "此软件或此软件的副本进行反编译、未遵守开源协议等侵权行为。使用者导致的存档丢失、设备损坏等情况XINGJI工作室不负任何" << endl;
	cout << "责任。官方网站：https://www.xingjisoft.top/，地址：太阳公南街8号（请勿邮寄物品，收不了）。" << endl;

	Sleep(3000);
	
	system("bcms_files\\bcms.exe");

	return 0;
}
