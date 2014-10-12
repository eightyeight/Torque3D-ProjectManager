#ifndef PLATFORMCHECK_H
#define PLATFORMCHECK_H

class PlatformCheck
{
public:
   //PlatformCheck() {};
   //NewProjectPage(QWidget *parent = 0);
   //~NewProjectPage();
   static bool mWin;
   static bool mMac;
   static bool mX11;

   static bool isWin() { return PlatformCheck::mWin; };
   static bool isMac() { return PlatformCheck::mMac; };
   static bool isX11() { return PlatformCheck::mX11; };
};

#endif // PLATFORMCHECK_H
