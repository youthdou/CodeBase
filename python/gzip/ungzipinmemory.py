# [python: read lines from compressed text files](https://stackoverflow.com/questions/10566558/python-read-lines-from-compressed-text-files)

import os
import sys
import time
import gzip

def local_unzip(obj):
    t0 = time.time()
    count = 0
    with obj as f:
        for line in f:
            count += 1
    print(time.time() - t0, count)

r = sys.argv[1]
if sys.argv[2] == "1":
    local_unzip(gzip.open(r,'rt'))
else:
    local_unzip(os.popen('pigz -dc ' + r))


# performance compare
# $ /usr/bin/time -f %M ./unzip-file.py $file 1
# (3037.2604110240936, 1223422024)
# 5116

# $ /usr/bin/time -f %M ./unzip-file.py $file 2
# (598.771901845932, 1223422024)
# 4996