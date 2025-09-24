#include "2.h"
#include <iostream>
#include <string>

int intToTurkish() {
    int x;
    std::cin >> x;
    if (x == 0) {
        std::cout <<"sıfır";
        return 0;
    }
    int y = x / 10;
    x = x % 10;
    if (y == 1) {
        std::cout <<"on";
    } else if (y == 2) {
        std::cout <<"yirmi";
    } else if (y == 3) {
        std::cout <<"otuz";
    } else if (y == 4) {
        std::cout <<"kırk";
    } else if (y == 5) {
        std::cout <<"elli";
    } else if (y == 6) {
        std::cout <<"altmış";
    } else if (y == 7) {
        std::cout <<"yetmiş";
    } else if (y == 8) {
        std::cout <<"seksen";
    } else if (y == 9) {
        std::cout <<"doksan";
    } 
    if (x!=0 && y!=0){
        std::cout <<" ";
    }

    if (x == 1) {
        std::cout <<"bir";
    } else if (x == 2) {
        std::cout <<"iki";
    } else if (x == 3) {
        std::cout <<"üç";
    } else if (x == 4) {
        std::cout <<"dört";
    } else if (x == 5) {
        std::cout <<"beş";
    } else if (x == 6) {
        std::cout <<"altı";
    } else if (x == 7) {
        std::cout <<"yedi";
    } else if (x == 8) {
        std::cout <<"sekiz";
    } else if (x == 9) {
        std::cout <<"dokuz";
    } 
    return 0;
}