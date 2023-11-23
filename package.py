# Copyright 2013-2023 
from spack.package import *


class Xiosexample(Package):
    """FIXME: Put a proper description of your package here."""

    # FIXME: Add a proper url for your package's homepage here.
    homepage = "https://www.example.com"
    url = "file:///scractch/fp0/lxw900/xios/xiosexample.zip"

    version('local', '0123456789abcdef0123456789abcdef')
	

    # FIXME: Add dependencies if required.
    depends_on("xios")

    def install(self, spec, prefix):
        make()
        install_tree('.',prefix.include)
        install_tree('.',prefix.bin)
        install_tree('.',prefix.src)
        install_tree('.',prefix.lib)
        install_tree('.',prefix.inputs)
