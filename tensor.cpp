#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main() {

	//tensor of rank 3 of sizes: 2, 3, 4
	Eigen::Tensor<int, 2> tensor({5, 7});
	tensor.setConstant(rand() % 100); // 42 as a value

	std::cout << "tensor:\n\n" << tensor << "\n\n";

	std::cout << "tamanho do tensor: " << tensor.size() << "\n\n";

	return 0;
}