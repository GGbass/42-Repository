import os

folder = "C:/Users/User/Downloads"

for file in  os.listdir(folder):
    files_root = os.path.join(folder, file)
    if os.path.isfile(files_root):
        size = os.path.getsize(files_root) / 1024
        print(f'{file}: {size:.2f} KB')

