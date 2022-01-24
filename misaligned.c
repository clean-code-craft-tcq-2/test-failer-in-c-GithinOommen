#include <stdio.h>
#include <assert.h>

int printColorMap() {
    int count[25];
   // char* data[50];
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
          
          count[i*5+j]= printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
          
           //printf("%d | %s | %s\n", i * 5 + j, majorColor[i], minorColor[i]);
       }
     
    }
    
    int compare;
    compare=count[0];
    for(i=0;i<25;++i)
    {
        assert(count[i]==compare);
    }
    return i * j;
}

int main() {
    int result = printColorMap();
//    assert(result == 25);
//    printf("All is well (maybe!)\n");
    return 0;
}
