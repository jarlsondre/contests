#include <numeric>
#include <iostream>

int main() {
	int T; 
	std::cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M; 
		std::cin >> N >> M; 
		int nums[N];
		for (int j = 0; j < N; j++) {
			std::cin >> nums[j];
		}
		int total = std::accumulate(nums, nums + N, 0); 
		std::cout << "Case #" << i + 1 << ": " << total % M << std::endl;
	}
	return 0; 
}
