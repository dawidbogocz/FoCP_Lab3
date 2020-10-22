#include <iostream>
#include <vector>
#include <array>

struct Matrix2D{
    std::vector<std::vector<int>> contents;

    void print(){
        std::cout<<"Contents of the matrix: "<<std::endl;

        for(int i=0; i<3; i++){
            for(int j=0; j<3; j++){
                std::cout<<contents[i][j]<<" ";
            }
            std::cout<<std::endl;
        }
    }
};

int main()
{
    Matrix2D a;
    Matrix2D b;

    a.contents = {{1,2,3},{4,5,6},{7,8,9}};
    b.contents = {{9,8,7},{6,5,4},{3,2,1}};

    a.print();
    b.print();

    return 0;
}
