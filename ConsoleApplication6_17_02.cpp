#include <iostream>
void swap(int *one, int *two) {
	int temp = *one;
	*one = *two;
	*two = temp;
}

int main(int argc, char** argv)
{
	int a = 5, b = 8;

	std::cout << "a = " << a << ", b = " << b << std::endl;

	swap(&a, &b);

	std::cout << "a = " << a << ", b = " << b << std::endl;

	return 0;
}
