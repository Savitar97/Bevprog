#include <stdio.h>
#include <cmath>
#include "std_lib_facilities.h"

int main()
try {
vector<char> s = {'S','u','c','c','e','s','s','!'}; for (int i=0; i<=7; ++i) cout << s[i];cout<<'\n';
keep_window_open();
return 0;
}
catch (exception& e) {
cerr << "error: " << e.what() << '\n';
keep_window_open();
return 1;
}
catch (...) {
cerr << "Oops: unknown exception!\n";
keep_window_open();
return 2;
}