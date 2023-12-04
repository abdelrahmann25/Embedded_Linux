#!/bin/bash
cut -f 4- -d' ' ./app.log | sort| uniq -c |sort -rn
#count=$(grep Error ./app.log | wc -l)
#echo "Total errors = '$count'"
