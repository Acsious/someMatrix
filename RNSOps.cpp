#include "RNSOps.h"

Vector3i RNSOps::generation(int min, int max)
{
	Vector3i result;
	for (int i = 0; i < 3; ++i)
	{
		result[i] = rand() % (max - min) + min;
	}
	return result;
}

Vector3i RNSOps::addition(Vector3i A, Vector3i B, Vector3i modules)
{
	Vector3i result;
	for (int i = 0; i < 3; i++)
	{
		result[i] = (A[i] + B[i]) % modules[i];
	}
	return result;
}

Vector3i RNSOps::mutiplication(Vector3i A, Vector3i B, Vector3i modules)
{
	Vector3i result;
	for (int i = 0; i < 3; i++)
	{
		result[i] = (A[i] * B[i]) % modules[i];
	}
	return result;
}