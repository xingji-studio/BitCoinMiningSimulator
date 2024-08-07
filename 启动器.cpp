#include <iostream>
#include <string>
#include "bcms_archive\key.h"
using namespace std;
int main()
{
	int in = 0;
	int jihuo = 0;
	string key = "";
	jihuo = key_out();
	while (true)
	{
		cout << "-[}公告{]-" << endl;
		cout << "由于XJ380操作系统的开发工作，挖矿模拟器所有版本ji" << endl;
		cout << "-挖矿模拟器总启动器-" << endl;
		cout << "1.启动挖矿模拟器" << endl;
		cout << "2.启动BCMS工具箱" << endl;
		cout << "3.激活" << endl;
		cout << "4.版本详细信息" << endl;
		cin >> in;
		if (in == 1)
		{
			if (jihuo == 0)
			{
				cout << "请先激活挖矿模拟器。" << endl;
			}
			else
			{
				system("bcms_files\\bcms.exe");
			}
		}
		else if (in == 2)
		{
			system("bcms_tools\\bcms_tools.exe");
		}
		else if (in == 3)
		{
			cout << "-|激活BCMS|-" << endl;
			cout << "请输入激活码才可以游玩。激活码可能会在星际集团发给您的电子" << endl;
			cout << "邮件中或着许可证实物中。激活码是一串15个字符的字符串。" << endl;
			cout << "注意：激活码中的横杠（“-”）也需要输入！！！而且那个不是" << endl;
			cout << "中文“一”（yi）！是键盘上加号旁边那个！不需要同时按SHIFT！" << endl;
			cout << "格式：XXXXX-XXXXX-XXXXX" << endl;
			cout << "请输入激活码：";
			cin >> key;
			if (key == "AKFGH-AD8WF-BW7HE" || key == "SAJFU-YAHGE-BFJYZ" || key == "W78FU-WFH8A-7SFHI" || key == "KSJFI-AUUWJ-HKFAE" || key == "ADFJA-HSFG6-8YUWG" || key == "JSHFK-YSJHF-GB72H" || key == "JSY78-FUSG7-6U32Z" || key == "SOHJF-UYSAG-BH8FY")
			{
				cout << "激活成功！感谢您购买挖矿模拟器！" << endl;
				jihuo++;
				key_in(jihuo);
			}
			else
			{
				cout << "激活失败，请仔细核对激活码后重试。" << endl;
			}
		}
		else
		{
			cout << "挖矿模拟器BCMS 1.7.1" << endl;
			cout << "================================================" << endl;
			cout << "版本号：BCMS Version 17w03a测试版               " << endl;
			cout << "        Build Version 1705                      " << endl;
			cout << "内核版本：XG2.0.0                               " << endl;
			cout << "================================================" << endl;
		}
	}
	return 0;
}
