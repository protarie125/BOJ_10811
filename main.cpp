#include <iostream>
#include <vector>

using namespace std;

using vi = vector<int>;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int n, m; cin >> n >> m;

	auto p = vi(n);
	for (auto i = 0; i < n; ++i) {
		p[i] = i + 1;
	}

	while (0 < (m--)) {
		int a, b; cin >> a >> b;

		if (a == b) {
			continue;
		}

		auto q = vi{ p };
		for (auto i = a - 1; i < b; ++i) {
			q[(b - i) + a - 2] = p[i];
		}

		p = q;
	}

	for (const auto& x : p) {
		cout << x << ' ';
	}

	return 0;
}