#include <iostream>
#include <array>

int main()
{
    std::array<int,8> numbers={6,5,3,1,8,7,2,4};
    for(int j=8;j>0;j--){
        for(int i=0; i<8; i++){
            if(numbers[i]>numbers[i+1]){
                int left=numbers[i];
                numbers[i]=numbers[i+1];
                numbers[i+1]=left;
            }
        }
    }

    for(int i=0; i<8; i++){
        std::cout<<numbers[i]<<','<<std::endl;
    }

    return 0;
}
