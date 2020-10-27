#include "../kernel/types.h"
#include "user.h"

int* init(){    //初始化数组
    int res[34];
    for(int i = 2;i <= 35;i++){
        res[i-2] = i;
    }
    return res;
}

void solve(){   //求解函数
    
}

int main(){
    int input[34] = init();

    exit();
}