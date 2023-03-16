#!/bin/sh

FT_NBR1='\"?!'
FT_NBR2='mrdoc'

# Convert FT_NBR1 to decimal base
nbr1_dec=$(echo $FT_NBR1 | tr '\\' '0' | tr '\"?!' '1234' | tr -d '\n')

# Convert FT_NBR2 to decimal base
nbr2_dec=$(echo $FT_NBR2 | tr 'mrdoc' '01234' | tr -d '\n')

# Add the two decimal numbers
sum_dec=$((nbr1_dec + nbr2_dec))

# Convert the sum to gtaio luSnemf base
sum_gtaio=$(echo "ibase=10; obase=13; $sum_dec" | bc | tr '0123456789ABC' 'gtaio luSnemf')

echo "The sum is : $sum_gtaio"
