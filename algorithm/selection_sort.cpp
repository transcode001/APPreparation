#include<iostream>

int ARRAY_SIZE = 8;

int ary[] = {8,7,6,5,4,3,2,1};
//整列済みの配列番号
int iter = 0;

//次の配列番号
int next = 1;

int minimum(){
    int min_iter = ARRAY_SIZE;
    for(int i = iter+1;i<ARRAY_SIZE;++i){
        if(ary[i]<ary[i-1]) min_iter = i;
    }

    return min_iter;
}

void show(){
    printf("sorted array iterator:%d \n",iter);
    for(int a:ary){
        printf("%d ",a);
    }
    printf("\n");
}

void swap(int *a,int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void sort(){
    int min;
    
    while(1){
        show();
        
        min = minimum();
        
        if(min >= ARRAY_SIZE) break;
        
        swap(&ary[iter],&ary[min]);

        //配列の先頭を整列済みとする
        ++iter;
    }
}

int main(){

    sort();
    
    return 0;
}