#!/bin/zsh

# skip second line of ls
ls -l | awk 'NR%2==1'
