
if [ "$PREFIX" = "/data/data/com.termux/files/usr" ]; then
    BIN_DIR="$PREFIX/bin/"
    BASH_PATH="$PREFIX/bin/bash"
    TERMUX=true

   apt install g++
   ./comp.sh
   mv love BIN_DIR
   sleep 3
   echo "ok now go away and run the love command :)"

else
    BASH_PATH="/bin/bash"
    TERMUX=false


   if [[ $EUID -ne 0 ]]; then
      echo "This script must be run as root" 
      exit 1
   fi
   apt install g++
   ./comp.sh
   mv love /usr/bin/love
   sleep 3
   echo "ok now go away and run the love command :)"
fi