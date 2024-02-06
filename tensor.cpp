#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main() {


	Eigen::Tensor<int, 2> tensor1(4, 2), tensor2(2, 4);
	tensor1.setRandom();
	tensor2.setRandom(); 

	std::cout << "tensor 1:\n\n" << tensor1 << "\n\n";
	std::cout << "tensor 2: \n\n" << tensor2 << "\n\n";

	return 0;
}