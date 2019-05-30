import subprocess

# compile the bins first 👍
print("Starting both binaries, C & C++")
print("C 👇")
subprocess.call(["./doomrecey"])
print("C++ 👇")
subprocess.call(["./doomrecey++"])