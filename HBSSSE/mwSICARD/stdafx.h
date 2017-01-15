// stdafx.h : ��׼ϵͳ�����ļ��İ����ļ���
// ���Ǿ���ʹ�õ��������ĵ�
// �ض�����Ŀ�İ����ļ�
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             //  �� Windows ͷ�ļ����ų�����ʹ�õ���Ϣ
// Windows ͷ�ļ�:
#include <windows.h>



// TODO: �ڴ˴����ó�����Ҫ������ͷ�ļ�
//2. ====================����ͷ�ļ�=============================
//����ͷ�ļ�
#if defined _WIN32 || defined __CYGWIN__    //1. windows ƽ̨����windows/cygwinƽ̨
#ifdef __GNUC__     //1.1 CYGWINƽ̨
#ifdef __x86_64__
#define  HANDLE int64_t
#elif __i386__
#define  HANDLE int32_t
#endif
#define INVALID_HANDLE_VALUE (HANDLE)(-1)
#define STDCALL
#else           //1.2 windows ƽ̨
#include <Windows.h>
#define STDCALL __stdcall
#if (_MSC_VER<=1200)    //1.2.1 MSVC 6.0������
typedef char int8_t;
typedef unsigned char uint8_t;
typedef short int16_t;
typedef unsigned short uint16_t;
typedef int int32_t;
typedef unsigned int uint32_t;
typedef __int64 int64_t;
typedef unsigned __int64 uint64_t;    
#else                   //1.2.2 MSVC 6.0���ϱ�����
#include <memory>
#include <cstdint>
#include <regex>
using std::shared_ptr;
#endif                  //END 1.2.1 

#endif          //END 1.1

#else       //2. LINUX/UNIXƽ̨
#include "dlfcn.h" /* ������̬���ӹ��ܽӿ��ļ� */
#ifdef __x86_64__
#define  HANDLE int64_t
#else
#define  HANDLE int
#endif
#define INVALID_HANDLE_VALUE (HANDLE)(-1)
#define STDCALL


#endif  //END 1


#include <list>
#include <vector>
#include <string>
#include <functional>
#include <utility>
using std::list;
using std::string;
using std::basic_string;
//using std::u16string;
using std::wstring;
using std::vector;
using std::copy;

#include <iostream>
#include <iterator>
#include <sstream>
using std::stringstream;