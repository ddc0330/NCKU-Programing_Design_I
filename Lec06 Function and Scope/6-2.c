#include<stdio.h>

int main() {
    int n;
    int a[1024];
    int nn;
    int aa[10000],bb[10000];
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }

    scanf("%d",&nn);

    for(int i=0;i<nn;i++){
        scanf("%d",&bb[i]);
        scanf("%d",&aa[i]);
    }
    int l[1000],m[1000],r[1000];
    for(int j =0;j<nn;j++){
        
        for(int i =0;i<n;i++){
            if (a[i]>=bb[j]&&a[i]<aa[j]){
                m[j] ++;
            }
            else if (a[i]<bb[j]){
                l[j] ++;
            }
            else if (a[i]>=aa[j]){
                r[j] ++;
            }
        }
    }
    for(int i =0;i<nn;i++){
        printf("%d ",l[i]);
        printf("%d ",m[i]);
        printf("%d ",r[i]);
        printf("\n");
    }
    return 0;
}
