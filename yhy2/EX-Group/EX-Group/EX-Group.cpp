// EX-Group.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;

int main(array<System::String ^> ^args)
{
	String ^Name;
	double TheoryCredit, ExperimentCredit, TuitionFee, InsuranceCosts, HouseholdIncome, LivingCosts, Accommodation, OtherCosts, ClassNum, MaterialCost, TotalFee, Cost, SkipNum, MoneyCosts, TimeCosts, Propotion, OpportunityCost;
	//变量的定义
	int  FailNum, TFailCredits, EFailCredits;

	Console::Write(L"请输入您的姓名：");

	Name = Console::ReadLine();//输入姓名

	Console::Write(L"请输入一年的总理论学分:");

	TheoryCredit = Double::Parse(Console::ReadLine());//理论课学分

	Console::Write(L"请输入一年的总实验学分:");

	ExperimentCredit = Double::Parse(Console::ReadLine());//实验课学分

	Console::Write(L"请输入一年的学费:");

	TuitionFee = Double::Parse(Console::ReadLine());//学费

	Console::Write(L"请输入一年的住宿费:");

	Accommodation = Double::Parse(Console::ReadLine());//住宿费

	Console::Write(L"请输入一年的保险费:");

	InsuranceCosts = Double::Parse(Console::ReadLine());//保险费
	Console::Write(L"请输入一年的教材费:");

	MaterialCost = Double::Parse(Console::ReadLine());//教材费

	Console::Write(L"请输入一年的生活费:");

	LivingCosts = Double::Parse(Console::ReadLine());//生活费
	Console::Write(L"请输入一年的其他费用:");

	OtherCosts = Double::Parse(Console::ReadLine());//其他费用
	ClassNum = (TheoryCredit + 2 * ExperimentCredit) * 20;//一学期20周，

	TotalFee = TuitionFee + Accommodation + InsuranceCosts + MaterialCost + LivingCosts + OtherCosts;//总费用：学费+住宿费+交通费+教材费

	Cost = TotalFee / ClassNum;//每节课的成本

	Console::WriteLine(L"逃课的总成本为{0,2:F2}元", TotalFee);//输出

	Console::WriteLine(L"逃课的成本为{0,2:F2}元/节", Cost);

	Console::Write(L"请输入一学年中的逃课节数：");

	SkipNum = Double::Parse(Console::ReadLine());//逃课次数

	MoneyCosts = SkipNum * Cost;//逃课的金钱成本

	TimeCosts = SkipNum * 0.75;//逃课的时间成本

	Console::WriteLine(L"{0}同学，您逃课的总节数为{1}节，金钱成本为{2,2:F2}元，时间成本为{3,2:F2}小时", Name, SkipNum, MoneyCosts, TimeCosts);

	Console::WriteLine(L"{0}同学，您一学年中一共挂了多少次科？  ", Name);
	FailNum = Int32::Parse(Console::ReadLine());//挂科且需要重修的次数
	Console::WriteLine(L"{0}同学，您一学年中挂科课程中理论课的总学分总学分是多少？  ", Name);
	TFailCredits = Int32::Parse(Console::ReadLine());//理论课挂科总学分
	Console::WriteLine(L"{0}同学，您一学年中挂科课程中实验课的总学分总学分是多少？  ", Name);
	EFailCredits = Int32::Parse(Console::ReadLine());//实验课挂科总学分
	OpportunityCost = ((TFailCredits + EFailCredits * 2) * 20)*Cost + FailNum * 500;//需要重修科目的金钱和造成的心灵损失费用。
	Console::WriteLine(L"据计算，您因为逃课所造成的机会成本为{0,2:F2}", OpportunityCost);
	Console::WriteLine(L"{0}同学，您家庭一年收入为多少元？", Name);

	HouseholdIncome = Double::Parse(Console::ReadLine());//收入的输入


	Propotion = TotalFee / HouseholdIncome *100;//上学总费用占家庭收入的比例

	Console::WriteLine(L"据计算，您逃课的总成本在您家庭收入占比为{0,2:F2}%", Propotion);

	if (Propotion < 10)
	{
		Console::WriteLine(L"根据分析，您的家庭情况比较好，但是更好的学习是为了回报父母为你的付出，所以请不要逃课");
	}

	if (Propotion > 10 && Propotion < 25)
	{
		Console::WriteLine(L"根据分析，您的家庭情况中等，只有好好学习才能更加改善家庭的生活质量，所以请不要逃课");
	}

	if (Propotion > 25)
	{
		Console::WriteLine(L"根据分析，您的家庭情况较差，只有好好学习才能改变家庭的命运，所以请不要逃课");
	}

	return 0;
}