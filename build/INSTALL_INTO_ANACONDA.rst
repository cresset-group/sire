== Instructions for installing Sire into an anaconda distribution ==

(1) Download and install a miniconda or anaconda distribution, e.g.

wget http://repo.continuum.io/miniconda/Miniconda3-latest-Linux-x86_64.sh

chmod a+x Miniconda3-latest-Linux-x86_64.sh
./Miniconda3-latest-Linux-x86_64.sh

You can choose to install this wherever you want. To keep the same
naming convention of Sire, you can choose $HOME/sire.app

Now, you should have a python in $HOME/sire.app/bin/python. Test it.
Can you run a simple python script?

(1a) Download and install OpenMM

Sire now depends on OpenMM support, so install OpenMM into miniconda using the commands

$HOME/sire.app/bin/conda config --add channels http://conda.binstar.org/omnia
$HOME/sire.app/bin/conda install openmm

(this assumes that you installed miniconda into $HOME/sire.app)

(2) Download the Sire source

You can get this from git, e.g. grab the devel branch. I am going
to assume that you have downloaded it to $HOME/Sire, e.g. you should
have the directories

$HOME/Sire/corelib

and

$HOME/Sire/wrapper

(2) Create the build directories for the corelib and wrappers

mkdir build
mkdir build/corelib
mkdir build/wrapper

(3) Now compile the corelib, telling it to build into anaconda

Do this by typing

cd build/corelib
cmake -D -D ANACONDA_BASE=$HOME/sire.app $HOME/Sire/corelib

(this assumes that you have installed anaconda into $HOME/sire.app and
 you have the corelib source in $HOME/Sire/corelib. Note that this will
autodetect and use OpenMM if you have installed it using step 1a.)

This will now configure the corelib for installation into the anaconda distribution
in $HOME/sire.app

This will take some time. Have a coffee.

Once the cmake command has finished, you can now compile the corelib
using the command

nice make -j 8

(-j says how parallel you want to be. If you have 16 cores on your node,
 you may want to be more parallel, e.g. -j 16. Equally, if you only have
 four cores on your laptop, you may want to be less parallel e.g, -j 4)

This will also take a long time. You can have more coffee.

Once this has finished, you can install corelib into
the anaconda distribution by typing

make -j 8 install/strip

Once this has finished, you should find that the sire libraries are
visible in $HOME/sire.app/pkgs/sire-0.0.1/lib, e.g.

ls $HOME/sire.app/pkgs/sire-0.0.1/lib/libSireMol*

should show all of the SireMol libraries.

(4) Now compile the python wrappers, also telling it to install
    into the anaconda directory

cd ../wrapper
cmake -D -D ANACONDA_BASE=$HOME/sire.app $HOME/Sire/wrapper

(again, this assumes that you have put anaconda into $HOME/sire.app
 and that the Sire source is in $HOME/Sire)

This will configure the python wrappers for installation into the anaconda
directory. Again, this may take a while...

Once the cmake command has finished, you compile the wrappers using

make -j 8

Again, this will take a while to complete...

Once the compilation has finished, install using

make -j 8 install/strip

Once this has finished, you should find that you have a sire_python
(and all other Sire executables) in $HOME/sire.app/bin. Try to run
one of the Sire programs, e.g.

$HOME/sire.app/bin/waterswap

You should see some instructions on how to use the waterswap
program.

To test your installation, type

$HOME/sire.app/bin/sire_test

Hopefully, all of the tests will pass...

