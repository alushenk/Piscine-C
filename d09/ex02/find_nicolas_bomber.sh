#!/bin/sh
cat $1 | grep -i "Nicolas" | grep -i "Bomber" | cut -f 3 | egrep "1|2|3|4|5|6|7|8|9|0"