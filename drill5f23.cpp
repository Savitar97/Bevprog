#include <stdio.h>
#include <cmath>
#include "std_lib_facilities.h"

int main()
try {
int i=0, j=9; while (i<10) ++i; if (j<i) cout << "Success!\n";
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