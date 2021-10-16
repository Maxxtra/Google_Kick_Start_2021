#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f ("input.txt");

void solve() {
	int k;
	read(k);
	vt<int> x, y;
	FOR(k) {
		int x1, x2, y1, y2;
		read(x1, y1, x2, y2);
		x.pb(x1);
		x.pb(x2);
		y.pb(y1);
		y.pb(y2);
	}
	sort(all(x));
	sort(all(y));
	write(x[sz(x)/2-1]);
	write(' ');
	print(y[sz(y)/2-1]);
}

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int t=1;
	read(t);
	FOR(t) {
		write("Case #", i+1, ": ");
		solve();
	}
}
