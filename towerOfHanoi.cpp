#include <iostream>

using namespace std;

void solve(int n, int from, int to, int aux) {
  if (n == 1) {
    cout << from << " " << to << endl;
  } else {
    solve(n - 1, from, aux, to);
    cout << from << " " << to << endl;
    solve(n - 1, aux, to, from);
  }
}

int main() {
  int n;
  cin >> n;

  cout << (1 << n) - 1 << endl;
  for (int i = 1; i <= (1 << n) - 1; i++) {
    if (i % 3 == 1) {
      cout << 1 << " " << 2 << endl;
    } else if (i % 3 == 2) {
      cout << 1 << " " << 3 << endl;
    } else {
      cout << 2 << " " << 3 << endl;
    }
  }

  return 0;
}
