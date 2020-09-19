#pragma once //уточнить
#include <fstream>
#include <string>


class Task
{
	std::string task_text;
	std::string task_answer;
	long int duration;
	int difficulty;

	void LoadTask(std::ifstream* fin);
};

