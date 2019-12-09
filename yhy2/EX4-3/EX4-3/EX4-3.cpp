// EX4-3.cpp: 主项目文件。

#include "stdafx.h"

using namespace System;

ref class CCreature  abstract

{
public:
	int nPower; //代表攻击力
	int nLifeValue; //代表生命值
	String^ sName; //代表角色的名字

public:
	virtual void Attack(CCreature ^ pCreature) = 0;
	virtual int  Hurted(int nPower) = 0;
	virtual int FightBack(CCreature ^ pCreature) = 0;
	CCreature(int Power, int lifeValue, String ^name) :nPower(Power), nLifeValue(lifeValue), sName(name){}

};

ref class CDragon : public CCreature { //这是怪物CDragon类的定义
public:
	virtual void Attack(CCreature ^ pCreature) override
	{
		//表现攻击动作的代码
		Console::WriteLine(L"CDragon{0} 向 {1} 攻击", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);

		pCreature->FightBack(this);

	}

	virtual int  Hurted(int nPower)  override

	{

		//表现受伤动作的代码

		Console::WriteLine(L"CDragon{0} 遭到攻击受伤", this->sName);

		nLifeValue -= nPower;

		return nLifeValue;

	}

	virtual int FightBack(CCreature ^ pCreature) override

	{

		//表现反击动作的代码

		Console::WriteLine(L"CDragon{0} 向 {1} 发出反击", this->sName, pCreature->sName);

		pCreature->Hurted(nPower / 2);

		return nPower / 2;

	}

	CDragon(int Power, int lifeValue, String ^name) :CCreature(Power, lifeValue, name){}

};
