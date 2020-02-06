#include <math.h>
#include <stdio.h>

int main(void)
{
	double nums[] = { 0.0, 1.0, 2.0, 3.0, 4.0, 5.0, 6.0, 7.0, 8.0, 9.0 };
	const size_t array_length = sizeof(nums) / sizeof(nums[0]);

	double sum = 0.0;

	size_t idx;
	for (idx = 0u; idx < array_length; ++idx)
	{
		double square_root = sqrt(nums[idx]);
		sum += square_root;
	}

	printf("%lf\n", sum / array_length);
	
	return 0;
}