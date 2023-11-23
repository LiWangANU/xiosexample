# Copyright 2013-2023 
from spack.package import *


class Xiosexample(Package):
    """FIXME: Put a proper description of your package here."""

    # FIXME: Add a proper url for your package's homepage here.
    homepage = "https://www.example.com"
    git = "https://github.com/LiWangANU/xiosexample"
    url = "https://github.com/LiWangANU/xiosexample/refs/heads/1.1.0.tar.gz"

    version('1.1.0', branch='main')
	

    # FIXME: Add dependencies if required.
    depends_on("xios")
    depends_on("rapidxml")

    def install(self, spec, prefix):
        make()
        install_tree('.',prefix.include)
        install_tree('.',prefix.bin)
        install_tree('.',prefix.src)
        install_tree('.',prefix.lib)
        install_tree('.',prefix.inputs)
