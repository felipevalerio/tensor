#include <iostream>
#include <unsupported/Eigen/CXX11/Tensor>

int main() {

	// alterando as dimensões de um tensor via convoluções
	
	Eigen::Tensor<float, 4> input(1, 6, 6, 3);
	input.setRandom();

	Eigen::Tensor<float, 2> kernel(3, 3);
	kernel.setRandom();

	Eigen::Tensor<float, 4> output(1, 4, 4, 3);
	output.setRandom();


	Eigen::array<int, 2> dims({1, 2});
	output = input.convolve(kernel, dims);

	std::cout << "input:\n\n" << input << "\n\n";
	std::cout << "kernel:\n\n" << kernel << "\n\n";
	std::cout << "output:\n\n" << output << "\n\n";

	return 0;
}