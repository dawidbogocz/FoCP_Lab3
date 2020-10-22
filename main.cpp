#include <iostream>
#include <cstdlib>
#include <array>
#include <cmath>

struct Point2D{
    double x;
    double y;

    void print(){
        std::cout<<"("<<x<<", "<<y<<")"<<std::endl;
    }
};

Point2D create_point(){
    Point2D tmp;
    tmp.x=rand()%10;
    tmp.y=rand()%10;

    return tmp;
}

float distance(Point2D left, Point2D right){
    float res_x=pow((right.x-left.x),2);
    float res_y=pow((right.y-left.y),2);

    return sqrt(res_x+res_y);
}

float area_of_triangle(Point2D a, Point2D b, Point2D c){
    float product=a.x*(b.y-c.y)+b.x*(c.y-a.y)+c.x*(a.y-b.y);

    return abs(product/2);
}

int main()
{
    std::array<Point2D, 10> points;

    for(int i=0; i<10;i++){
        points[i]=create_point();
        std::cout<<"point["<<i<<"] = ("<<points[i].x<<", "<<points[i].y<<")"<<std::endl;
    }

    float largest_area=0.0;
    Point2D first, second, third;

    for(int i=0; i<10; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<10; k++){
                float area=area_of_triangle(points[i], points[j], points[k]);
                if(area>largest_area){
                    largest_area=area;
                    first=points[i];
                    second=points[j];
                    third=points[k];
                }
            }
        }
    }

    std::cout<< "The largest area is: "<<largest_area<<std::endl;
    std::cout<< "First point: ";
    first.print();

    std::cout<< "Second point: ";
    second.print();

    std::cout<< "Third point: ";
    third.print();

    return 0;
}
