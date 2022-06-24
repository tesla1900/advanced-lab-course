# This file should be sourced in order to set things up for STYX data analysis.
# This version assumes that Root is in /usr/local/root,
# that the STYX code is in the directory ${HOME}/Styx
# and that the compiled code is in ${HOME}/bin, ${HOME}/lib etc.
# It should be adapted as necessary and probably copied to ${HOME}/Styx or its equivalent.

# Set up Root
# echo $PATH
# Root is /usr/local/root
source /usr/local/root/bin/thisroot.sh
# Root installed on macOS using brew
# source $(brew --prefix root6)/bin/thisroot.sh
# echo $PATH

# Set STYXSYS
export STYXSYS=${HOME}/STYX

# Include ~/bin in PATH
export PATH=${HOME}/bin:${PATH}

# Include ~/lib in LD_LIBRARY_PATH
export LD_LIBRARY_PATH=${HOME}/lib:${LD_LIBRARY_PATH}

# Summarise STYX setup
echo "STYXSYS set to <${STYXSYS}>"
echo "ROOTSYS set to <${ROOTSYS}>"
echo "PATH is set to <${PATH}>"
echo "LD_LIBRARY_PATH is set to <${LD_LIBRARY_PATH}>"
