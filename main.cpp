#include <iostream>

#include "args.h"

using namespace std;

int main(int argc, char *argv[]) {
    cout << "========== MAIN BEGIN ========" << endl;
    
    output_args(argc, argv);


    cout << "========== MAIN END ==========" << endl;


    return 0;
}
