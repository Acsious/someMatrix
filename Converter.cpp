#include "Converter.h"

Vector3i Converter::intToMatrix(int value, Vector3i modules)
{
	Eigen::Vector3i result;
	for (int i = 0; i < 3; i++)
	{
		result[i] = value % modules[i];
	}
	return result;
}

int Converter::matrixToInt(Vector3i value,Vector3i modules)
{
	int result = 0;
	int P = 1;
	for (int i = 0; i < modules.size(); i++)
	{
		P *= modules[i];
	}
	for (int i = 0; i < modules.size(); i++)
	{
		result += value[i] * (P / modules[i]) * ((P / modules[i]) % modules[i]);
	}
	result = abs(result) % P;
	return result;
}