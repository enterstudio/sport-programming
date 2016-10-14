// In the name of Allah, Most Gracious, Most Merciful

// /
// 
// 
// 
// 
// ??

#include <cassert>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <algorithm>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <utility>
#include <vector>

#define SET(c, v) memset(c, v, sizeof(c))
#define LEN(c) (sizeof(c)/sizeof(c[0]))
#define ALL(c) c.begin(), c.end()
#define SLC(c, n) c, c+(n)

using namespace std;

typedef unsigned int uint;
typedef long long vlong;
typedef unsigned long long uvlong;

const double EPS = 1e-12;
const double PI = acos(-1.0);

enum {
	
};

stack<int> K[1002];

int main() {
	int N;
	scanf("%d", &N);
	while(N--) {
		char C[10];
		int A, B;
		scanf("%s %d", C, &A);
		switch(C[1]) {
		case 'U':
			scanf("%d", &B);
			K[A].push(B);
			break;
		case 'O':
			printf("%d\n", K[A].top());
			K[A].pop();
			break;
		}
	}
	return 0;
}
