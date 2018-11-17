#!/bin/bash

sed -n '2~2p' | cut  -d: -f 1 | rev | sort -r | sed -ne "$MY_LINE1, $MY_LINE_2 p" | sed "$!s/$/, /" | tr -d "\n" | sed "s/$/./"
