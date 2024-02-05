#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main() {

	Eigen::Tensor<int, 3> tensor(2, 3, 4);
	tensor.setConstant(42);

	std::cout << "tensor:\n\n"
			  << tensor << "\n\n";

	std::cout << "tamanho do tensor: " << tensor.size() << "\n\n";

	return 0;
}