#ifndef KEYBOARD_MAC_H
#define KEYBOARD_MAC_H

#include "os.h"
#ifdef OS_MAC

// Emulate Linux key constants for OSX

#define KEY_ESC             kVK_Escape
#define KEY_F1              kVK_F1
#define KEY_F2              kVK_F2
#define KEY_F3              kVK_F3
#define KEY_F4              kVK_F4
#define KEY_F5              kVK_F5
#define KEY_F6              kVK_F6
#define KEY_F7              kVK_F7
#define KEY_F8              kVK_F8
#define KEY_F9              kVK_F9
#define KEY_F10             kVK_F10
#define KEY_F11             kVK_F11
#define KEY_F12             kVK_F12

#define KEY_1               kVK_ANSI_1
#define KEY_2               kVK_ANSI_2
#define KEY_3               kVK_ANSI_3
#define KEY_4               kVK_ANSI_4
#define KEY_5               kVK_ANSI_5
#define KEY_6               kVK_ANSI_6
#define KEY_7               kVK_ANSI_7
#define KEY_8               kVK_ANSI_8
#define KEY_9               kVK_ANSI_9
#define KEY_0               kVK_ANSI_0

#define KEY_A               kVK_ANSI_A
#define KEY_B               kVK_ANSI_B
#define KEY_C               kVK_ANSI_C
#define KEY_D               kVK_ANSI_D
#define KEY_E               kVK_ANSI_E
#define KEY_F               kVK_ANSI_F
#define KEY_G               kVK_ANSI_G
#define KEY_H               kVK_ANSI_H
#define KEY_I               kVK_ANSI_I
#define KEY_J               kVK_ANSI_J
#define KEY_K               kVK_ANSI_K
#define KEY_L               kVK_ANSI_L
#define KEY_M               kVK_ANSI_M
#define KEY_N               kVK_ANSI_N
#define KEY_O               kVK_ANSI_O
#define KEY_P               kVK_ANSI_P
#define KEY_Q               kVK_ANSI_Q
#define KEY_R               kVK_ANSI_R
#define KEY_S               kVK_ANSI_S
#define KEY_T               kVK_ANSI_T
#define KEY_U               kVK_ANSI_U
#define KEY_V               kVK_ANSI_V
#define KEY_W               kVK_ANSI_W
#define KEY_X               kVK_ANSI_X
#define KEY_Y               kVK_ANSI_Y
#define KEY_Z               kVK_ANSI_Z

#define KEY_GRAVE           kVK_ANSI_Grave
#define KEY_GRAVE_UK        kVK_ISO_Section
#define KEY_102ND           kVK_ANSI_Grave
#define KEY_MINUS           kVK_ANSI_Minus
#define KEY_EQUAL           kVK_ANSI_Equal
#define KEY_BACKSPACE       kVK_Delete
#define KEY_LEFTBRACE       kVK_ANSI_LeftBracket
#define KEY_RIGHTBRACE      kVK_ANSI_RightBracket
#define KEY_BACKSLASH       kVK_ANSI_Backslash
#define KEY_SEMICOLON       kVK_ANSI_Semicolon
#define KEY_APOSTROPHE      kVK_ANSI_Quote
#define KEY_ENTER           kVK_Return
#define KEY_COMMA           kVK_ANSI_Comma
#define KEY_DOT             kVK_ANSI_Period
#define KEY_SLASH           kVK_ANSI_Slash
#define KEY_SPACE           kVK_Space

#define KEY_TAB             kVK_Tab
#define KEY_CAPSLOCK        kVK_CapsLock
#define KEY_LEFTSHIFT       kVK_Shift
#define KEY_RIGHTSHIFT      kVK_RightShift
#define KEY_LEFTCTRL        kVK_Control
#define KEY_RIGHTCTRL       kVK_RightControl
#define KEY_LEFTMETA        kVK_Command
#define KEY_RIGHTMETA       (kVK_Command - 1)   // This isn't listed as kVK_RightCommand for some reason?
#define KEY_LEFTALT         kVK_Option
#define KEY_RIGHTALT        kVK_RightOption
#define KEY_COMPOSE         -1                  // OSX has no context menu key

#define KEY_SYSRQ           kVK_F13
#define KEY_SCROLLLOCK      kVK_F14
#define KEY_PAUSE           kVK_F15
#define KEY_INSERT          kVK_Help
#define KEY_HOME            kVK_Home
#define KEY_PAGEUP          kVK_PageUp
#define KEY_DELETE          kVK_ForwardDelete
#define KEY_END             kVK_End
#define KEY_PAGEDOWN        kVK_PageDown

#define KEY_UP              kVK_UpArrow
#define KEY_LEFT            kVK_LeftArrow
#define KEY_DOWN            kVK_DownArrow
#define KEY_RIGHT           kVK_RightArrow

#define KEY_NUMLOCK         kVK_ANSI_KeypadClear
#define KEY_KPSLASH         kVK_ANSI_KeypadDivide
#define KEY_KPASTERISK      kVK_ANSI_KeypadMultiply
#define KEY_KPMINUS         kVK_ANSI_KeypadMinus
#define KEY_KPPLUS          kVK_ANSI_KeypadPlus
#define KEY_KPENTER         kVK_ANSI_KeypadEnter
#define KEY_KPDOT           kVK_ANSI_KeypadDecimal
#define KEY_KP1             kVK_ANSI_Keypad1
#define KEY_KP2             kVK_ANSI_Keypad2
#define KEY_KP3             kVK_ANSI_Keypad3
#define KEY_KP4             kVK_ANSI_Keypad4
#define KEY_KP5             kVK_ANSI_Keypad5
#define KEY_KP6             kVK_ANSI_Keypad6
#define KEY_KP7             kVK_ANSI_Keypad7
#define KEY_KP8             kVK_ANSI_Keypad8
#define KEY_KP9             kVK_ANSI_Keypad9
#define KEY_KP0             kVK_ANSI_Keypad0

#define KEY_MUTE            kVK_Mute
#define KEY_VOLUMEUP        kVK_VolumeUp
#define KEY_VOLUMEDOWN      kVK_VolumeDown
// Media keys don't generate keypresses.
// TOOD: figure out how to emulate these
#define KEY_STOP            -1
#define KEY_PREVIOUSSONG    -1
#define KEY_PLAYPAUSE       -1
#define KEY_NEXTSONG        -1

#endif  // OS_MAC

#endif
