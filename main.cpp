#include <iostream>
#include <vector>


int main() {
	// vector of integers
	std::vector<int> integers;
	for (int n = 0; n < integers.size(); ++n) {
		std::cout << n << ": " << integers[n] << std::endl;
	}
	std::cout << "Capacity: " << integers.capacity() << std::endl;

	//vector initialized using C++11 list initialization
	std::vector<int>initVector {202, 2017, -1};

	for (int i = 0; i <initVector.size(); ++i) {

		std::cout << i << ": " << initVector[i] << std::endl;

	}
	std::cout << "Capacity: " << initVector.capacity() << std::endl;

	// instantiate a vector with 10 elements - it still can grow
	std::vector<int> tenElements(10);

	for (int j = 0; j < tenElements.size(); ++j) {
		std::cout <<  j << ": " << tenElements[j] << std::endl;
	}
	std::cout << "Capacity: " << tenElements.capacity() << std::endl;

	// instantiate a vector of 10 elements, each initialized to value 90
	std::vector<int>tenElemInt(10, 90);
	for (int k = 0; k < tenElements.size(); k++) {
		std::cout << k << ": " << tenElemInt[k] << std::endl;
	}
	std::cout << "Capacity: " << tenElemInt.capacity() << std::endl;
	//initialize vector to the content of another
	std::vector<int>copyVector(tenElemInt);
	for (int l = 0; l < copyVector.size(); ++l) {
		std::cout << l << ": " << copyVector[l] << std::endl;
	}
	std::cout << "Capacity: " << copyVector.capacity() << std::endl;
	// vector initialized to 5 elements from another using iterators
	std::vector<int>partialCopy(tenElements.cbegin(), tenElements.cbegin()+5);
	for (int m = 0; m < partialCopy.size(); ++m) {
		std::cout << m << ": " << partialCopy[m] << std::endl;
	}
	std::cout << "Capacity: " << partialCopy.capacity() << std::endl;



	return 0;
}