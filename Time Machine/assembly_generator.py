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

rol = lambda val, r_bits, max_bits=64: \
    (val << r_bits%max_bits) & (2**max_bits-1) | \
    ((val & (2**max_bits-1)) >> (max_bits-(r_bits%max_bits)))
 

ror = lambda val, r_bits, max_bits=64: \
    ((val & (2**max_bits-1)) >> r_bits%max_bits) | \
    (val << (max_bits-(r_bits%max_bits)) & (2**max_bits-1))

flag="FWORDctf{W3_4t_th3_t0p_4g41n_n0w_wh4t?}"
st_instr=""
flag_hashes=[0x0041dedf66,0x00d66e4562,0x00050ee3e2,0x0033af2d13,0x0084db9614,0x00f4c73ebf,0x006526c7c9,0x00052181b4,0x007f69c81e,0x00d66e4562,0x009d07d8da,0x007f111854,0x00cbba9c51,0x006526c7c9,0x007f111854,0x006526c7c9,0x0048543605,0x009d07d8da,0x007f111854,0x006526c7c9,0x00f2475372,0x00a013ceb3,0x007f111854,0x00cbba9c51,0x00199fb1a6,0x00cbba9c51,0x00ea1b9f56,0x00ce94c074,0x007f111854,0x00ce94c074,0x00f2475372,0x0054a8fb5d,0x007f111854,0x0054a8fb5d,0x0048543605,0x00cbba9c51,0x006526c7c9,0x006a766598,0x00abef6fef]
#print(hash_res)
for i in range(0,len(flag)):#change here
    lucky_num=randrange(0,10)
    for j in range(10):
        if j==lucky_num:
            st_instr+=("""mov r12b,[rcx+%d]
movabs r11,%d
xor r11,0x1337
ror r11,13
movabs r13,1
ud2
"""%(i,xor(rol(flag_hashes[i],13),0x1337)))
            #print(st_instr)
        else:
            st_instr+=("""mov r12b,[rcx+%d]
movabs r11,%d
xor r11,0x1337
ror r11,13
movabs r13,0
ud2
"""%(i,randrange(1000000000,9999999999)))


with open("instr.txt","w")as f:
    f.write(st_instr)
