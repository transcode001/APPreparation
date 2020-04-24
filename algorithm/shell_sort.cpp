#include<iostream>

int MAX_SIZE = 11;
int DIV_NUM = 5;
int num[] = {8,7,6,32,5,4,3,2,1,9,20};

void show(){
    for(int a: num){
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
    int size = DIV_NUM;
    while(size != 0){
        std::cout << size << std::endl;
        for(int i = 0;i < MAX_SIZE;++i){
            int j = i;
            for(;j + size< MAX_SIZE;j+=size){
                if(num[i] > num[j+size]){
                    swap(&num[i],&num[i+size]);
                }
            }
        }
        show();
        size/= 2;
    }
}

int main(){
    sort();
    show();
    return 0;
}
