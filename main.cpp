#include <algorithm>
#include <bit>
#include <chrono>
#include <cmath>
#include <cstdint>
#include <deque>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <ranges>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = int64_t;
using vl = vector<ll>;
using pll = pair<ll, ll>;
using vp = vector<pll>;

ll N;
vp AL;

int main() {
  ios::sync_with_stdio(false);
  std::cin.tie(nullptr);

  cin >> N;
  AL = vp(N);
  for (auto&& [a, l] : AL) {
    cin >> a >> l;
  }

  sort(AL.begin(), AL.end());

  ll ans = 1;
  auto [a, l] = AL[0];
  for (auto i = 1; i < N; ++i) {
    const auto& [na, nl] = AL[i];
    if (a + l < na) {
      ++ans;
    }
    a = na;
    l = nl;
  }

  cout << ans;

  return 0;
}