#include <iostream>
#include "xios.hpp"
#include "mpi.h"

int main(int argc, char *argv[]) {
    MPI_Init(&argc, &argv);
    xios::CXios::initialize();

    //xios::read_config_file("path/to/your/config.xml");

    //xios::finalize();
    MPI_Finalize();
    return 0;
}


// export CPLUS_INCLUDE_PATH=$(spack location -i xios)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i boost)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i rapidxml)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i mpi)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i blitz)/include:$CPLUS_INCLUDE_PATH
// export CPLUS_INCLUDE_PATH=$(spack location -i netcdf-c)/include:$CPLUS_INCLUDE_PATH