#!/bin/zsh

# count files in current directory and sub directories

find . -type f -o -type d | wc -l
