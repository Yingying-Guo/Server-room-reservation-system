#pragma once
#include<iostream>
#include"Identity.h"
#include"computerRoom.h"
using namespace std;

//ѧ����
class Student : public Identity
{
public:
	//Ĭ�Ϲ���
	Student();

	//�вι��� ������ѧ�š�����������
	Student(int id, string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();

	//�鿴����ԤԼ
	void showMyOrder();

	//�鿴����ԤԼ
	void showAllOrder();

	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//������Ϣ����
	vector<ComputerRoom> vCom;
};