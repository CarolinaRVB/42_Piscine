#!/bin/zsh

# show output of etc pass removing comments, every other line starting from second line, reversing each login, sorted in rever alphabetical order, keeping only logins between FT_LINE1 and FT_LINE2, sparated by , and output ends on .

export FT_LINE1=7
export FT_LINE2=15


cat /etc/passwd | awk 'NR % 2 == 0 && !/^#/ {print}' | awk -F: '{print $1}' |  rev | sort -r |  sed -n "$FT_LINE1,$FT_LINE2 p" | tr '\n' '\0' | xargs -0 printf '%s, ' | sed 's/, $/./'
    
