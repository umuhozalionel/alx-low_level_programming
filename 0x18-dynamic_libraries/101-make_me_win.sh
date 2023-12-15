#!/bin/bash
wget -P .. https://raw.githubusercontent.com/umuhozalionel/alx-low_level_programming/master/0x18-dynamic_libraries/libjackpot.so
export LD_PRELOAD="$PWD/../libjackpot.so"
