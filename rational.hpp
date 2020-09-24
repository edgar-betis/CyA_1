#pragma once
#include <iostream>
#include <fstream>

class rational{
    private:

    int num_;
    int den_;

    public:

    rational();
    rational(int, int);
    ~rational(){};

    int get_num();
    int get_den();
    void set_num(int);
    void set_den(int);
    
    void read_rational();
    void write_rational(std::ofstream&);

    rational sum_rational(rational);
    rational res_rational(rational);
    rational mult_rational(rational);
    rational div_rational(rational);

    void reduce_rational();
    bool equal_rational(rational);    
    
};