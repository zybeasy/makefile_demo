#include "args.h"

#include <iostream>

using namespace std;

void output_args(int argc, char *argv[]) {
    for(int i=0; i<argc; ++i)
        cout << "[" << i << ", '" << argv[i] << "'] ";
    cout << endl;
}

