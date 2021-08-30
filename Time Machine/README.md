# Time Machine


## Description:

![Image](https://github.com/joezid/FwordCtf2021-Reverse-Challenges-Source/blob/main/Time%20Machine/Description.PNG?raw=true)


## Idea:

A simple nanomite challenge you can check this video.
https://youtu.be/XEX_RNVHcgY

Each char of the input is hashed using SuperFastHash algorithim then comapre to some hardcoded hashes.
https://github.com/vxunderground/WinAPI-Tricks/blob/main/String%20Hashing/HashStringSuperFastHash/HashStringSuperFastHashA.c


## Compilation Steps:

1. Hash every byte of the flag using the SuperFastHash algorithim.
2. Run the assembly_generator.py script and assemble the generated instructions using https://defuse.ca/online-x86-assembler.htm
3. Add the opcode to the Debuggee function in data array.
4. Compile the file using `g++ Time_Machine.cpp -s -Wall -Wextra -Wno-format -o Time_Machine.exe`
