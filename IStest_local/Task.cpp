#pragma once //уточнить
#include "Task.h"
#include <fstream>

void Task::LoadTask(std::ifstream* fin) //To do: оформить как конструктор
{
	//Task::difficulty - To do: разобраться с форматом файла с опциями
	//Task::duration
	Task::task_text = ReadFile(fin[1]); //To do: не видит ReadFile
	Task::task_answer = ReadFile(fin[2]);
}