#pragma once //��������
#include "Task.h"
#include <fstream>

void Task::LoadTask(std::ifstream* fin) //To do: �������� ��� �����������
{
	//Task::difficulty - To do: ����������� � �������� ����� � �������
	//Task::duration
	Task::task_text = ReadFile(fin[1]); //To do: �� ����� ReadFile
	Task::task_answer = ReadFile(fin[2]);
}