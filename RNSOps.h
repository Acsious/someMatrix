#pragma once
#include <Eigen/Core>
#include <ctime>
using namespace Eigen;

class RNSOps
{
public:
	static Vector3i generation(int, int);
	static Vector3i addition(Vector3i, Vector3i, Vector3i);
	static Vector3i mutiplication(Vector3i, Vector3i, Vector3i);
};