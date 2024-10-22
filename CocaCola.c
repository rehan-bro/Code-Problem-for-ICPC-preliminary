#include<stdio.h>
int main(){
    int mojo,get,brow = 0;
    while(scanf("%d",&mojo) == 1) {
        get = mojo;
        while(mojo >= 3) {
            mojo = mojo - 2;
            get += 1;
        }
        if(mojo == 2) {
            get += 1;
        }
        printf("%d\n", get);
    }
    return 0;
}
