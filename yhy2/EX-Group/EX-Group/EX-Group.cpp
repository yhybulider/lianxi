// EX-Group.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	String ^Name;
	double TheoryCredit, ExperimentCredit, TuitionFee, InsuranceCosts, HouseholdIncome, LivingCosts, Accommodation, OtherCosts, ClassNum, MaterialCost, TotalFee, Cost, SkipNum, MoneyCosts, TimeCosts, Propotion, OpportunityCost;
	//�����Ķ���
	int  FailNum, TFailCredits, EFailCredits;

	Console::Write(L"����������������");

	Name = Console::ReadLine();//��������

	Console::Write(L"������һ���������ѧ��:");

	TheoryCredit = Double::Parse(Console::ReadLine());//���ۿ�ѧ��

	Console::Write(L"������һ�����ʵ��ѧ��:");

	ExperimentCredit = Double::Parse(Console::ReadLine());//ʵ���ѧ��

	Console::Write(L"������һ���ѧ��:");

	TuitionFee = Double::Parse(Console::ReadLine());//ѧ��

	Console::Write(L"������һ���ס�޷�:");

	Accommodation = Double::Parse(Console::ReadLine());//ס�޷�

	Console::Write(L"������һ��ı��շ�:");

	InsuranceCosts = Double::Parse(Console::ReadLine());//���շ�
	Console::Write(L"������һ��Ľ̲ķ�:");

	MaterialCost = Double::Parse(Console::ReadLine());//�̲ķ�

	Console::Write(L"������һ��������:");

	LivingCosts = Double::Parse(Console::ReadLine());//�����
	Console::Write(L"������һ�����������:");

	OtherCosts = Double::Parse(Console::ReadLine());//��������
	ClassNum = (TheoryCredit + 2 * ExperimentCredit) * 20;//һѧ��20�ܣ�

	TotalFee = TuitionFee + Accommodation + InsuranceCosts + MaterialCost + LivingCosts + OtherCosts;//�ܷ��ã�ѧ��+ס�޷�+��ͨ��+�̲ķ�

	Cost = TotalFee / ClassNum;//ÿ�ڿεĳɱ�

	Console::WriteLine(L"�ӿε��ܳɱ�Ϊ{0,2:F2}Ԫ", TotalFee);//���

	Console::WriteLine(L"�ӿεĳɱ�Ϊ{0,2:F2}Ԫ/��", Cost);

	Console::Write(L"������һѧ���е��ӿν�����");

	SkipNum = Double::Parse(Console::ReadLine());//�ӿδ���

	MoneyCosts = SkipNum * Cost;//�ӿεĽ�Ǯ�ɱ�

	TimeCosts = SkipNum * 0.75;//�ӿε�ʱ��ɱ�

	Console::WriteLine(L"{0}ͬѧ�����ӿε��ܽ���Ϊ{1}�ڣ���Ǯ�ɱ�Ϊ{2,2:F2}Ԫ��ʱ��ɱ�Ϊ{3,2:F2}Сʱ", Name, SkipNum, MoneyCosts, TimeCosts);

	Console::WriteLine(L"{0}ͬѧ����һѧ����һ�����˶��ٴοƣ�  ", Name);
	FailNum = Int32::Parse(Console::ReadLine());//�ҿ�����Ҫ���޵Ĵ���
	Console::WriteLine(L"{0}ͬѧ����һѧ���йҿƿγ������ۿε���ѧ����ѧ���Ƕ��٣�  ", Name);
	TFailCredits = Int32::Parse(Console::ReadLine());//���ۿιҿ���ѧ��
	Console::WriteLine(L"{0}ͬѧ����һѧ���йҿƿγ���ʵ��ε���ѧ����ѧ���Ƕ��٣�  ", Name);
	EFailCredits = Int32::Parse(Console::ReadLine());//ʵ��ιҿ���ѧ��
	OpportunityCost = ((TFailCredits + EFailCredits * 2) * 20)*Cost + FailNum * 500;//��Ҫ���޿�Ŀ�Ľ�Ǯ����ɵ�������ʧ���á�
	Console::WriteLine(L"�ݼ��㣬����Ϊ�ӿ�����ɵĻ���ɱ�Ϊ{0,2:F2}", OpportunityCost);
	Console::WriteLine(L"{0}ͬѧ������ͥһ������Ϊ����Ԫ��", Name);

	HouseholdIncome = Double::Parse(Console::ReadLine());//���������


	Propotion = TotalFee / HouseholdIncome *100;//��ѧ�ܷ���ռ��ͥ����ı���

	Console::WriteLine(L"�ݼ��㣬���ӿε��ܳɱ�������ͥ����ռ��Ϊ{0,2:F2}%", Propotion);

	if (Propotion < 10)
	{
		Console::WriteLine(L"���ݷ��������ļ�ͥ����ȽϺã����Ǹ��õ�ѧϰ��Ϊ�˻ر���ĸΪ��ĸ����������벻Ҫ�ӿ�");
	}

	if (Propotion > 10 && Propotion < 25)
	{
		Console::WriteLine(L"���ݷ��������ļ�ͥ����еȣ�ֻ�кú�ѧϰ���ܸ��Ӹ��Ƽ�ͥ�����������������벻Ҫ�ӿ�");
	}

	if (Propotion > 25)
	{
		Console::WriteLine(L"���ݷ��������ļ�ͥ����ϲֻ�кú�ѧϰ���ܸı��ͥ�����ˣ������벻Ҫ�ӿ�");
	}

	return 0;
}