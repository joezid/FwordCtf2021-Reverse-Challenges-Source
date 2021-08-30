from random import randrange
with open("Full_input.txt",'r') as f:
    x=f.read()
rand_ind_bit=[]
while True:
    ind=randrange(0,400)
    bit=randrange(0,8)
    data=[ind,bit]
    if data not in rand_ind_bit:
        rand_ind_bit.append(data)
    if len(rand_ind_bit)==3200:
        break
set_of_ist=""
for i in range(3200):
    bit_val=(ord(x[rand_ind_bit[i][0]]) >> rand_ind_bit[i][1])&1
    st_inst=("""jnz $ + 13
jz $ + 7
_emit 0xe9
mov cx,[edi+%d]
shr cx,%d
and cx,1
cmp cx,%d
jnz Wrong\n"""%(rand_ind_bit[i][0],rand_ind_bit[i][1],bit_val))
    set_of_ist+=st_inst
set_of_ist

with open("Instructions.txt",'w')as d:
    d.write(set_of_ist)

