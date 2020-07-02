#pragma once

#define MAX_KEYBAORD 256

#ifndef DIDFT_OPTIONAL
#define DIDFT_OPTIONAL 0x80000000
#endif

struct DIKEYSTRUCT {
	DWORD No;
	char *Name;
	DWORD Value;
};

constexpr DIKEYSTRUCT DIKEY[] = {
{ 0, "DIK_ESCAPE", 0x01 },
{ 1, "DIK_1", 0x02 },
{ 2, "DIK_2", 0x03 },
{ 3, "DIK_3", 0x04 },
{ 4, "DIK_4", 0x05 },
{ 5, "DIK_5", 0x06 },
{ 6, "DIK_6", 0x07 },
{ 7, "DIK_7", 0x08 },
{ 8, "DIK_8", 0x09 },
{ 9, "DIK_9", 0x0A },
{ 10, "DIK_0", 0x0B },
{ 11, "DIK_MINUS", 0x0C },
{ 12, "DIK_EQUALS", 0x0D },
{ 13, "DIK_BACK", 0x0E },
{ 14, "DIK_TAB", 0x0F },
{ 15, "DIK_Q", 0x10 },
{ 16, "DIK_W", 0x11 },
{ 17, "DIK_E", 0x12 },
{ 18, "DIK_R", 0x13 },
{ 19, "DIK_T", 0x14 },
{ 20, "DIK_Y", 0x15 },
{ 21, "DIK_U", 0x16 },
{ 22, "DIK_I", 0x17 },
{ 23, "DIK_O", 0x18 },
{ 24, "DIK_P", 0x19 },
{ 25, "DIK_LBRACKET", 0x1A },
{ 26, "DIK_RBRACKET", 0x1B },
{ 27, "DIK_RETURN", 0x1C },
{ 28, "DIK_LCONTROL", 0x1D },
{ 29, "DIK_A", 0x1E },
{ 30, "DIK_S", 0x1F },
{ 31, "DIK_D", 0x20 },
{ 32, "DIK_F", 0x21 },
{ 33, "DIK_G", 0x22 },
{ 34, "DIK_H", 0x23 },
{ 35, "DIK_J", 0x24 },
{ 36, "DIK_K", 0x25 },
{ 37, "DIK_L", 0x26 },
{ 38, "DIK_SEMICOLON", 0x27 },
{ 39, "DIK_APOSTROPHE", 0x28 },
{ 40, "DIK_GRAVE", 0x29 },
{ 41, "DIK_LSHIFT", 0x2A },
{ 42, "DIK_BACKSLASH", 0x2B },
{ 43, "DIK_Z", 0x2C },
{ 44, "DIK_X", 0x2D },
{ 45, "DIK_C", 0x2E },
{ 46, "DIK_V", 0x2F },
{ 47, "DIK_B", 0x30 },
{ 48, "DIK_N", 0x31 },
{ 49, "DIK_M", 0x32 },
{ 50, "DIK_COMMA", 0x33 },
{ 51, "DIK_PERIOD", 0x34 },
{ 52, "DIK_SLASH", 0x35 },
{ 53, "DIK_RSHIFT", 0x36 },
{ 54, "DIK_MULTIPLY", 0x37 },
{ 55, "DIK_LMENU", 0x38 },
{ 56, "DIK_SPACE", 0x39 },
{ 57, "DIK_CAPITAL", 0x3A },
{ 58, "DIK_F1", 0x3B },
{ 59, "DIK_F2", 0x3C },
{ 60, "DIK_F3", 0x3D },
{ 61, "DIK_F4", 0x3E },
{ 62, "DIK_F5", 0x3F },
{ 63, "DIK_F6", 0x40 },
{ 64, "DIK_F7", 0x41 },
{ 65, "DIK_F8", 0x42 },
{ 66, "DIK_F9", 0x43 },
{ 67, "DIK_F10", 0x44 },
{ 68, "DIK_NUMLOCK", 0x45 },
{ 69, "DIK_SCROLL", 0x46 },
{ 70, "DIK_NUMPAD7", 0x47 },
{ 71, "DIK_NUMPAD8", 0x48 },
{ 72, "DIK_NUMPAD9", 0x49 },
{ 73, "DIK_SUBTRACT", 0x4A },
{ 74, "DIK_NUMPAD4", 0x4B },
{ 75, "DIK_NUMPAD5", 0x4C },
{ 76, "DIK_NUMPAD6", 0x4D },
{ 77, "DIK_ADD", 0x4E },
{ 78, "DIK_NUMPAD1", 0x4F },
{ 79, "DIK_NUMPAD2", 0x50 },
{ 80, "DIK_NUMPAD3", 0x51 },
{ 81, "DIK_NUMPAD0", 0x52 },
{ 82, "DIK_DECIMAL", 0x53 },
{ 83, "DIK_OEM_102", 0x56 },
{ 84, "DIK_F11", 0x57 },
{ 85, "DIK_F12", 0x58 },
{ 86, "DIK_F13", 0x64 },
{ 87, "DIK_F14", 0x65 },
{ 88, "DIK_F15", 0x66 },
{ 89, "DIK_KANA", 0x70 },
{ 90, "DIK_ABNT_C1", 0x73 },
{ 91, "DIK_CONVERT", 0x79 },
{ 92, "DIK_NOCONVERT", 0x7B },
{ 93, "DIK_YEN", 0x7D },
{ 94, "DIK_ABNT_C2", 0x7E },
{ 95, "DIK_NUMPADEQUALS", 0x8D },
{ 96, "DIK_PREVTRACK", 0x90 },
{ 97, "DIK_AT", 0x91 },
{ 98, "DIK_COLON", 0x92 },
{ 99, "DIK_UNDERLINE", 0x93 },
{ 100, "DIK_KANJI", 0x94 },
{ 101, "DIK_STOP", 0x95 },
{ 102, "DIK_AX", 0x96 },
{ 103, "DIK_UNLABELED", 0x97 },
{ 104, "DIK_NEXTTRACK", 0x99 },
{ 105, "DIK_NUMPADENTER", 0x9C },
{ 106, "DIK_RCONTROL", 0x9D },
{ 107, "DIK_MUTE", 0xA0 },
{ 108, "DIK_CALCULATOR", 0xA1 },
{ 109, "DIK_PLAYPAUSE", 0xA2 },
{ 110, "DIK_MEDIASTOP", 0xA4 },
{ 111, "DIK_VOLUMEDOWN", 0xAE },
{ 112, "DIK_VOLUMEUP", 0xB0 },
{ 113, "DIK_WEBHOME", 0xB2 },
{ 114, "DIK_NUMPADCOMMA", 0xB3 },
{ 115, "DIK_DIVIDE", 0xB5 },
{ 116, "DIK_SYSRQ", 0xB7 },
{ 117, "DIK_RMENU", 0xB8 },
{ 118, "DIK_PAUSE", 0xC5 },
{ 119, "DIK_HOME", 0xC7 },
{ 120, "DIK_UP", 0xC8 },
{ 121, "DIK_PRIOR", 0xC9 },
{ 122, "DIK_LEFT", 0xCB },
{ 123, "DIK_RIGHT", 0xCD },
{ 124, "DIK_END", 0xCF },
{ 125, "DIK_DOWN", 0xD0 },
{ 126, "DIK_NEXT", 0xD1 },
{ 127, "DIK_INSERT", 0xD2 },
{ 128, "DIK_DELETE", 0xD3 },
{ 129, "DIK_LWIN", 0xDB },
{ 130, "DIK_RWIN", 0xDC },
{ 131, "DIK_APPS", 0xDD },
{ 132, "DIK_POWER", 0xDE },
{ 133, "DIK_SLEEP", 0xDF },
{ 134, "DIK_WAKE", 0xE3 },
{ 135, "DIK_WEBSEARCH", 0xE5 },
{ 136, "DIK_WEBFAVORITES", 0xE6 },
{ 137, "DIK_WEBREFRESH", 0xE7 },
{ 138, "DIK_WEBSTOP", 0xE8 },
{ 139, "DIK_WEBFORWARD", 0xE9 },
{ 140, "DIK_WEBBACK", 0xEA },
{ 141, "DIK_MYCOMPUTER", 0xEB },
{ 142, "DIK_MAIL", 0xEC },
{ 143, "DIK_MEDIASELECT", 0xED }
};

constexpr DIOBJECTDATAFORMAT dfDIKeyboard[] = {
  { &GUID_Key, 0, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(0), 0 },
  { &GUID_Key, 1, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(1), 0 },
  { &GUID_Key, 2, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(2), 0 },
  { &GUID_Key, 3, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(3), 0 },
  { &GUID_Key, 4, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(4), 0 },
  { &GUID_Key, 5, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(5), 0 },
  { &GUID_Key, 6, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(6), 0 },
  { &GUID_Key, 7, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(7), 0 },
  { &GUID_Key, 8, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(8), 0 },
  { &GUID_Key, 9, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(9), 0 },
  { &GUID_Key, 10, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(10), 0 },
  { &GUID_Key, 11, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(11), 0 },
  { &GUID_Key, 12, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(12), 0 },
  { &GUID_Key, 13, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(13), 0 },
  { &GUID_Key, 14, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(14), 0 },
  { &GUID_Key, 15, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(15), 0 },
  { &GUID_Key, 16, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(16), 0 },
  { &GUID_Key, 17, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(17), 0 },
  { &GUID_Key, 18, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(18), 0 },
  { &GUID_Key, 19, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(19), 0 },
  { &GUID_Key, 20, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(20), 0 },
  { &GUID_Key, 21, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(21), 0 },
  { &GUID_Key, 22, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(22), 0 },
  { &GUID_Key, 23, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(23), 0 },
  { &GUID_Key, 24, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(24), 0 },
  { &GUID_Key, 25, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(25), 0 },
  { &GUID_Key, 26, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(26), 0 },
  { &GUID_Key, 27, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(27), 0 },
  { &GUID_Key, 28, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(28), 0 },
  { &GUID_Key, 29, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(29), 0 },
  { &GUID_Key, 30, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(30), 0 },
  { &GUID_Key, 31, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(31), 0 },
  { &GUID_Key, 32, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(32), 0 },
  { &GUID_Key, 33, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(33), 0 },
  { &GUID_Key, 34, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(34), 0 },
  { &GUID_Key, 35, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(35), 0 },
  { &GUID_Key, 36, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(36), 0 },
  { &GUID_Key, 37, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(37), 0 },
  { &GUID_Key, 38, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(38), 0 },
  { &GUID_Key, 39, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(39), 0 },
  { &GUID_Key, 40, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(40), 0 },
  { &GUID_Key, 41, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(41), 0 },
  { &GUID_Key, 42, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(42), 0 },
  { &GUID_Key, 43, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(43), 0 },
  { &GUID_Key, 44, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(44), 0 },
  { &GUID_Key, 45, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(45), 0 },
  { &GUID_Key, 46, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(46), 0 },
  { &GUID_Key, 47, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(47), 0 },
  { &GUID_Key, 48, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(48), 0 },
  { &GUID_Key, 49, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(49), 0 },
  { &GUID_Key, 50, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(50), 0 },
  { &GUID_Key, 51, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(51), 0 },
  { &GUID_Key, 52, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(52), 0 },
  { &GUID_Key, 53, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(53), 0 },
  { &GUID_Key, 54, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(54), 0 },
  { &GUID_Key, 55, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(55), 0 },
  { &GUID_Key, 56, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(56), 0 },
  { &GUID_Key, 57, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(57), 0 },
  { &GUID_Key, 58, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(58), 0 },
  { &GUID_Key, 59, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(59), 0 },
  { &GUID_Key, 60, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(60), 0 },
  { &GUID_Key, 61, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(61), 0 },
  { &GUID_Key, 62, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(62), 0 },
  { &GUID_Key, 63, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(63), 0 },
  { &GUID_Key, 64, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(64), 0 },
  { &GUID_Key, 65, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(65), 0 },
  { &GUID_Key, 66, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(66), 0 },
  { &GUID_Key, 67, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(67), 0 },
  { &GUID_Key, 68, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(68), 0 },
  { &GUID_Key, 69, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(69), 0 },
  { &GUID_Key, 70, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(70), 0 },
  { &GUID_Key, 71, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(71), 0 },
  { &GUID_Key, 72, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(72), 0 },
  { &GUID_Key, 73, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(73), 0 },
  { &GUID_Key, 74, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(74), 0 },
  { &GUID_Key, 75, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(75), 0 },
  { &GUID_Key, 76, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(76), 0 },
  { &GUID_Key, 77, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(77), 0 },
  { &GUID_Key, 78, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(78), 0 },
  { &GUID_Key, 79, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(79), 0 },
  { &GUID_Key, 80, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(80), 0 },
  { &GUID_Key, 81, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(81), 0 },
  { &GUID_Key, 82, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(82), 0 },
  { &GUID_Key, 83, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(83), 0 },
  { &GUID_Key, 84, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(84), 0 },
  { &GUID_Key, 85, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(85), 0 },
  { &GUID_Key, 86, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(86), 0 },
  { &GUID_Key, 87, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(87), 0 },
  { &GUID_Key, 88, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(88), 0 },
  { &GUID_Key, 89, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(89), 0 },
  { &GUID_Key, 90, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(90), 0 },
  { &GUID_Key, 91, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(91), 0 },
  { &GUID_Key, 92, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(92), 0 },
  { &GUID_Key, 93, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(93), 0 },
  { &GUID_Key, 94, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(94), 0 },
  { &GUID_Key, 95, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(95), 0 },
  { &GUID_Key, 96, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(96), 0 },
  { &GUID_Key, 97, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(97), 0 },
  { &GUID_Key, 98, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(98), 0 },
  { &GUID_Key, 99, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(99), 0 },
  { &GUID_Key, 100, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(100), 0 },
  { &GUID_Key, 101, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(101), 0 },
  { &GUID_Key, 102, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(102), 0 },
  { &GUID_Key, 103, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(103), 0 },
  { &GUID_Key, 104, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(104), 0 },
  { &GUID_Key, 105, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(105), 0 },
  { &GUID_Key, 106, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(106), 0 },
  { &GUID_Key, 107, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(107), 0 },
  { &GUID_Key, 108, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(108), 0 },
  { &GUID_Key, 109, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(109), 0 },
  { &GUID_Key, 110, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(110), 0 },
  { &GUID_Key, 111, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(111), 0 },
  { &GUID_Key, 112, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(112), 0 },
  { &GUID_Key, 113, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(113), 0 },
  { &GUID_Key, 114, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(114), 0 },
  { &GUID_Key, 115, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(115), 0 },
  { &GUID_Key, 116, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(116), 0 },
  { &GUID_Key, 117, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(117), 0 },
  { &GUID_Key, 118, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(118), 0 },
  { &GUID_Key, 119, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(119), 0 },
  { &GUID_Key, 120, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(120), 0 },
  { &GUID_Key, 121, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(121), 0 },
  { &GUID_Key, 122, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(122), 0 },
  { &GUID_Key, 123, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(123), 0 },
  { &GUID_Key, 124, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(124), 0 },
  { &GUID_Key, 125, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(125), 0 },
  { &GUID_Key, 126, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(126), 0 },
  { &GUID_Key, 127, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(127), 0 },
  { &GUID_Key, 128, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(128), 0 },
  { &GUID_Key, 129, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(129), 0 },
  { &GUID_Key, 130, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(130), 0 },
  { &GUID_Key, 131, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(131), 0 },
  { &GUID_Key, 132, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(132), 0 },
  { &GUID_Key, 133, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(133), 0 },
  { &GUID_Key, 134, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(134), 0 },
  { &GUID_Key, 135, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(135), 0 },
  { &GUID_Key, 136, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(136), 0 },
  { &GUID_Key, 137, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(137), 0 },
  { &GUID_Key, 138, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(138), 0 },
  { &GUID_Key, 139, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(139), 0 },
  { &GUID_Key, 140, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(140), 0 },
  { &GUID_Key, 141, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(141), 0 },
  { &GUID_Key, 142, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(142), 0 },
  { &GUID_Key, 143, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(143), 0 },
  { &GUID_Key, 144, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(144), 0 },
  { &GUID_Key, 145, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(145), 0 },
  { &GUID_Key, 146, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(146), 0 },
  { &GUID_Key, 147, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(147), 0 },
  { &GUID_Key, 148, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(148), 0 },
  { &GUID_Key, 149, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(149), 0 },
  { &GUID_Key, 150, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(150), 0 },
  { &GUID_Key, 151, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(151), 0 },
  { &GUID_Key, 152, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(152), 0 },
  { &GUID_Key, 153, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(153), 0 },
  { &GUID_Key, 154, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(154), 0 },
  { &GUID_Key, 155, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(155), 0 },
  { &GUID_Key, 156, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(156), 0 },
  { &GUID_Key, 157, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(157), 0 },
  { &GUID_Key, 158, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(158), 0 },
  { &GUID_Key, 159, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(159), 0 },
  { &GUID_Key, 160, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(160), 0 },
  { &GUID_Key, 161, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(161), 0 },
  { &GUID_Key, 162, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(162), 0 },
  { &GUID_Key, 163, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(163), 0 },
  { &GUID_Key, 164, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(164), 0 },
  { &GUID_Key, 165, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(165), 0 },
  { &GUID_Key, 166, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(166), 0 },
  { &GUID_Key, 167, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(167), 0 },
  { &GUID_Key, 168, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(168), 0 },
  { &GUID_Key, 169, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(169), 0 },
  { &GUID_Key, 170, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(170), 0 },
  { &GUID_Key, 171, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(171), 0 },
  { &GUID_Key, 172, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(172), 0 },
  { &GUID_Key, 173, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(173), 0 },
  { &GUID_Key, 174, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(174), 0 },
  { &GUID_Key, 175, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(175), 0 },
  { &GUID_Key, 176, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(176), 0 },
  { &GUID_Key, 177, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(177), 0 },
  { &GUID_Key, 178, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(178), 0 },
  { &GUID_Key, 179, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(179), 0 },
  { &GUID_Key, 180, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(180), 0 },
  { &GUID_Key, 181, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(181), 0 },
  { &GUID_Key, 182, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(182), 0 },
  { &GUID_Key, 183, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(183), 0 },
  { &GUID_Key, 184, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(184), 0 },
  { &GUID_Key, 185, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(185), 0 },
  { &GUID_Key, 186, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(186), 0 },
  { &GUID_Key, 187, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(187), 0 },
  { &GUID_Key, 188, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(188), 0 },
  { &GUID_Key, 189, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(189), 0 },
  { &GUID_Key, 190, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(190), 0 },
  { &GUID_Key, 191, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(191), 0 },
  { &GUID_Key, 192, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(192), 0 },
  { &GUID_Key, 193, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(193), 0 },
  { &GUID_Key, 194, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(194), 0 },
  { &GUID_Key, 195, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(195), 0 },
  { &GUID_Key, 196, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(196), 0 },
  { &GUID_Key, 197, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(197), 0 },
  { &GUID_Key, 198, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(198), 0 },
  { &GUID_Key, 199, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(199), 0 },
  { &GUID_Key, 200, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(200), 0 },
  { &GUID_Key, 201, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(201), 0 },
  { &GUID_Key, 202, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(202), 0 },
  { &GUID_Key, 203, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(203), 0 },
  { &GUID_Key, 204, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(204), 0 },
  { &GUID_Key, 205, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(205), 0 },
  { &GUID_Key, 206, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(206), 0 },
  { &GUID_Key, 207, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(207), 0 },
  { &GUID_Key, 208, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(208), 0 },
  { &GUID_Key, 209, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(209), 0 },
  { &GUID_Key, 210, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(210), 0 },
  { &GUID_Key, 211, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(211), 0 },
  { &GUID_Key, 212, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(212), 0 },
  { &GUID_Key, 213, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(213), 0 },
  { &GUID_Key, 214, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(214), 0 },
  { &GUID_Key, 215, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(215), 0 },
  { &GUID_Key, 216, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(216), 0 },
  { &GUID_Key, 217, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(217), 0 },
  { &GUID_Key, 218, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(218), 0 },
  { &GUID_Key, 219, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(219), 0 },
  { &GUID_Key, 220, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(220), 0 },
  { &GUID_Key, 221, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(221), 0 },
  { &GUID_Key, 222, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(222), 0 },
  { &GUID_Key, 223, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(223), 0 },
  { &GUID_Key, 224, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(224), 0 },
  { &GUID_Key, 225, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(225), 0 },
  { &GUID_Key, 226, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(226), 0 },
  { &GUID_Key, 227, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(227), 0 },
  { &GUID_Key, 228, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(228), 0 },
  { &GUID_Key, 229, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(229), 0 },
  { &GUID_Key, 230, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(230), 0 },
  { &GUID_Key, 231, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(231), 0 },
  { &GUID_Key, 232, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(232), 0 },
  { &GUID_Key, 233, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(233), 0 },
  { &GUID_Key, 234, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(234), 0 },
  { &GUID_Key, 235, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(235), 0 },
  { &GUID_Key, 236, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(236), 0 },
  { &GUID_Key, 237, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(237), 0 },
  { &GUID_Key, 238, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(238), 0 },
  { &GUID_Key, 239, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(239), 0 },
  { &GUID_Key, 240, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(240), 0 },
  { &GUID_Key, 241, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(241), 0 },
  { &GUID_Key, 242, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(242), 0 },
  { &GUID_Key, 243, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(243), 0 },
  { &GUID_Key, 244, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(244), 0 },
  { &GUID_Key, 245, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(245), 0 },
  { &GUID_Key, 246, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(246), 0 },
  { &GUID_Key, 247, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(247), 0 },
  { &GUID_Key, 248, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(248), 0 },
  { &GUID_Key, 249, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(249), 0 },
  { &GUID_Key, 250, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(250), 0 },
  { &GUID_Key, 251, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(251), 0 },
  { &GUID_Key, 252, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(252), 0 },
  { &GUID_Key, 253, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(253), 0 },
  { &GUID_Key, 254, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(254), 0 },
  { &GUID_Key, 255, DIDFT_OPTIONAL | DIDFT_BUTTON | DIDFT_MAKEINSTANCE(255), 0 }
};
