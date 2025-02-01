#pragma once
#include <Eigen/Core>
using namespace Eigen;

class Converter
{
public:
	static Vector3i intToMatrix(int, Vector3i);
	static int matrixToInt(Vector3i, Vector3i);
};