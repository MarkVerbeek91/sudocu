#include <iostream>
#include <vector>
#include "inc/ext/rapidcsv.h"

int main()
{
    std::cout << "hello world!" << std::endl;

    rapidcsv::Document doc("4x4.csv",
                           rapidcsv::LabelParams(-1, -1),
                           rapidcsv::SeparatorParams(' '));

    return 0;
}