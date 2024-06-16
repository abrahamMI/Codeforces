#include <algorithm>
#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    long long N;
    cin >> N;
    long long sum = ((N)*(N+1))/2;
    long long pot = 1;
    while (pot <= N) {
      sum -= 2*pot;
      pot *= 2;
    }
    cout << sum << endl;
  }
  return 0;
}
