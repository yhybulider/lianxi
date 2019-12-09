// EX4-3.cpp: ����Ŀ�ļ���

#include "stdafx.h"

using namespace System;

ref class CCreature  abstract

{
public:
	int nPower; //��������
	int nLifeValue; //��������ֵ
	String^ sName; //�����ɫ������

public:
	virtual void Attack(CCreature ^ pCreature) = 0;
	virtual int  Hurted(int nPower) = 0;
	virtual int FightBack(CCreature ^ pCreature) = 0;
	CCreature(int Power, int lifeValue, String ^name) :nPower(Power), nLifeValue(lifeValue), sName(name){}

};

ref class CDragon : public CCreature { //���ǹ���CDragon��Ķ���
public:
	virtual void Attack(CCreature ^ pCreature) override
	{
		//���ֹ��������Ĵ���
		Console::WriteLine(L"CDragon{0} �� {1} ����", this->sName, pCreature->sName);
		pCreature->Hurted(nPower);

		pCreature->FightBack(this);

	}

	virtual int  Hurted(int nPower)  override

	{

		//�������˶����Ĵ���

		Console::WriteLine(L"CDragon{0} �⵽��������", this->sName);

		nLifeValue -= nPower;

		return nLifeValue;

	}

	virtual int FightBack(CCreature ^ pCreature) override

	{

		//���ַ��������Ĵ���

		Console::WriteLine(L"CDragon{0} �� {1} ��������", this->sName, pCreature->sName);

		pCreature->Hurted(nPower / 2);

		return nPower / 2;

	}

	CDragon(int Power, int lifeValue, String ^name) :CCreature(Power, lifeValue, name){}

};
