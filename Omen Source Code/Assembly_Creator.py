from random import randrange


def xor(x,y):
    return x^y

def add(x,y):
    return (x+y)%256

def sub(x,y):
    return (x-y)%256

def and_(x,y):
    return x&y

def or_(x,y):
    return x|y


instr=["xor","add","sub","and","or","xor","xor"]
funcs=[xor,add,sub,and_,or_,xor,xor]
flag="FWORDctf{Wh4t_4b0ut_th1s_w31rd_L0ng_fL4g_th4t_m4k3_n0_s3ns3_but_st1LL_w1LL_g1v3_y0u_s0m3_p01ntz}"
flag_int=[ord(i) for i in flag]
print(ror(5,1))
for i in range(len(flag)):
    ope=[randrange(0,7) for inst in range(6) ]
    rand_ind=[randrange(0,len(flag)) for inst in range(6) ]
    res= funcs[ope[3]](funcs[ope[2]](funcs[ope[1]](funcs[ope[0]](flag_int[i],flag_int[rand_ind[0]]),flag_int[rand_ind[1]]),flag_int[rand_ind[2]]),flag_int[rand_ind[3]])
    res= funcs[ope[5]](funcs[ope[4]](res,flag_int[rand_ind[4]]),flag_int[rand_ind[5]])
    st_inst=("""mov cl,[edi+%d]
%s cl,[edi+%d]
%s cl,[edi+%d]
%s cl,[edi+%d]
%s cl,[edi+%d]
%s cl,[edi+%d]
%s cl,[edi+%d]
cmp cl,%d
jnz Wrong"""%(i,instr[ope[0]],rand_ind[0],instr[ope[1]],rand_ind[1],instr[ope[2]],rand_ind[2],instr[ope[3]],rand_ind[3],instr[ope[4]],rand_ind[4],instr[ope[5]],rand_ind[5],res))
    print(st_inst)
