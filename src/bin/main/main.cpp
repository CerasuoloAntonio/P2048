#include <iostream>
#include <iomanip>

void draw(int a[4][4], int rows, int colums);

int main(){

    constexpr int rows = 4;
    constexpr int columns = 4;

    int tab [rows][columns] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    draw(tab,rows,columns);

    return 0;
}

void draw(int a[4][4], int rows, int colums){

    std::cout << std::setw(10) << std::setfill('-') << "" << std::endl;

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < colums; j++){
            std::cout << "| " << a[i][j];
        }
        std::cout << "|\n"<< std::setw(10) << std::setfill('-') << "" << std::endl;
    }

}