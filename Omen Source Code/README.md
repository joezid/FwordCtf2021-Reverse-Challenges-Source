# Omen

## Description:

![Image](https://github.com/joezid/FwordCtf2021-Reverse-Challenges-Source/blob/main/Omen%20Source%20Code/description.PNG?raw=true)


## Idea:

The challegne consist of two stages ,The first stage uses self injection to execute the secon stage ,The second stage is a pe but modified to work as a shellcode which mean we can execute it from the beginnig to avoid all the addtional stuff of IAT build,Mapping ...etc ,using this tool https://github.com/hasherezade/pe_to_shellcode

Small note if you dump the second stage directly it will work without the need of stepping through the stub.
The second stage contain the flag checking part, Every set of chars are encrypted together and compared to hardcoded values.
By extracting all the constrains we can use z3 to solve it and get the flag.

## Compilation Steps:

1. Generate all the randome checks using Assembly_Creator.py script .
2. Add them to Stage 2 input_check function.
3. Compile the first stage and use this tool to convert it to a shellcode using this tool https://github.com/hasherezade/pe_to_shellcode
4. Encrypt the generated shellcode using RC4 with the key 0x61
5. Change the data in enc array with the new encrypted data and compile the first stage.
6. Happy Reversing :D
