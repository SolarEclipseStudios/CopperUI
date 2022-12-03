//
// Created by Alexander Blinov on 29.03.2022.
//

#ifndef COPPERUI_COPPERTERM_H
#define COPPERUI_COPPERTERM_H

typedef int CUIInt;
typedef int CUIMode;
typedef float CUIFloat;

//BACKGROUND COLORS

#define CUI_BG_DARK_RED "\033[41m"
#define CUI_BG_LIGHT_RED "\033[101m"
#define CUI_BG_DARK_GREEN "\033[42m"
#define CUI_BG_DARK_BLUE "\033[44m"
#define CUI_BG_DARK_AQUA "\033[46m"
#define CUI_BG_DARK_YELLOW "\033[43m"
#define CUI_BG_LIGHT_GRAY "\033[47m"
#define CUI_BG_WHITE "\033[107m"
#define CUI_BG_LIGHT_BLUE "\033[104m"
#define CUI_BG_DARK_GRAY "\033[40m"
#define CUI_BG_GRAY "\033[100m"
#define CUI_BG_DARK_VIOLET "\033[45m"
#define CUI_BG_LIGHT_VIOLET "\033[105m"
#define CUI_BG_LIGHT_YELLOW "\033[103m"
#define CUI_BG_LIGHT_AQUA "\033[106m"

//FOREGROUND COLORS
#define CUI_FG_DARK_GRAY "\033[30m"
#define CUI_FG_DARK_RED "\033[31m"
#define CUI_FG_DARK_GREEN "\033[32m"
#define CUI_FG_DARK_YELLOW "\033[33m"
#define CUI_FG_DARK_BLUE "\033[34m"
#define CUI_FG_DARK_VIOLET "\033[35m"
#define CUI_FG_DARK_AQUA "\033[36m"
#define CUI_FG_WHITE "\033[97m"
#define CUI_FG_GRAY "\033[90m"
#define CUI_FG_LIGHT_RED "\033[91m"
#define CUI_FG_LIGHT_GREEN "\033[92m"
#define CUI_FG_LIGHT_YELLOW "\033[93m"
#define CUI_FG_LIGHT_BLUE "\033[94m"
#define CUI_FG_LIGHT_VIOLET "\033[95m"
#define CUI_FG_LIGHT_AQUA "\033[96m"

//FONT STYLES
#define CUI_STYLE_BOLD "\033[1m"
#define CUI_STYLE_DARK "\033[2m"
#define CUI_STYLE_CURSIVE "\033[3m"
#define CUI_STYLE_UNDERLINE "\033[4m"
#define CUI_STYLE_STRIKE "\033[9m"
#define CUI_STYLE_SELECTED "\033[7m"

#define CUI_RESET "\033[0m"

//MODES
#define CUI_ASPECT_MODE 0x13
#define CUI_NO_ECHO 0x14

//STATES
#define CUI_FALSE 0
#define CUI_TRUE 1

//FUNCTIONS

int cuiGetTerminalWidth();
int cuiGetTerminalHeight();
void cuiSetCursorPos(CUIInt x, CUIInt y);
void cuiColor(char* color);
void cuiClearTerminal();
int cuiGetKey();
void cuiPrint(char* string, CUIInt x, CUIInt y);
void cuiPrintCentered(char* string, int y);
void cuiReturnCursor();
void cuiDrawPixel(CUIInt x, CUIInt y, char* bg_color);
int cuiGetTerminalAspect();
void cuiDrawFilledRect(CUIInt x, CUIInt y, CUIInt width, CUIInt height, char* bg_color);
void cuiEnable(CUIMode mode);
void cuiDisable(CUIMode mode);
float cuiGetSymbolAspect();
int cuiGetModeState(CUIMode mode);
void cuiPushTerminal();
void cuiPopTerminal();

#endif //COPPERUI_COPPERTERM_H
