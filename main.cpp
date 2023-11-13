#include <stdio.h>
#include "Comparator.h"

int main() {
	// 比較する数値のの組み合わせ(左の値のほうが小さい)
	Comparator<int, int> comparator1(1, 2);
	Comparator<int, float> comparator2(1, 1.5f);
	Comparator<int, double> comparator3(1, 1.6);
	Comparator<float, float> comparator4(1.5f, 2.5f);
	Comparator<float, double> comparator5(1.5f, 1.6);
	Comparator<double, double> comparator6(1.6, 2.6);

	// 数値の小さいほうを表示
	printf("<int, int>       %d\n", comparator1.Min<int>());
	printf("<int, float>     %f\n", comparator2.Min<float>());
	printf("<int, double>    %lf\n\n", comparator3.Min<double>());
	printf("<float, float>   %f\n", comparator4.Min<float>());
	printf("<float, double>  %lf\n\n", comparator5.Min<double>());
	printf("<double, double> %lf\n", comparator6.Min<double>());

	return 0;
}