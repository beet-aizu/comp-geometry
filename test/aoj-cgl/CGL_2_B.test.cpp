// verification-helper: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/4/CGL/2/CGL_2_B

#include <bits/stdc++.h>
using namespace std;

#define call_from_test
#include "../../src/segment.hpp"
#include "../../src/is_intersect.hpp"
#undef call_from_test

using namespace geometry;
int main() {
  int q;
  cin >> q;

  while (q--) {
    segment s1, s2;
    cin >> s1.a >> s1.b >> s2.a >> s2.b;

    cout << is_intersect(s1, s2) << endl;
  }
}
