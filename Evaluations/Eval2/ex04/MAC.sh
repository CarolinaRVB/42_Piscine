#!/bin/zsh

# find MAC adress

ifconfig | grep "ether" | awk '{print $2}'
