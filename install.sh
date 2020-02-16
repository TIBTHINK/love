  if [[ $EUID -ne 0 ]]; then
   echo "This script must be run as root" 
   exit 1
   fi
apt install g++
./comp.sh
mv love /usr/bin/love
sleep 3
echo "ok now go away and run the love command :)"
