#include <Eigen/Dense>
#include "Converter.h"
#include "RNSOps.h"

int main()
{
	Converter::intToMatrix(52, { 3,5,7 });
	Converter::matrixToInt({ 1,2,3 }, { 3,5,7 });

	RNSOps::generation(0, 100);
	RNSOps::addition({ 1,0,4 }, { 0,2,4 }, { 2,3,5 });
	RNSOps::mutiplication({ 0,1,4 }, { 1,2,0 }, { 2,3,5 });
}