#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	char in;
	cout << "->>>-挖矿模拟器启动器-<<<-" << endl;
	while (true)
	{
		cout << "A.启动游戏   B.商城   C.反馈(Q&A)" << endl;
		cin >> in;
		if (in == 'a' || in == 'A')
		{
			cout << "请选择版本：" << endl;
			cout << "A.1.7.0" << endl;
			cout << "B.1.6.9" << endl;
			cout << "C.1.6.8" << endl;
			cout << "D.1.6.7" << endl;
			cout << "E.1.6.6" << endl;
			cout << "F.1.6.5" << endl;
			cout << "G.1.6.4" << endl;
			cin >> in;
			if (in == 'b' || in == 'B')
			{
				system("bcms_files\\versions\\1.6.9\\bcms1.6.9.exe");
			}
			else if (in == 'a' || in == 'A')
			{
				system("bcms_files\\versions\\1.7.0\\bcms.exe");
			}
			else if (in == 'c' || in == 'C')
			{
				system("bcms_files\\versions\\1.6.8\\1.6.8\\挖矿模拟器1.6.8.exe");
			}
			else if (in == 'd' || in == 'D')
			{
				system("bcms_files\\versions\\1.6.7\\1.6.7\\挖矿模拟器1.6.7.exe");
			}
			else if (in == 'e' || in == 'E')
			{
				system("bcms_files\\versions\\1.6.6\\1.6.6\\挖矿模拟器1.6.6.exe");
			}
			else if (in == 'f' || in == 'F')
			{
				system("bcms_files\\versions\\1.6.5\\1.6.5\\挖矿模拟器1.6.5.exe");
			}
			else if (in == 'g' || in == 'G')
			{
				system("bcms_files\\versions\\1.6.4\\1.6.4\\挖矿模拟器1.6.4.exe");
			}
		}
		else if (in == 'b' || in == 'B')
		{
			cout << "-游戏商城-" << endl;
			cout << "本季上新[输入Z查看]" << endl;
			cout << "XG8800-破茧 SSSS" << endl;
			cout << "DLC专区" << endl;
			cout << "A.奇亚币附加包[暂未推出]" << endl;
			cout << "礼包专区" << endl;
			cout << "B.金钱补给包" << endl;
			cout << "C.星际五周年补给包" << endl;
			cout << "D.新人补给包" << endl;
			cin >> in;
			if (in == 'a' || in == 'A')
			{
				cout << "奇亚币附加包   5￥" << endl;
				cout << "-支付方法-" << endl;
				cout << "给郭私聊转账" << endl;
			}
			else if (in == 'b' || in == 'B')
			{
				cout << "-金钱补给包(暂未推出，预计1.7.1上架)-" << endl;
				cout << "钱*1亿" << endl;
				cout << "价格10￥" << endl;
				cout << "-支付方法-" << endl;
				cout << "给郭私聊转账" << endl;
			}
			else if (in == 'c' || in == 'C')
			{
				cout << "-星际五周年补给包(暂未推出，预计1.7.1上架)-" << endl;
				cout << "钱*5千万" << endl;
				cout << "比特币*1千" << endl;
				cout << "价格6￥[超值！]" << endl;
				cout << "-支付方法-" << endl;
				cout << "给郭私聊转账" << endl;
			}
			else if (in == 'd' || in == 'D')
			{
				cout << "-新人补给包(暂未推出，预计1.7.1上架)-" << endl;
				cout << "任选S级矿机" << endl;
				cout << "免费[九班专属]" << endl;
			}
			else if (in == 'z' || in == 'Z')
			{
				cout << "本季时间：2023年1月1日至2023年2月31日" << endl;
				cout << "本季上新：" << endl;
				cout << "A.XG8800-破茧" << endl;
				cout << "B.北京2022冬奥会矿机返场[暂未上架]" << endl;
				cout << "C.挖矿模拟器两周年庆矿机[暂未上架]" << endl;
				cout << "本季活动：" << endl;
				cout << "D.挖矿模拟器两周年庆" << endl;
				cout << "【本季为第一季，处于公测阶段，公测结束后每月一季】" << endl;
				cout << "【北京冬奥会矿机改名为BJWOG2022并推出破茧版】" << endl;
				cin >> in;
				if (in == 'd' || in == 'D')
				{
					cout << "挖矿模拟器两周年庆【2023年2月1日至2023年2月15日】" << endl;
					cout << "-B站关注礼包上架" << endl;
					cout << "-多种活动：" << endl;
					cout << "①矿工猜猜乐2023.2.1至2023.2.15" << endl;
					cout << "	猜猜杀郑会的参赛者平均分数是多少？" << endl;
					cout << "②幸运转盘2023.2.1至2023.2.10" << endl;
					cout << "	转盘抽取XG8800-破茧！不氪金也能获得直售！" << endl;
					cout << "③村民骨折大减价2023.2.11至2023.2.15" << endl;
					cout << "	XG8800-破茧低至5折！" << endl;
					cout << "④复制成双2023.2.1至2023.2.5" << endl;
					cout << "	每次充值100%可以获得物品！最高价值300元！" << endl;
					cout << "	活动期间共可抽取三十次！概率详见最后概率表！" << endl;
					cout << "⑤全新矿机上架！" << endl;
					cout << "	XG2023	SSS品质" << endl;
					cout << "附件-概率表" << endl;
					cout << "0.1%	XG8800-破茧" << endl;
					cout << "0.4%	XG2023" << endl;
					cout << "0.5%	任选SS级矿机" << endl;
					cout << "9%		钱*100万" << endl;
					cout << "20%	转盘钥匙*1" << endl;
					cout << "约69%	比特币*10" << endl;
					cout << "↓↓↓还有一个隐藏大奖！！！" << endl;
					cout << "???%	全年直售免费获得！！！" << endl;
				}
				else if (in == 'a' || in == 'A')
				{
					cout << "XG8800-破茧" << endl;
					cout << "限时活动获取   SSSS" << endl;
					cout << "算力：100万" << endl;
					cout << "等级排行：No.1" << endl;
					cout << endl;
					cout << ">>> 10元 <<<" << endl;
					cout << "·输入任意键查看详细信息·" << endl;
					cin >> in;
					cout << "-产品内容-" << endl;
					cout << "XG8800-破茧 * 1	SSSS" << endl;
					cout << "收藏积分 * 100		S" << endl;
					cout << "收藏证书 * 1		SSSS" << endl;
					cout << "-产品获得途径-" << endl;
					cout << "·限时活动获得" << endl;
				}
			}
		}
		else if (in == 'c' || in == 'C')
		{
			cout << "-反馈-" << endl;
			cout << "请问您遇到了什么问题？" << endl;
			cout << "A.挖不到比特币   B.挖矿速度太慢   C.无法挖矿   D.其他问题" << endl;
			cin >> in;
			if (in == 'a' || in == 'A')
			{
				cout << "反馈 > 挖不到比特币" << endl;
				cout << "请问您的目前挖矿失败次数？" << endl;
				cout << "A.小于等于334   B.大于334" << endl;
				cin >> in;
				if (in == 'a' || in == 'A')
				{
					cout << "反馈 > 挖不到比特币 > 小于等于334" << endl;
					cout << "解决办法" << endl;
					cout << "继续等待，挖矿需要时间，不是没车都能成功的哦" << endl;
				}
				else
				{
					cout << "反馈 > 挖不到比特币 > 大于334" << endl;
					cout << "我们判断您遇到了未知BUG。请转到“其他问题”进行反馈。" << endl;
				}
			}
			else if (in == 'b' || in == 'B')
			{
				cout << "反馈 > 挖矿速度太慢" << endl;
				cout << "解决办法" << endl;
				cout << "您可以在游戏内（是游戏！不是启动器！）点击“商店”购买矿机加速哦。" << endl;
				cout << "如果嫌矿机太贵可以直接氪金购买哦" << endl;
			}
			else
			{
				cout << "我们判断您可能遇到了未知问题。您可以在下面输入您遇到的问题。" << endl;
				cin >> in;
				cout << "骗你的，你只能私信郭反馈，不能通过其他渠道[doge]" << endl;
			}
		}
	}
	return 0;
}