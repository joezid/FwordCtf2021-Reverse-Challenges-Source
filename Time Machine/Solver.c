#include <stdio.h>
#include <stdint.h>

uint32_t hash(char *a1)
{
    uint32_t v2;
    uint32_t v3;
    uint32_t v4;
    uint32_t v5;
    uint32_t v6;
    uint32_t v7;
    uint32_t v8;
    uint32_t v9;
    uint32_t v10;
    uint32_t v11;
    uint32_t i;
    unsigned char* v13;
    v13 = a1;
    v4 = 1;
    v2 = v4 & 3;
    for (i = v4 >> 2; i > 0; --i)
    {
        v5 = (v13[1] << 8) + *v13 + v4;
        v3 = v5 ^ (((v13[3] << 8) + v13[2]) << 11);
        v13 += 4;
        v4 = (((v5 << 16) ^ v3) >> 11) + ((v5 << 16) ^ v3);
    }
    switch (v2)
    {
    case 2:
        v8 = (v13[1] << 8) + *v13 + v4;
        v4 = (((v8 << 11) ^ v8) >> 17) ^ (v8 << 11) ^ v8;
        break;
    case 3:
        v6 = (v13[1] << 8) + *v13 + v4;
        v7 = (v13[2] << 18) ^ (v6 << 16) ^ v6;
        v4 = (v7 >> 11) + v7;
        break;
    case 1:
        v9 = ((*v13 + v4) << 10) ^ (*v13 + v4);
        v4 = (v9 >> 1) + v9;
        break;
    }
    v10 = (((8 * v4) ^ v4) >> 5) + ((8 * v4) ^ v4);
    v11 = (((16 * v10) ^ v10) >> 17) + ((16 * v10) ^ v10);
    return (((v11 << 25) ^ v11) >> 6) + ((v11 << 25) ^ v11);
}

int main()
{
    uint32_t flag_hashes[] = { 0x0041dedf66,0x00d66e4562,0x00050ee3e2,0x0033af2d13,0x0084db9614,0x00f4c73ebf,0x006526c7c9,0x00052181b4,0x007f69c81e,0x00d66e4562,0x009d07d8da,0x007f111854,0x00cbba9c51,0x006526c7c9,0x007f111854,0x006526c7c9,0x0048543605,0x009d07d8da,0x007f111854,0x006526c7c9,0x00f2475372,0x00a013ceb3,0x007f111854,0x00cbba9c51,0x00199fb1a6,0x00cbba9c51,0x00ea1b9f56,0x00ce94c074,0x007f111854,0x00ce94c074,0x00f2475372,0x0054a8fb5d,0x007f111854,0x0054a8fb5d,0x0048543605,0x00cbba9c51,0x006526c7c9,0x006a766598,0x00abef6fef };
    char val[2] = { 0 };
    uint32_t all_hashes[256] = { 0 };
    for (int i = 0;i < 256; i++)
    {
        val[0] = i;
        all_hashes[i] = hash(val);
    }
    for (int i = 0;i < 39;i++)
    {
        for (int j = 0;j < 256;j++)
        {
            if (flag_hashes[i] == all_hashes[j])
            {
                printf("%c", j);
                break;
            }
        }
    }
    return 1;
}
