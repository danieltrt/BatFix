import os
import subprocess
from os import listdir
import time
from tqdm import tqdm
import shutil
import os

benchmarks = [
    f for f in listdir("/Users/anon/Documents/Dev.nosync/Java2CPP/benchmarks/java/")
]
cpps = list(filter(lambda x: x.endswith(".cpp"), benchmarks))


ground_truths = "/Users/anon/Documents/Dev.nosync/Java2CPP/ground_truths/geeks_for_geeks_successful_test_scripts/java/"
i = 0
for cpp in cpps:
    try:
        src = ground_truths + cpp[:-4] + ".java"
        dst = os.getcwd() + "/" + cpp[:-4] + ".java"
        shutil.copyfile(src, dst)
    except:
        print(src)

# Calculate the sho
