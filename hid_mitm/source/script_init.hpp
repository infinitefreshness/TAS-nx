#pragma once
#include <cstring>
#include <cstdlib>
#include <cstdint>
#include <string>
#include <vector>
#include <fstream>
#include <iostream>
#include <iterator>
#include <cstddef>
#include <switch.h>

struct controlMsg
{
    // Joys between -32768 to 32767
    int frame;
    u64 keys;
    s32 joy_l_x;
    s32 joy_l_y;
    s32 joy_r_x;
    s32 joy_r_y;
};

void getScriptLines(std::string fileName, std::vector<struct controlMsg> &script);

void initScript();