#pragma once //��������
#include <fstream>

std::string ReadFile(std::ifstream f) //������ ���� �������
{
    f.seekg(0, std::ios::end);
    size_t size = f.tellg();
    std::string s(size, ' ');
    f.seekg(0);
    f.read(&s[0], size);
    return s;
}

std::ifstream* OpenTaskFile() //���������� ������ ������, �������� ��� ������
{

}