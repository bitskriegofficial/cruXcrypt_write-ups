#include <stdlib.h>
#include <signal.h>
#include <stdio.h>

//The binary made by this is for the participants
void mysig(int a) { 
    printf("cruXcrypt{SGEhIFlvdSB0aG91Z2h0IHRoaXMgd2FzIHRoZSBmbGFnLCBidXQgaXQgaXMgSSwgRGlvIQ==}\n"); 
    struct sigaction newhandler2;
    newhandler2.sa_handler = SIG_IGN;
    sigemptyset(&(newhandler2.sa_mask));
    newhandler2.sa_flags = 0;
    sigaction(SIGSEGV, &newhandler2, NULL);
            
}



void main(void) {
   struct sigaction info, newhandler;


   newhandler.sa_handler = &mysig;
   sigemptyset(&(newhandler.sa_mask));
   newhandler.sa_flags = 0;
   
   sigaction(SIGSEGV,&newhandler,NULL);

   char buff[15];
   printf("Enter Anything!:");
   gets(buff);
   printf("%d\n", rand());
   

   return;
}
