#pragma once
#include<iostream>
#include"Identity.h"
#include"student.h"
#include"teacher.h"
#include"computerRoom.h"
using namespace std;

//����Ա�����
class Manager : public Identity
{
public:
	//Ĭ�Ϲ���
	Manager();

	//�вι���
	Manager(string name, string pwd);

	//�˵�����
	virtual void operMenu();

	//����˻�
	void addPerson();

	//�鿴�˻�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	//����ظ� ���������ѧ�� / ְ���ţ��������
	bool checkRepeat(int id, int type);
	
	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//������Ϣ����
	vector<ComputerRoom> vCom;
};