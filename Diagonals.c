#include <stdio.h>
int main() {
    int t,n,k;
    scanf("%d",&t);
    while(t--){
        scanf("%d %d",&n,&k);
        int line = 0;
        int chip = 0;
        int now = n;

        while(chip<k && now>0){
            if(line % 2 == 0){
                chip += now;
            }
            else{
                chip += now-1;
            }
            line++;
            if(line % 2 == 0){
                now--;
            }
        }
        printf("%d\n",line);
    }
    return 0;
}
