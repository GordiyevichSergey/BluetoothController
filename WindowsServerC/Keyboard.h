#include <Windows.h>
#pragma once

DWORD sendScanCode(WORD scan, BOOL up);
DWORD sendVirtualKey(UINT vk, BOOL up);
void oneButtonClick(unsigned key);
void doubleButtonClick(unsigned key,unsigned key2);
void joystick(char* buffer);
void player(char* buffer);