#include "PlatformCheck.h"
#include <QtGui>

#ifdef Q_WS_WIN
   bool PlatformCheck::mWin = true;
   bool PlatformCheck::mMac = false;
   bool PlatformCheck::mX11 = false;
#endif

#ifdef Q_WS_MAC
   bool PlatformCheck::mMac = true;
   bool PlatformCheck::mWin = false;
   bool PlatformCheck::mX11 = false;
#endif

#ifdef Q_WS_X11
   bool PlatformCheck::mMac = false;
   bool PlatformCheck::mWin = false;
   bool PlatformCheck::mX11 = true;
#endif
