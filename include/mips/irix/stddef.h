#ifndef __STDDEF
#define __STDDEF

/* $Id: stddef.h,v 1.1.1.1 2002/07/08 04:28:54 daa1 Exp $ */

#define NULL 0
#define offsetof(ty,mem) ((size_t)((char*)&((ty*)0)->mem - (char*)0))

typedef long ptrdiff_t;

#if !defined(_SIZE_T) && !defined(_SIZE_T_)
#define _SIZE_T
#define _SIZE_T_
typedef unsigned long size_t;
#endif

#if !defined(_WCHAR_T) && !defined(_WCHAR_T_)
#define _WCHAR_T
#define _WCHAR_T_
typedef unsigned short wchar_t;
#endif

#endif /* __STDDEF */
