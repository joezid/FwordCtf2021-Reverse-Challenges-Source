# Saw


## Description:

![Image](https://github.com/joezid/FwordCtf2021-Reverse-Challenges-Source/blob/main/Saw%20Source%20Code/Description.PNG?raw=true)


## Idea:

First stage uses process hollowing to execute the second stage ,The first stage have two anti debug techniques BeingDebug byte from PEB and NtGlobalFlag 

https://anti-debug.checkpoint.com/techniques/debug-flags.html#manual-checks-peb-beingdebugged-flag

https://anti-debug.checkpoint.com/techniques/debug-flags.html#manual-checks-ntglobalflag

and contains an anti analysis technique to hide the flow by executing int3 which will raise EXCEPTION_EXECUTE_HANDLER  then will jump to the right flow

https://anti-debug.checkpoint.com/techniques/exceptions.html#hiding-cf-with-eh

After that you will move to the normal process hollowing functions you can read more about it in 

https://attack.mitre.org/techniques/T1055/012/

a small breakpoint in WriteProcessMemory is enough to extract the the second stage.
To run the second stage you have to fix the permissions of the sections.
Then you will find an anti analysis trick called Opaque Predicates

https://n1ght-w0lf.github.io/malware%20analysis/smokeloader/#opaque-predicates

And finally you will find the flag checking which is done by checking each bit of the flag.


## Compilation Steps:

1. Generate all the randome checks using Assembly_Generator.py script.
2. Add all the assembly instructions to input_check.
3. Compile the second stage.

## Stage 1 Code

Unfortunately i lost the code of the first stage ,Anyway the code of the first stage was quite intersting with dynamic api resolving and process hollowing.

