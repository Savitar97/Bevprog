#include <stdio.h>
#include <cmath>
#include "std_lib_facilities.h"

int main()
try {
double x = 2; double d = 5/x;double a=x-2;if(a==0){x++;a=x-2;}; if (d==2*a+0.5) cout << "Success!\n";
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