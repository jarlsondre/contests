#include <iostream>
#include <string>
#include <unordered_map>


std::unordered_map<char, int> mp;

int main() {
	int T; 
	std::cin >> T; 
	for (int i = 0; i < T; i++ ) {
		int N, Q;
		std::cin >> N >> Q; 
		std::string s; 
		std::cin >> s;		
		int counter = 0; 
		for (int j = 0; j < Q; j++) {
			mp.clear();
			int L, R;
			std::cin >> L >> R;
			if (L == R) {
				counter++;
				continue; 
			}
			for (int k = L - 1; k < R; k++) {
				if (mp.find(s[k]) == mp.end()) {
					std::pair<char, int> p = std::make_pair(s[k], 1);
					mp.insert(p); 
				}	
				else {
					mp[s[k]] = mp[s[k]] + 1; 
				}
			}
			int diff = R - L + 1; 
			if (diff % 2 == 0) {
				int fail = 0; 
				for (const auto& [ key, value ] : mp) {
					if (value % 2 != 0) {
						fail = 1;
						break; 
					}
				}
				if (!fail) {
					counter++; 
				}
			}
			else {
				int num_fail = 0; 
				for (const auto& [ key, value ] : mp) {
					if (value % 2 != 0) {
						++num_fail; 
					}
				}
				if (num_fail <= 1) {
					counter++;
				}

			}
		}
		std::cout << "Case #" << i + 1 << ": " << counter << std::endl; 
	}
	return 0; 
}
