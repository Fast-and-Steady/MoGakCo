#!/usr/bin/env python3
import shutil
import psutil

def check_disk_usage(disk):
    du = shutil.disk_usage(disk)
    free = du.free / du.total * 100
    return (free > 20)

def check_cpu_usage():
    usage = psutil.cpu_percent(1)
    return (usage < 75)

if check_disk_usage("/") == True and check_cpu_usage() == True:
    print("Ok! : [CPU] passed the test")
else:
    print("Error!")
    
# further more ref on automation
# https://xkcd.com/1205/