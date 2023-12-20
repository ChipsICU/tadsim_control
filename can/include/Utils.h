#pragma once

#include "mk_can.h"



// 显示32位的数据   
void print32bin(int data);
// 显示8位数据
void print8bin(char data);

void CheckForError(char cmd[50], canStatus stat);

// 显示can通道列表
void ListChannels();