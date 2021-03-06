
//Event types definitions:
#define HIS_KEY_GRAVE 0
#define HIS_KEY_ESC 1
#define HIS_KEY_1 2
#define HIS_KEY_2 3
#define HIS_KEY_3 4
#define HIS_KEY_4 5
#define HIS_KEY_5 6
#define HIS_KEY_6 7
#define HIS_KEY_7 8
#define HIS_KEY_8 9
#define HIS_KEY_9 10
#define HIS_KEY_0 11
#define HIS_KEY_MINUS 12
#define HIS_KEY_EQUAL 13
#define HIS_KEY_BACKSPACE 14
#define HIS_KEY_TAB 15
#define HIS_KEY_Q 16
#define HIS_KEY_W 17
#define HIS_KEY_E 18
#define HIS_KEY_R 19
#define HIS_KEY_T 20
#define HIS_KEY_Y 21
#define HIS_KEY_U 22
#define HIS_KEY_I 23
#define HIS_KEY_O 24
#define HIS_KEY_P 25
#define HIS_KEY_LEFTBRACE 26
#define HIS_KEY_RIGHTBRACE 27
#define HIS_KEY_BACKSLASH 28
#define HIS_KEY_CAPSLOCK 29
#define HIS_KEY_A 30
#define HIS_KEY_S 31
#define HIS_KEY_D 32
#define HIS_KEY_F 33
#define HIS_KEY_G 34
#define HIS_KEY_H 35
#define HIS_KEY_J 36
#define HIS_KEY_K 37
#define HIS_KEY_L 38
#define HIS_KEY_SEMICOLON 39
#define HIS_KEY_APOSTROPHE 40
#define HIS_KEY_ENTER 41
#define HIS_KEY_LEFTSHIFT 42
#define HIS_KEY_Z 43
#define HIS_KEY_X 44
#define HIS_KEY_C 45
#define HIS_KEY_V 46
#define HIS_KEY_B 47
#define HIS_KEY_N 48
#define HIS_KEY_M 49
#define HIS_KEY_COMMA 50
#define HIS_KEY_DOT 51
#define HIS_KEY_SLASH 52
#define HIS_KEY_RIGHTSHIFT 53
#define HIS_KEY_LEFTCTRL 54
#define HIS_KEY_LEFTMETA 55
#define HIS_KEY_LEFTALT 56
#define HIS_KEY_SPACE 57
#define HIS_KEY_RIGHTALT 58
#define HIS_KEY_RIGHTCTRL 59
#define HIS_KEY_UP 60
#define HIS_KEY_DOWN 61
#define HIS_KEY_LEFT 62
#define HIS_KEY_RIGHT 63
#define HIS_KEY_PAGEUP 64
#define HIS_KEY_PAGEDOWN 65
#define HIS_KEY_F1 66
#define HIS_KEY_F2 67
#define HIS_KEY_F3 68
#define HIS_KEY_F4 69
#define HIS_KEY_F5 70
#define HIS_KEY_F6 71
#define HIS_KEY_F7 72
#define HIS_KEY_F8 73
#define HIS_KEY_F9 74
#define HIS_KEY_F10 75
#define HIS_KEY_F11 76
#define HIS_KEY_F12 77
#define HIS_KEY_HOME 78
#define HIS_KEY_END 79
#define HIS_KEY_INSERT 80
#define HIS_KEY_DELETE 81
#define HIS_KEY_SYSRQ 82
#define HIS_KEY_PRINTSCRN HIS_KEY_SYSRQ
#define HIS_KEY_KP1 83
#define HIS_KEY_KP2 84
#define HIS_KEY_KP3 85
#define HIS_KEY_KP4 86
#define HIS_KEY_KP5 87
#define HIS_KEY_KP6 88
#define HIS_KEY_KP7 89
#define HIS_KEY_KP8 90
#define HIS_KEY_KP9 91
#define HIS_KEY_KP0 92
#define HIS_KEY_VOLUMEUP 93
#define HIS_KEY_VOLUMEDOWN 94
#define HIS_KEY_MUTE 95
#define HIS_KEY_PLAYPAUSE 96
#define HIS_KEY_PREVIOUSSONG 97
#define HIS_KEY_NEXTSONG 98

#define HIS_KEYMAP_SIZE 0x63

static unsigned char hisKeycode[HIS_KEYMAP_SIZE] = {
	[HIS_KEY_GRAVE] = KEY_GRAVE,
	[HIS_KEY_ESC] = KEY_ESC,
	[HIS_KEY_1] = KEY_1,
	[HIS_KEY_2] = KEY_2,
	[HIS_KEY_3] = KEY_3,
	[HIS_KEY_4] = KEY_4,
	[HIS_KEY_5] = KEY_5,
	[HIS_KEY_6] = KEY_6,
	[HIS_KEY_7] = KEY_7,
	[HIS_KEY_8] = KEY_8,
	[HIS_KEY_9] = KEY_9,
	[HIS_KEY_0] = KEY_0,
	[HIS_KEY_MINUS] = KEY_MINUS,
	[HIS_KEY_EQUAL] = KEY_EQUAL,
	[HIS_KEY_BACKSPACE] = KEY_BACKSPACE,
	[HIS_KEY_TAB] = KEY_TAB,
	[HIS_KEY_Q] = KEY_Q,
	[HIS_KEY_W] = KEY_W,
	[HIS_KEY_E] = KEY_E,
	[HIS_KEY_R] = KEY_R,
	[HIS_KEY_T] = KEY_T,
	[HIS_KEY_Y] = KEY_Y,
	[HIS_KEY_U] = KEY_U,
	[HIS_KEY_I] = KEY_I,
	[HIS_KEY_O] = KEY_O,
	[HIS_KEY_P] = KEY_P,
	[HIS_KEY_Q] = KEY_Q,
	[HIS_KEY_W] = KEY_W,
	[HIS_KEY_E] = KEY_E,
	[HIS_KEY_R] = KEY_R,
	[HIS_KEY_T] = KEY_T,
	[HIS_KEY_Y] = KEY_Y,
	[HIS_KEY_U] = KEY_U,
	[HIS_KEY_I] = KEY_I,
	[HIS_KEY_O] = KEY_O,
	[HIS_KEY_P] = KEY_P,
	[HIS_KEY_LEFTBRACE] = KEY_LEFTBRACE,
	[HIS_KEY_RIGHTBRACE] = KEY_RIGHTBRACE,
	[HIS_KEY_BACKSLASH] = KEY_BACKSLASH,
	[HIS_KEY_CAPSLOCK] = KEY_CAPSLOCK,
	[HIS_KEY_A] = KEY_A,
	[HIS_KEY_S] = KEY_S,
	[HIS_KEY_D] = KEY_D,
	[HIS_KEY_F] = KEY_F,
	[HIS_KEY_G] = KEY_G,
	[HIS_KEY_H] = KEY_H,
	[HIS_KEY_J] = KEY_J,
	[HIS_KEY_K] = KEY_K,
	[HIS_KEY_L] = KEY_L,
	[HIS_KEY_SEMICOLON] = KEY_SEMICOLON,
	[HIS_KEY_APOSTROPHE] = KEY_APOSTROPHE,
	[HIS_KEY_ENTER] = KEY_ENTER,
	[HIS_KEY_LEFTSHIFT] = KEY_LEFTSHIFT,
	[HIS_KEY_Z] = KEY_Z,
	[HIS_KEY_X] = KEY_X,
	[HIS_KEY_C] = KEY_C,
	[HIS_KEY_V] = KEY_V,
	[HIS_KEY_B] = KEY_B,
	[HIS_KEY_N] = KEY_N,
	[HIS_KEY_M] = KEY_M,
	[HIS_KEY_COMMA] = KEY_COMMA,
	[HIS_KEY_DOT] = KEY_DOT,
	[HIS_KEY_SLASH] = KEY_SLASH,
	[HIS_KEY_RIGHTSHIFT] = KEY_RIGHTSHIFT,
	[HIS_KEY_LEFTCTRL] = KEY_LEFTCTRL,
	[HIS_KEY_LEFTMETA] = KEY_LEFTMETA,
	[HIS_KEY_LEFTALT] = KEY_LEFTALT,
	[HIS_KEY_SPACE] = KEY_SPACE,
	[HIS_KEY_RIGHTALT] = KEY_RIGHTALT,
	[HIS_KEY_RIGHTCTRL] = KEY_RIGHTCTRL,
	[HIS_KEY_UP] = KEY_UP,
	[HIS_KEY_DOWN] = KEY_DOWN,
	[HIS_KEY_LEFT] = KEY_LEFT,
	[HIS_KEY_RIGHT] = KEY_RIGHT,
	[HIS_KEY_PAGEUP] = KEY_PAGEUP,
	[HIS_KEY_PAGEDOWN] = KEY_PAGEDOWN,
	[HIS_KEY_F1] = KEY_F1,
	[HIS_KEY_F2] = KEY_F2,
	[HIS_KEY_F3] = KEY_F3,
	[HIS_KEY_F4] = KEY_F4,
	[HIS_KEY_F5] = KEY_F5,
	[HIS_KEY_F6] = KEY_F6,
	[HIS_KEY_F7] = KEY_F7,
	[HIS_KEY_F8] = KEY_F8,
	[HIS_KEY_F9] = KEY_F9,
	[HIS_KEY_F10] = KEY_F10,
	[HIS_KEY_F11] = KEY_F11,
	[HIS_KEY_F12] = KEY_F12,
	[HIS_KEY_HOME] = KEY_HOME,
	[HIS_KEY_END] = KEY_END,
	[HIS_KEY_INSERT] = KEY_INSERT,
	[HIS_KEY_DELETE] = KEY_DELETE,
	[HIS_KEY_SYSRQ] = KEY_SYSRQ,
	[HIS_KEY_KP1] = KEY_KP1,
	[HIS_KEY_KP2] = KEY_KP2,
	[HIS_KEY_KP3] = KEY_KP3,
	[HIS_KEY_KP4] = KEY_KP4,
	[HIS_KEY_KP5] = KEY_KP5,
	[HIS_KEY_KP6] = KEY_KP6,
	[HIS_KEY_KP7] = KEY_KP7,
	[HIS_KEY_KP8] = KEY_KP8,
	[HIS_KEY_KP9] = KEY_KP9,
	[HIS_KEY_KP0] = KEY_KP0,
	[HIS_KEY_VOLUMEUP] = KEY_VOLUMEUP,
	[HIS_KEY_VOLUMEDOWN] = KEY_VOLUMEDOWN,
	[HIS_KEY_MUTE] = KEY_MUTE,
	[HIS_KEY_PLAYPAUSE] = KEY_PLAYPAUSE,
	[HIS_KEY_PREVIOUSSONG] = KEY_PREVIOUSSONG,
	[HIS_KEY_NEXTSONG] = KEY_NEXTSONG
};
