#include <stdio.h>
typedef unsigned int       UINTPTR;
typedef unsigned char      UINT8;
typedef unsigned long PTE_T;
typedef unsigned long VADDR_T;
#define IS_ALIGNED(a, b)                 (!(((UINTPTR)(a)) & (((UINTPTR)(b)) - 1)))

typedef struct LOS_DL_LIST {
    struct LOS_DL_LIST *pstPrev; /**< Current node's pointer to the previous node */
    struct LOS_DL_LIST *pstNext; /**< Current node's pointer to the next node */
} LOS_DL_LIST;

//鸿蒙内核源码分析系列篇 https://blog.csdn.net/kuangyufei

void b(){
    UINT8 w[3]={0};
    PTE_T pte1BasePtr = 0x11100000;
    VADDR_T vaddr = 0x80738903;  

#define MMU_DESCRIPTOR_L1_SMALL_SIZE                            0x100000 //1M
#define MMU_DESCRIPTOR_L1_SMALL_MASK                            (MMU_DESCRIPTOR_L1_SMALL_SIZE - 1)
#define MMU_DESCRIPTOR_L1_SMALL_FRAME                           (~MMU_DESCRIPTOR_L1_SMALL_MASK)
#define MMU_DESCRIPTOR_L1_SMALL_SHIFT                           20
#define MMU_DESCRIPTOR_L1_SECTION_ADDR(x)                       ((x) & MMU_DESCRIPTOR_L1_SMALL_FRAME)
#define OS_TSK_HIGH_BITS       3U
#define OS_TSK_LOW_BITS        (32U - OS_TSK_HIGH_BITS) //29
#define OS_TSK_SORTLINK_LOGLEN OS_TSK_HIGH_BITS	//3U

    PTE_T  l1Entry = pte1BasePtr + vaddr >> MMU_DESCRIPTOR_L1_SMALL_SHIFT;
    printf("pte1BasePtr ad: %x\n",&pte1BasePtr);
    printf("w[1] ad: %x\n",&w[1]);
    printf("vaddr: %x\n",(MMU_DESCRIPTOR_L1_SMALL_SIZE >> 12));
    printf("l1Entry: %x\n",l1Entry);
    printf("MMU_DESCRIPTOR_L1_SMALL_MASK:%x\n",MMU_DESCRIPTOR_L1_SMALL_MASK);
    printf("MMU_DESCRIPTOR_L1_SMALL_FRAME:%x\n",MMU_DESCRIPTOR_L1_SMALL_FRAME);
    printf("pa: %x\n",MMU_DESCRIPTOR_L1_SECTION_ADDR(l1Entry) + (vaddr & (MMU_DESCRIPTOR_L1_SMALL_SIZE - 1)));
}

void a(){
    #define BITMAP_BITS_PER_WORD (sizeof(UINTPTR) * 8)
    #define BITMAP_NUM_WORDS(x) (((x) + BITMAP_BITS_PER_WORD - 1) / BITMAP_BITS_PER_WORD)
    printf("BITMAP_BITS_PER_WORD %d\n",BITMAP_BITS_PER_WORD);
    printf("BITMAP_NUM_WORDS %d\n",BITMAP_NUM_WORDS(1UL << 8));
}
void round1(){
    #define ROUNDUP(a, b)                    (((a) + ((b) - 1)) & ~((b) - 1))
    #define ROUNDDOWN(a, b)                  ((a) & ~((b) - 1))
    int a = 0xFF;
    printf("a>> %d\n",a>>3);
    printf("a/ %d\n",a/8);
    //printf("ROUNDUP %d\n",ROUNDUP(9, 2));
    //printf("ROUNDDOWN %d\n",ROUNDDOWN(9, 2));
}

int main()
{
    int size = 0;
    size = sizeof(LOS_DL_LIST) << OS_TSK_SORTLINK_LOGLEN;
    printf("LOS_DL_LIST %d\n",sizeof(LOS_DL_LIST *));
    printf("size %d\n",size);
    return 0;
}

