/* base definitions */

#ifndef BASE_H
#define BASE_H

#define VER "0.4.6"

#if QT_VERSION >= 0x030000
#define qt3 1
#endif

#ifdef WIN32
#include <windows.h>
#endif  

#define XCA_TITLE "X Certifikate and Key management"

#endif