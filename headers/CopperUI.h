#ifndef COPPERUI_COPPERUI_H
#define COPPERUI_COPPERUI_H

#include "CopperTerm.h"

#define CUI_WINDOW_NAME 0x21
#define CUI_WINDOW_WIDTH 0x22
#define CUI_WINDOW_HEIGHT 0x23
#define CUI_WINDOW_STATE 0x24
#define CUI_WINDOW_CLOSE_BUTTON_COLOR 0x25

typedef int CUIWindow;
typedef int CUIInfo;
typedef int CUIIntResult;
typedef char* CUIStringResult;
typedef int CUIBoolean;

CUIWindow* cuiCreateWindow(char* title, CUIInt width, CUIInt height);
void cuiCloseWindow(CUIWindow* window);
CUIStringResult cuiWindowStringInfo(CUIWindow* window, CUIInfo info);
CUIIntResult cuiWindowInfo(CUIWindow* window, CUIInfo info);
CUIBoolean cuiWindowOpen(CUIWindow* window);

void cuiRenderWindow(CUIWindow* window);



#endif //COPPERUI_COPPERUI_H
