#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main() {

	// An example of lazy evalution with tensors
	// Lazy evaluation is the ideia that a operation will not be directly assigned (evaluated)
	// to a variable (for example) until the same variable be used (assigned)

	// in the example auto tensorC was not assigned with the sum of the operation
	// instead it created a computation object that knows how to calculate the given some operation
	// and it will do that, once tensorC is used (assigned) which happens in the line 19

	Eigen::Tensor<int, 2> tensorA(4, 2);
	Eigen::Tensor<int, 2> tensorB(4, 2);
	tensorA.setRandom();
	tensorB.setRandom();

	auto tensorC = tensorA + tensorB;
	auto tensorD = tensorB.sqrt();

	std::cout << "tensor C:\n\n" << tensorC << "\n\n" << std::endl;
	std::cout << "tensor D:\n\n" << tensorD << "\n\n" << std::endl;

	return 0;
}