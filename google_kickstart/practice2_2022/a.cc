#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>

int main() {
	int T;
	std::cin >> T; 
	for (int i = 0; i < T; i++) {
		int L, R; 
		std::cin >> L >> R; 
		long long m = std::min(L, R); 
		long long result = m * (m + 1) / 2;
		std::cout << "Case #" << i + 1 << ": " << result << std::endl;
	}
	return 0; 
}
