#include "rational.hpp"

rational::rational(){

    num_ = 0;
    den_ = 1;

}


rational::rational(int num, int den){

    assert(den != 0);
    num_ = num;
    den_ = den;

}


int rational::get_num(){

    return num_;

}


int rational::get_den(){

    return den_;

}


void rational::set_num(int num){

    num_ = num;

}


void rational::set_den(int den){

    den_ = den;
    
}


void rational::read_rational(){

    std::cout << "Numerador: ";
    std::cin >> num_;
    std::cout << "Denominador: ";
    std::cin >> den_;
    assert(den_ != 0);

}


void rational::write_rational(std::ofstream& file){

    file << num_ << "/" << den_ << std::endl;

}


rational rational::sum_rational(rational b){

    rational result;
    result.set_num((num_ * b.get_den()) + (b.get_num() * den_));
    result.set_den(den_ * b.get_den());

    return result;

}


rational rational::res_rational(rational b){

    rational result;
    result.set_num((num_ * b.get_den()) - (b.get_num() * den_));
    result.set_den(den_ * b.get_den());

    return result;

}

rational rational::mult_rational(rational b){

    rational result;
    result.set_num(num_ * b.get_num());
    result.set_den(den_ * b.get_den());

    return result;

}

rational rational::div_rational(rational b){

    rational result;
    result.set_num(num_ * b.get_den());
    result.set_den(den_ * b.get_num());

    return result;

}


void rational::reduce_rational(){

    int a, b, res;
    if(num_ >= den_){
        a = num_;
        b = den_;
    }else{
        b = num_;
        a = den_;
    }

    while(b != 0){
        res = b;
        b = a % b;
        a = res;
    }

    num_ = num_ / res;
    den_ = den_ / res;

}


bool rational::equal_rational(rational b){
    if((num_ / den_) == (b.get_num() / b.get_den())){
        return true;
    }else{
        return false;
    }
}
