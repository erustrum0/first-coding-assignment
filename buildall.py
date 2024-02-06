#!/usr/bin/python3
import os

#files is an array of files in the directory
files = os.listdir(os.getcwd()+"/src")

#let's remove non-cpp files.
for i in range(len(files)):
    print(files[i])
    if files[i].split(".")[1] != "cpp":
        files.pop(i)
        print("Popped!")

#files now contains only the cpp sources.
#build these cpp programs, dump in builds folder.
for i in range(len(files)):
    os.system("g++ src/" + files[i] + " -o builds/" + files[i].split(".")[0] + ".bin")
    print("Ran: g++ src/" + files[i] + " -o builds/" + files[i].split(".")[0] + ".bin")