#include <iostream>
#include "xios.hpp"

int main() {
    xios::CXios::initialize();

    xios::read_config_file("path/to/your/config.xml");

    xios::finalize();

    return 0;
}


// export CPLUS_INCLUDE_PATH=$(spack location -i xios)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i boost)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i rapidxml)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i mpi)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i blitz)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i netcdf-c)/include:$CPLUS_INCLUDE_PATH