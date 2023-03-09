import shutil
import psutil

# duplicate the linux du function
du = shutil.disk_usage("/")
print(du)

print(du.free/du.total)
print((du.free/du.total) * 100)

for i in range(10000):
    print(psutil.cpu_percent(0.1))


