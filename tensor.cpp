#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main() {


	Eigen::Tensor<int, 2> tensor(3, 2);
	tensor.setValues({{1, 1}, {3, 3}, {9, 9}}); 

	std::cout << "tensor:\n\n" << tensor << "\n\n";

	std::cout << "tamanho do tensor: " << tensor.size() << "\n\n";

	return 0;
}