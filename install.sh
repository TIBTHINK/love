#   if [[ $EUID -ne 0 ]]; then
#    echo "This script must be run as root" 
#    exit 1
#    fi
# apt install g++
# ./comp.sh
# mv love /usr/bin/love
# sleep 3
# echo "ok now go away and run the love command :)"

if [ "$PREFIX" = "/data/data/com.termux/files/usr" ]; then
    INSTALL_DIR="$PREFIX/usr/share/doc/love"
    BIN_DIR="$PREFIX/bin/"
    BASH_PATH="$PREFIX/bin/bash"
    TERMUX=true
    
    apt install -y g++
    apt install g++
    ./comp.sh
    mv love "$INSTALL_DIR"
    sleep 3
    echo "ok now go away and run the love command :)"

else
  if [[ $EUID -ne 0 ]]; then
   echo "This script must be run as root" 
   exit 1
  fi
    INSTALL_DIR="/usr/bin/love"
    BIN_DIR="/usr/bin"
    BASH_PATH="/bin/bash"
    TERMUX=false

    apt install -y g++
    ./comp.sh
    mv love /usr/bin/love
    sleep 3
    echo "ok now go away and run the love command :)"

fi