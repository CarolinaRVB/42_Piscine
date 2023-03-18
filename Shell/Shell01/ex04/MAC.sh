#!/bin/sh
ifconfig | grep "ether" | awk '{print $2}'

#used to extract MAC address of the network interface in linux
#ifconfig --> displayes configuration info
#grep ether --> seacrhes for the line in the ifconfig, that has the word ether, which is is the Ethernet
# awk '{print $2}' --> extracts the second field in from the grep command, which is has the MAC address
