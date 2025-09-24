#include <gtest/gtest.h>
#include "2.h"       
#include <sstream>
#include <iostream>

void runTest(int input, const std::string& expected) {
    std::istringstream in(std::to_string(input));
    std::ostringstream out;

    std::streambuf* cinBackup = std::cin.rdbuf(in.rdbuf());
    std::streambuf* coutBackup = std::cout.rdbuf(out.rdbuf());

    intToTurkish(); 

    std::cin.rdbuf(cinBackup);
    std::cout.rdbuf(coutBackup);

    std::string result = out.str();
    if (!result.empty() && result.back() == '\n') result.pop_back(); 

    EXPECT_EQ(result, expected);
}

TEST(IntToStrTest, TurkishNumbers) {
    runTest(1,"bir");
    runTest(13,"on üç");
    runTest(27,"yirmi yedi");
    runTest(38,"otuz sekiz");
    runTest(40,"kırk");
    runTest(77,"yetmiş yedi");
    runTest(94,"doksan dört");
}


