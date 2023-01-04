// Numahk.cpp : Defines the exported functions for the DLL.

#include "pch.h"
#include "framework.h"
#include "Numahk.h"
#include <stdio.h>
#include <stdlib.h>

#include <algorithm>
#include <ctime>
#include <chrono>
#include <numeric>
#include <random>
#include <vector>
using namespace std;


// Var
NUMAHK_API int nNumahk=0;
NUMAHK_API int NDArray_Length = 0;
NUMAHK_API double Random_Seeds = std::chrono::system_clock::now().time_since_epoch().count() / 10000000;
NUMAHK_API std::mt19937 Random_Generator(Random_Seeds);
NUMAHK_API char* i1;
NUMAHK_API unsigned char* u1;
NUMAHK_API short* i2;
NUMAHK_API unsigned short* u2;
NUMAHK_API int* i4;
NUMAHK_API unsigned int* u4;
NUMAHK_API __int64* i8;
NUMAHK_API unsigned __int64* u8;
NUMAHK_API float* f4;
NUMAHK_API double* f8;
NUMAHK_API bool* bool_;

// // Func
// Base
NUMAHK_API int* NDArray_Copy(int* NDArray, int length, int type, int type_length)
{
    NDArray_Length = length * type_length;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            memcpy(i1, (char*)NDArray, NDArray_Length);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            memcpy(u1, (unsigned char*)NDArray, NDArray_Length);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            memcpy(i2, (short*)NDArray, NDArray_Length);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            memcpy(u2, (unsigned short*)NDArray, NDArray_Length);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            memcpy(i4, (int*)NDArray, NDArray_Length);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            memcpy(u4, (unsigned int*)NDArray, NDArray_Length);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            memcpy(i8, (__int64*)NDArray, NDArray_Length);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            memcpy(u8, (unsigned __int64*)NDArray, NDArray_Length);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            memcpy(f4, (float*)NDArray, NDArray_Length);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            memcpy(f8, (double*)NDArray, NDArray_Length);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            memcpy(bool_, (bool*)NDArray, NDArray_Length);
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Change(int* NDArray, int length, int type, int new_type)
{
    switch (new_type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        i1[i] = (char)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        u1[i] = (unsigned char)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        i2[i] = (short)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        u2[i] = (unsigned short)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        i4[i] = (int)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        u4[i] = (unsigned int)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        i8[i] = (__int64)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        u8[i] = (unsigned __int64)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        f4[i] = (float)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        f8[i] = (double)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            switch (type)
            {
                case 0:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((char*)NDArray)[i];
                    break;
                }
                case 1:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((unsigned char*)NDArray)[i];
                    break;
                }
                case 2:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((short*)NDArray)[i];
                    break;
                }
                case 3:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((unsigned short*)NDArray)[i];
                    break;
                }
                case 4:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((int*)NDArray)[i];
                    break;
                }
                case 5:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((unsigned int*)NDArray)[i];
                    break;
                }
                case 6:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((__int64*)NDArray)[i];
                    break;
                }
                case 7:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((unsigned __int64*)NDArray)[i];
                    break;
                }
                case 9:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((float*)NDArray)[i];
                    break;
                }
                case 10:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((double*)NDArray)[i];
                    break;
                }
                case 15:
                {
                    for (int i = 0; i < length; i++)
                        bool_[i] = (bool)((bool*)NDArray)[i];
                    break;
                }
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Init(__int64* arr, int length, int type)
{
    int i;
    NDArray_Length = length;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < length; i++)
            {
                i1[i] = (*(((int*)arr) + 2) == 1) ? (char)(*arr) : (char)(*(double*)arr);
                arr += 2;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < length; i++)
            {
                u1[i] = (*(((int*)arr) + 2) == 1) ? (unsigned char)(*arr) : (unsigned char)(*(double*)arr);
                arr += 2;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < length; i++)
            {
                i2[i] = (*(((int*)arr) + 2) == 1) ? (short)(*arr) : (short)(*(double*)arr);
                arr += 2;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < length; i++)
            {
                u2[i] = (*(((int*)arr) + 2) == 1) ? (unsigned short)(*arr) : (unsigned short)(*(double*)arr);
                arr += 2;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < length; i++)
            {
                i4[i] = (*(((int*)arr) + 2) == 1) ? (int)(*arr) : (int)(*(double*)arr);
                arr += 2;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < length; i++)
            {
                u4[i] = (*(((int*)arr) + 2) == 1) ? (unsigned int)(*arr) : (unsigned int)(*(double*)arr);
                arr += 2;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < length; i++)
            {
                i8[i] = (*(((int*)arr) + 2) == 1) ? (__int64)(*arr) : (__int64)(*(double*)arr);
                arr += 2;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < length; i++)
            {
                u8[i] = (*(((int*)arr) + 2) == 1) ? (unsigned __int64)(*arr) : (unsigned __int64)(*(double*)arr);
                arr += 2;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < length; i++)
            {
                f4[i] = (*(((int*)arr) + 2) == 1) ? (float)(*arr) : (float)(*(double*)arr);
                arr += 2;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (i = 0; i < length; i++)
            {
                f8[i] = (*(((int*)arr) + 2) == 1) ? (double)(*arr) : (double)(*(double*)arr);
                arr += 2;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < length; i++)
            {
                bool_[i] = (*(((int*)arr) + 2) == 1) ? (bool)(*arr) : (bool)(*(double*)arr);
                arr += 2;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Get(int* NDArray, __int64* point, __int64* strides, int length, int type, int ahk_flag)
{
    int i;
    __int64 _point = 0;
    for (i = 0; i < length; i++)
    {
        _point += (*point - ahk_flag) * (*strides);
        point += 2;
        strides += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            i1[0] = ((char*)NDArray)[_point];
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            u1[0] = ((unsigned char*)NDArray)[_point];
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            i2[0] = ((short*)NDArray)[_point];
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            u2[0] = ((unsigned short*)NDArray)[_point];
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            i4[0] = ((int*)NDArray)[_point];
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            u4[0] = ((unsigned int*)NDArray)[_point];
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            i8[0] = ((__int64*)NDArray)[_point];
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            u8[0] = ((unsigned __int64*)NDArray)[_point];
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            f4[0] = ((float*)NDArray)[_point];
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            f8[0] = ((double*)NDArray)[_point];
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            bool_[0] = ((bool*)NDArray)[_point];
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API void NDArray_Set(int* NDArray, __int64* point, __int64* strides, __int64* value, int length, int type, int ahk_flag)
{
    int i;
    __int64 _point = 0;
    for (i = 0; i < length; i++)
    {
        _point += (*point - ahk_flag) * (*strides);
        point += 2;
        strides += 2;
    }
    switch (type)
    {
        case 0:
        {
            ((char*)NDArray)[_point] = (char)(*value);
            break;
        }
        case 1:
        {
            ((unsigned char*)NDArray)[_point] = (unsigned char)(*value);
            break;
        }
        case 2:
        {
            ((short*)NDArray)[_point] = (short)(*value);
            break;
        }
        case 3:
        {
            ((unsigned short*)NDArray)[_point] = (unsigned short)(*value);
            break;
        }
        case 4:
        {
            ((int*)NDArray)[_point] = (int)(*value);
            break;
        }
        case 5:
        {
            ((unsigned int*)NDArray)[_point] = (unsigned int)(*value);
            break;
        }
        case 6:
        {
            ((__int64*)NDArray)[_point] = (__int64)(*value);
            break;
        }
        case 7:
        {
            ((unsigned __int64*)NDArray)[_point] = (unsigned __int64)(*value);
            break;
        }
        case 9:
        {
            ((float*)NDArray)[_point] = (float)(*(double*)value);
            break;
        }
        case 10:
        {
            ((double*)NDArray)[_point] = (double)(*(double*)value);
            break;
        }
        case 15:
        {
            ((bool*)NDArray)[_point] = (bool)(*value);
            break;
        }
    }
    NDArray = (int*)NDArray;
}

NUMAHK_API void NDArray_Free(int* NDArray, int type)
{
    switch (type)
    {
        case 0:
        {
            free((char*)NDArray);
            break;
        }
        case 1:
        {
            free((unsigned char*)NDArray);
            break;
        }
        case 2:
        {
            free((short*)NDArray);
            break;
        }
        case 3:
        {
            free((unsigned short*)NDArray);
            break;
        }
        case 4:
        {
            free((int*)NDArray);
            break;
        }
        case 5:
        {
            free((unsigned int*)NDArray);
            break;
        }
        case 6:
        {
            free((__int64*)NDArray);
            break;
        }
        case 7:
        {
            free((unsigned __int64*)NDArray);
            break;
        }
        case 9:
        {
            free((float*)NDArray);
            break;
        }
        case 10:
        {
            free((double*)NDArray);
            break;
        }
        case 15:
        {
            free((bool*)NDArray);
            break;
        }
    }
}

// Usage
NUMAHK_API int* NDArray_Add(int* NDArray1, int* NDArray2, int type1, int type2, int length, int new_type)
{
    int* tmp_ndarray1 = NDArray_Change(NDArray1, length, type1, new_type);
    int* tmp_ndarray2 = NDArray_Change(NDArray2, length, type2, new_type);
    switch (new_type)
    {
    case 0:
    {
        i1 = (char*)malloc(sizeof(char) * length);
        for (int i = 0; i < length; i++)
            i1[i] = ((char*)tmp_ndarray1)[i] + ((char*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i1;
    }
    case 1:
    {
        u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
        for (int i = 0; i < length; i++)
            u1[i] = ((unsigned char*)tmp_ndarray1)[i] + ((unsigned char*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u1;
    }
    case 2:
    {
        i2 = (short*)malloc(sizeof(short) * length);
        for (int i = 0; i < length; i++)
            i2[i] = ((short*)tmp_ndarray1)[i] + ((short*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i2;
    }
    case 3:
    {
        u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
        for (int i = 0; i < length; i++)
            u2[i] = ((unsigned short*)tmp_ndarray1)[i] + ((unsigned short*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u2;
    }
    case 4:
    {
        i4 = (int*)malloc(sizeof(int) * length);
        for (int i = 0; i < length; i++)
            i4[i] = ((int*)tmp_ndarray1)[i] + ((int*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i4;
    }
    case 5:
    {
        u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
        for (int i = 0; i < length; i++)
            u4[i] = ((unsigned int*)tmp_ndarray1)[i] + ((unsigned int*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u4;
    }
    case 6:
    {
        i8 = (__int64*)malloc(sizeof(__int64) * length);
        for (int i = 0; i < length; i++)
            i8[i] = ((__int64*)tmp_ndarray1)[i] + ((__int64*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i8;
    }
    case 7:
    {
        u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
        for (int i = 0; i < length; i++)
            u8[i] = ((unsigned __int64*)tmp_ndarray1)[i] + ((unsigned __int64*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u8;
    }
    case 9:
    {
        f4 = (float*)malloc(sizeof(float) * length);
        for (int i = 0; i < length; i++)
            f4[i] = ((float*)tmp_ndarray1)[i] + ((float*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)f4;
    }
    case 10:
    {
        f8 = (double*)malloc(sizeof(double) * length);
        for (int i = 0; i < length; i++)
            f8[i] = ((double*)tmp_ndarray1)[i] + ((double*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)f8;
    }
    case 15:
    {
        bool_ = (bool*)malloc(sizeof(bool) * length);
        for (int i = 0; i < length; i++)
            bool_[i] = ((bool*)tmp_ndarray1)[i] + ((bool*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)bool_;
    }
    default:
        return 0;
    }
}

NUMAHK_API int* NDArray_All_(int* NDArray, __int64* shape, int shape_length, int type)
{
    bool flag = 1;
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    bool_ = (bool*)malloc(sizeof(bool));
    switch (type)
    {
        case 0:
        {
            for (i = 0; i < length; i++)
            {
                if (((char*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 1:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned char*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            for (i = 0; i < length; i++)
            {
                if (((short*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 3:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned short*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 4:
        {
            for (i = 0; i < length; i++)
            {
                if (((int*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 5:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned int*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 6:
        {
            for (i = 0; i < length; i++)
            {
                if (((__int64*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 7:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned __int64*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 9:
        {
            for (i = 0; i < length; i++)
            {
                if (abs(((float*)NDArray)[i]) <= 1e-6)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 10:
        {
            for (i = 0; i < length; i++)
            {
                if (abs(((double*)NDArray)[i]) <= 1e-15)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 15:
        {
            for (i = 0; i < length; i++)
            {
                if (((bool*)NDArray)[i] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        default:
            return 0;
    }
    bool_[0] = flag;
    return (int*)bool_;
}

NUMAHK_API int* NDArray_All(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    bool flag;
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    bool_ = (bool*)malloc(sizeof(bool) * loop_times);
    int index = 0;
    switch (type)
    {
        case 0:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((char*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 1:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned char*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 2:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((short*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 3:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned short*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 4:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((int*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 5:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned int*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 6:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((__int64*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 7:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned __int64*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 9:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (abs(((float*)NDArray)[index]) <= 1e-6)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 10:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (abs(((double*)NDArray)[index]) <= 1e-15)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 15:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((bool*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        default:
            return 0;
    }
    return (int*)bool_;
}

NUMAHK_API int* NDArray_Any_(int* NDArray, __int64* shape, int shape_length, int type)
{
    bool flag = 1;
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    bool_ = (bool*)malloc(sizeof(bool));
    switch (type)
    {
        case 0:
        {
            for (i = 0; i < length; i++)
            {
                if (((char*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 1:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned char*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 2:
        {
            for (i = 0; i < length; i++)
            {
                if (((short*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 3:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned short*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 4:
        {
            for (i = 0; i < length; i++)
            {
                if (((int*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 5:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned int*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 6:
        {
            for (i = 0; i < length; i++)
            {
                if (((__int64*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 7:
        {
            for (i = 0; i < length; i++)
            {
                if (((unsigned __int64*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 9:
        {
            for (i = 0; i < length; i++)
            {
                if (abs(((float*)NDArray)[i]) > 1e-6)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 10:
        {
            for (i = 0; i < length; i++)
            {
                if (abs(((double*)NDArray)[i]) > 1e-15)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        case 15:
        {
            for (i = 0; i < length; i++)
            {
                if (((bool*)NDArray)[i] != 0)
                {
                    flag = 0;
                    break;
                }
            }
            break;
        }
        default:
            return 0;
    }
    bool_[0] = flag;
    return (int*)bool_;
}

NUMAHK_API int* NDArray_Any(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    bool flag;
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    bool_ = (bool*)malloc(sizeof(bool) * loop_times);
    int index = 0;
    switch (type)
    {
        case 0:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((char*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 1:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned char*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 2:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((short*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 3:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned short*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 4:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((int*)NDArray)[index] == 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 5:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned int*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 6:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((__int64*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 7:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((unsigned __int64*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 9:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (abs(((float*)NDArray)[index]) > 1e-6)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 10:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (abs(((double*)NDArray)[index]) > 1e-15)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 15:
        {
            for (i = 0; i < loop_times; i++)
            {
                flag = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    if (flag == 0)
                        continue;
                    if (((bool*)NDArray)[index] != 0)
                        flag = 0;
                }
                bool_[i] = flag;
                index = (index + index / length) % length;
            }
            break;
        }
        default:
            return 0;
    }
    return (int*)bool_;
}

NUMAHK_API int* NDArray_Argmax_(int* NDArray, __int64* shape, int shape_length, int type, int ahk_flag)
{
    int i, max_index;
    i8 = (__int64*)malloc(sizeof(__int64));
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((char*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 1:
        {
            unsigned char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned char*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 2:
        {
            short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((short*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 3:
        {
            unsigned short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned short*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 4:
        {
            int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((int*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 5:
        {
            unsigned int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned int*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 6:
        {
            __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((__int64*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 7:
        {
            unsigned __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned __int64*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 9:
        {
            float max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((float*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 10:
        {
            double max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((double*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 15:
        {
            bool max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((bool*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        default:
            return 0;
    }
    i8[0] = max_index + ahk_flag;
    return (int*)i8;
}

NUMAHK_API int* NDArray_Argmax(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type, int ahk_flag)
{
    int i, j, max_index;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
    int index = 0;
    switch (type)
    {
        case 0:
        {
            char max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((char*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 1:
        {
            unsigned char max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned char*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 2:
        {
            short max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((short*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 3:
        {
            unsigned short max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned short*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 4:
        {
            int max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((int*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 5:
        {
            unsigned int max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned int*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 6:
        {
            __int64 max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((__int64*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 7:
        {
            unsigned __int64 max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned __int64*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 9:
        {
            float max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((float*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 10:
        {
            double max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((double*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 15:
        {
            bool max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((bool*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        default:
            return 0;
    }
    return (int*)i8;
}

NUMAHK_API int* NDArray_Argmin_(int* NDArray, __int64* shape, int shape_length, int type, int ahk_flag)
{
    int i, max_index;
    i8 = (__int64*)malloc(sizeof(__int64));
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((char*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 1:
        {
            unsigned char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned char*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 2:
        {
            short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((short*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 3:
        {
            unsigned short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned short*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 4:
        {
            int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((int*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 5:
        {
            unsigned int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned int*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 6:
        {
            __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((__int64*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 7:
        {
            unsigned __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned __int64*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 9:
        {
            float max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((float*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 10:
        {
            double max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((double*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        case 15:
        {
            bool max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((bool*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            break;
        }
        default:
            return 0;
    }
    i8[0] = max_index + ahk_flag;
    return (int*)i8;
}

NUMAHK_API int* NDArray_Argmin(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type, int ahk_flag)
{
    int i, j, max_index;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
    int index = 0;
    switch (type)
    {
        case 0:
        {
            char max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((char*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 1:
        {
            unsigned char max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned char*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 2:
        {
            short max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((short*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index;
                index = (index + index / length) % length;
            }
            break;
        }
        case 3:
        {
            unsigned short max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned short*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 4:
        {
            int max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((int*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 5:
        {
            unsigned int max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned int*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 6:
        {
            __int64 max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((__int64*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 7:
        {
            unsigned __int64 max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned __int64*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 9:
        {
            float max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((float*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 10:
        {
            double max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((double*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        case 15:
        {
            bool max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((bool*)NDArray)[index];
                    if (j == 0 || ret < max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_index + ahk_flag;
                index = (index + index / length) % length;
            }
            break;
        }
        default:
            return 0;
    }
    return (int*)i8;
}

NUMAHK_API int* NDArray_Argpartition(int* NDArray, __int64* shape, int shape_length, int jump_step, int kth, int axis, int type)
{
    int i, j, max_index;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        else
            kth = (kth > (*shape)) ? kth : (*shape) - 1;
        shape += 2;
    }
    int index = 0;
    int new_index = 0;
    __int64 _loop_times = length / loop_times;
    __int64* partition_index = (__int64*)malloc(sizeof(__int64) * length);
    __int64* tmp_index = (__int64*)NUMAHK_RANGE(0, _loop_times, 1, 6);
    __int64* _index = (__int64*)malloc(sizeof(__int64) * _loop_times);
    switch (type)
    {
    case 0:
    {
        i1 = (char*)malloc(sizeof(char) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                i1[j] = ((char*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)i1, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(i1);
        break;
    }
    case 1:
    {
        u1 = (unsigned char*)malloc(sizeof(unsigned char) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                u1[j] = ((unsigned char*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)u1, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(u1);
        break;
    }
    case 2:
    {
        i2 = (short*)malloc(sizeof(short) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                i2[j] = ((short*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)i2, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(i2);
        break;
    }
    case 3:
    {
        u2 = (unsigned short*)malloc(sizeof(unsigned short) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                u2[j] = ((unsigned short*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)u2, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(u2);
        break;
    }
    case 4:
    {
        i4 = (int*)malloc(sizeof(int) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                i4[j] = ((int*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)i4, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(i4);
        break;
    }
    case 5:
    {
        u4 = (unsigned int*)malloc(sizeof(unsigned int) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                u4[j] = ((unsigned int*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)u4, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(u4);
        break;
    }
    case 6:
    {
        i8 = (__int64*)malloc(sizeof(__int64) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                i8[j] = ((__int64*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)i8, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(i8);
        break;
    }
    case 7:
    {
        u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                u8[j] = ((unsigned __int64*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)u8, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(u8);
        break;
    }
    case 9:
    {
        f4 = (float*)malloc(sizeof(float) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                f4[j] = ((float*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)f4, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(f4);
        break;
    }
    case 10:
    {
        f8 = (double*)malloc(sizeof(double) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                f8[j] = ((double*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)f8, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(f8);
        break;
    }
    case 15:
    {
        bool_ = (bool*)malloc(sizeof(bool) * _loop_times);
        for (i = 0; i < loop_times; i++)
        {
            for (j = 0; j < _loop_times; j++, index += jump_step)
            {
                bool_[j] = ((bool*)NDArray)[index];
                _index[j] = tmp_index[j];
            }
            partitionSort((int*)bool_, _index, 0, kth, type);
            for (j = 0; j < _loop_times; j++, new_index += jump_step)
                partition_index[new_index] = _index[j];
            index = (index + index / length) % length;
            new_index = (new_index + new_index / length) % length;
        }
        free(bool_);
        break;
    }
    default:
        return 0;
    }
    free(tmp_index);
    free(_index);
    return (int*)partition_index;
}

NUMAHK_API int* NDArray_Choose(int* NDArray, __int64* choices, int length, int type, int ahk_flag)
{
    i4 = (int*)malloc(sizeof(int) * length);
    int flag = 0;
    switch (type)
    {
        case 0:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((char*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 1:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((unsigned char*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 2:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((short*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 3:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((unsigned short*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 4:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((int*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 5:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((unsigned int*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 6:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((__int64*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 7:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((unsigned __int64*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
        case 15:
        {
            for (int i = 0; i < length; i++)
            {
                flag = ((bool*)NDArray)[i] - ahk_flag;
                i4[i] = ((__int64*)(*(choices + 2 * flag)))[i];
            }
            break;
        }
    }
    return (int*)i4;
}

NUMAHK_API int* NDArray_Clip(int* NDArray, double ndarray_min, double ndarray_max, int length, int type)
{
    int i;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            char ret;
            for (i = 0; i < length; i++)
            {
                ret = ((char*)NDArray)[i];
                i1[i] = (ret < ndarray_min) ? (char)ndarray_min : (ret > ndarray_max) ? (char)ndarray_max : ret;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            unsigned char ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned char*)NDArray)[i];
                u1[i] = (ret < ndarray_min) ? (unsigned char)ndarray_min : (ret > ndarray_max) ? (unsigned char)ndarray_max : ret;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            short ret;
            for (i = 0; i < length; i++)
            {
                ret = ((short*)NDArray)[i];
                i2[i] = (ret < ndarray_min) ? (short)ndarray_min : (ret > ndarray_max) ? (short)ndarray_max : ret;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            unsigned short ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned short*)NDArray)[i];
                u2[i] = (ret < ndarray_min) ? (unsigned short)ndarray_min : (ret > ndarray_max) ? (unsigned short)ndarray_max : ret;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            int ret;
            for (i = 0; i < length; i++)
            {
                ret = ((int*)NDArray)[i];
                i4[i] = (ret < ndarray_min) ? (int)ndarray_min : (ret > ndarray_max) ? (int)ndarray_max : ret;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            unsigned int ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned int*)NDArray)[i];
                u4[i] = (ret < ndarray_min) ? (unsigned int)ndarray_min : (ret > ndarray_max) ? (unsigned int)ndarray_max : ret;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            __int64 ret;
            for (i = 0; i < length; i++)
            {
                ret = ((__int64*)NDArray)[i];
                i8[i] = (ret < ndarray_min) ? (__int64)ndarray_min : (ret > ndarray_max) ? (__int64)ndarray_max : ret;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            unsigned __int64 ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned __int64*)NDArray)[i];
                u8[i] = (ret < ndarray_min) ? (unsigned __int64)ndarray_min : (ret > ndarray_max) ? (unsigned __int64)ndarray_max : ret;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            float ret;
            for (i = 0; i < length; i++)
            {
                ret = ((float*)NDArray)[i];
                f4[i] = (ret < ndarray_min) ? (float)ndarray_min : (ret > ndarray_max) ? (float)ndarray_max : ret;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            double ret;
            for (i = 0; i < length; i++)
            {
                ret = ((double*)NDArray)[i];
                f8[i] = (ret < ndarray_min) ? (double)ndarray_min : (ret > ndarray_max) ? (double)ndarray_max : ret;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            bool ret;
            for (i = 0; i < length; i++)
            {
                ret = ((bool*)NDArray)[i];
                bool_[i] = (ret < ndarray_min) ? (bool)ndarray_min : (ret > ndarray_max) ? (bool)ndarray_max : ret;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Compress(int* NDArray, bool* bool_arr, int arr_length, int length, int type)
{
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    i1[index++] = ((char*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    u1[index++] = ((unsigned char*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    i2[index++] = ((short*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    u2[index++] = ((unsigned short*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    i4[index++] = ((int*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    u4[index++] = ((unsigned int*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    i8[index++] = ((__int64*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    u8[index++] = ((unsigned __int64*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    f4[index++] = ((float*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    f8[index++] = ((double*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * arr_length);
            for (int i = 0; i < length; i++)
            {
                if (bool_arr[i] == 1)
                    bool_[index++] = ((bool*)NDArray)[i];
            }
            free(bool_arr);
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Cumprod_(int* NDArray, __int64* shape, int shape_length, int jump_step, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            char pre, ret;
            pre = ((char*)NDArray)[index];
            i1[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((char*)NDArray)[index] * pre;
                pre = ret;
                i1[i] = pre;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            unsigned char pre, ret;
            pre = ((unsigned char*)NDArray)[index];
            u1[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned char*)NDArray)[index] * pre;
                pre = ret;
                u1[i] = pre;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            short pre, ret;
            pre = ((short*)NDArray)[index];
            i2[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((short*)NDArray)[index] * pre;
                pre = ret;
                i2[i] = pre;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            unsigned short pre, ret;
            pre = ((unsigned short*)NDArray)[index];
            u2[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned short*)NDArray)[index] * pre;
                pre = ret;
                u2[i] = pre;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            int pre, ret;
            pre = ((int*)NDArray)[index];
            i4[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((int*)NDArray)[index] * pre;
                pre = ret;
                i4[i] = pre;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            unsigned int pre, ret;
            pre = ((unsigned int*)NDArray)[index];
            u4[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned int*)NDArray)[index] * pre;
                pre = ret;
                u4[i] = pre;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            __int64 pre, ret;
            pre = ((__int64*)NDArray)[index];
            i8[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((__int64*)NDArray)[index] * pre;
                pre = ret;
                i8[i] = pre;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            unsigned __int64 pre, ret;
            pre = ((unsigned __int64*)NDArray)[index];
            u8[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned __int64*)NDArray)[index] * pre;
                pre = ret;
                u8[i] = pre;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            float pre, ret;
            pre = ((float*)NDArray)[index];
            f4[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((float*)NDArray)[index] * pre;
                pre = ret;
                f4[i] = pre;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            double pre, ret;
            pre = ((double*)NDArray)[index];
            f8[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((double*)NDArray)[index] * pre;
                pre = ret;
                f8[i] = pre;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            bool pre, ret;
            pre = ((bool*)NDArray)[index];
            bool_[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((bool*)NDArray)[index] * pre;
                pre = ret;
                bool_[i] = pre;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Cumprod(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            char pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((char*)NDArray)[index];
                i1[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((char*)NDArray)[index] * pre;
                    pre = ret;
                    i1[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            unsigned char pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned char*)NDArray)[index];
                u1[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned char*)NDArray)[index] * pre;
                    pre = ret;
                    u1[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            short pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((short*)NDArray)[index];
                i2[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((short*)NDArray)[index] * pre;
                    pre = ret;
                    i2[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            unsigned short pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned short*)NDArray)[index];
                u2[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned short*)NDArray)[index] * pre;
                    pre = ret;
                    u2[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            int pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((int*)NDArray)[index];
                i4[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((int*)NDArray)[index] * pre;
                    pre = ret;
                    i4[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            unsigned int pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned int*)NDArray)[index];
                u4[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned int*)NDArray)[index] * pre;
                    pre = ret;
                    u4[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            __int64 pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((__int64*)NDArray)[index];
                i8[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((__int64*)NDArray)[index] * pre;
                    pre = ret;
                    i8[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            unsigned __int64 pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned __int64*)NDArray)[index];
                u8[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned __int64*)NDArray)[index] * pre;
                    pre = ret;
                    u8[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            float pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((float*)NDArray)[index];
                f4[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((float*)NDArray)[index] * pre;
                    pre = ret;
                    f4[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            double pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((double*)NDArray)[index];
                f8[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((double*)NDArray)[index] * pre;
                    pre = ret;
                    f8[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            bool pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((bool*)NDArray)[index];
                bool_[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((bool*)NDArray)[index] * pre;
                    pre = ret;
                    bool_[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Cumsum_(int* NDArray, __int64* shape, int shape_length, int jump_step, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            char pre, ret;
            pre = ((char*)NDArray)[index];
            i1[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((char*)NDArray)[index] + pre;
                pre = ret;
                i1[i] = pre;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            unsigned char pre, ret;
            pre = ((unsigned char*)NDArray)[index];
            u1[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned char*)NDArray)[index] + pre;
                pre = ret;
                u1[i] = pre;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            short pre, ret;
            pre = ((short*)NDArray)[index];
            i2[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((short*)NDArray)[index] + pre;
                pre = ret;
                i2[i] = pre;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            unsigned short pre, ret;
            pre = ((unsigned short*)NDArray)[index];
            u2[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned short*)NDArray)[index] + pre;
                pre = ret;
                u2[i] = pre;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            int pre, ret;
            pre = ((int*)NDArray)[index];
            i4[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((int*)NDArray)[index] + pre;
                pre = ret;
                i4[i] = pre;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            unsigned int pre, ret;
            pre = ((unsigned int*)NDArray)[index];
            u4[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned int*)NDArray)[index] + pre;
                pre = ret;
                u4[i] = pre;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            __int64 pre, ret;
            pre = ((__int64*)NDArray)[index];
            i8[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((__int64*)NDArray)[index] + pre;
                pre = ret;
                i8[i] = pre;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            unsigned __int64 pre, ret;
            pre = ((unsigned __int64*)NDArray)[index];
            u8[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((unsigned __int64*)NDArray)[index] + pre;
                pre = ret;
                u8[i] = pre;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            float pre, ret;
            pre = ((float*)NDArray)[index];
            f4[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((float*)NDArray)[index] + pre;
                pre = ret;
                f4[i] = pre;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            double pre, ret;
            pre = ((double*)NDArray)[index];
            f8[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((double*)NDArray)[index] + pre;
                pre = ret;
                f8[i] = pre;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            bool pre, ret;
            pre = ((bool*)NDArray)[index];
            bool_[0] = pre;
            index += jump_step;
            for (i = 1; i < length; i++, index += jump_step)
            {
                index = (index + index / length) % length;
                ret = ((bool*)NDArray)[index] + pre;
                pre = ret;
                bool_[i] = pre;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Cumsum(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            char pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((char*)NDArray)[index];
                i1[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((char*)NDArray)[index] + pre;
                    pre = ret;
                    i1[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            unsigned char pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned char*)NDArray)[index];
                u1[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned char*)NDArray)[index] + pre;
                    pre = ret;
                    u1[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            short pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((short*)NDArray)[index];
                i2[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((short*)NDArray)[index] + pre;
                    pre = ret;
                    i2[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            unsigned short pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned short*)NDArray)[index];
                u2[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned short*)NDArray)[index] + pre;
                    pre = ret;
                    u2[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            int pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((int*)NDArray)[index];
                i4[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((int*)NDArray)[index] + pre;
                    pre = ret;
                    i4[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            unsigned int pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned int*)NDArray)[index];
                u4[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned int*)NDArray)[index] + pre;
                    pre = ret;
                    u4[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            __int64 pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((__int64*)NDArray)[index];
                i8[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((__int64*)NDArray)[index] + pre;
                    pre = ret;
                    i8[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            unsigned __int64 pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((unsigned __int64*)NDArray)[index];
                u8[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned __int64*)NDArray)[index] + pre;
                    pre = ret;
                    u8[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            float pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((float*)NDArray)[index];
                f4[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((float*)NDArray)[index] + pre;
                    pre = ret;
                    f4[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            double pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((double*)NDArray)[index];
                f8[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((double*)NDArray)[index] + pre;
                    pre = ret;
                    f8[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            bool pre, ret;
            for (i = 0; i < loop_times; i++)
            {
                pre = ((bool*)NDArray)[index];
                bool_[index] = pre;
                index += jump_step;
                for (j = 1; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((bool*)NDArray)[index] + pre;
                    pre = ret;
                    bool_[index] = pre;
                }
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Diag(int* NDArray, int arr_length, int length, int offset, int type)
{
    int i, index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length * length);
            for (i = 0; i < length * length; i++)
                i1[i] = 0;
            for (i = 0; i < arr_length; i++)
                i1[offset + i * (length + 1)] = ((char*)NDArray)[i];
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length * length);
            for (i = 0; i < length * length; i++)
                u1[i] = 0;
            for (i = 0; i < arr_length; i++)
                u1[offset + i * (length + 1)] = ((unsigned char*)NDArray)[i];
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length * length);
            for (i = 0; i < length * length; i++)
                i2[i] = 0;
            for (i = 0; i < arr_length; i++)
                i2[offset + i * (length + 1)] = ((short*)NDArray)[i];
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length * length);
            for (i = 0; i < length * length; i++)
                u2[i] = 0;
            for (i = 0; i < arr_length; i++)
                u2[offset + i * (length + 1)] = ((unsigned short*)NDArray)[i];
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length * length);
            for (i = 0; i < length * length; i++)
                i4[i] = 0;
            for (i = 0; i < arr_length; i++)
                i4[offset + i * (length + 1)] = ((int*)NDArray)[i];
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length * length);
            for (i = 0; i < length * length; i++)
                u4[i] = 0;
            for (i = 0; i < arr_length; i++)
                u4[offset + i * (length + 1)] = ((unsigned int*)NDArray)[i];
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length * length);
            for (i = 0; i < length * length; i++)
                i8[i] = 0;
            for (i = 0; i < arr_length; i++)
                i8[offset + i * (length + 1)] = ((__int64*)NDArray)[i];
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length * length);
            for (i = 0; i < length * length; i++)
                u8[i] = 0;
            for (i = 0; i < arr_length; i++)
                u8[offset + i * (length + 1)] = ((unsigned __int64*)NDArray)[i];
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length * length);
            for (i = 0; i < length * length; i++)
                f4[i] = 0;
            for (i = 0; i < arr_length; i++)
                f4[offset + i * (length + 1)] = ((float*)NDArray)[i];
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length * length);
            for (i = 0; i < length * length; i++)
                f8[i] = 0;
            for (i = 0; i < arr_length; i++)
                f8[offset + i * (length + 1)] = ((double*)NDArray)[i];
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length * length);
            for (i = 0; i < length * length; i++)
                bool_[i] = 0;
            for (i = 0; i < arr_length; i++)
                bool_[offset + i * (length + 1)] = ((bool*)NDArray)[i];
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Diagonal(int* NDArray, __int64* shape, __int64* strides, int shape_length, int jump_step, int axis_length, int length, int offset, int type)
{
    int i, j, k, index, pos = 0, length_c = 1;
    int* now_pos = (int*)malloc(sizeof(int) * shape_length);
    int* max_pos = (int*)malloc(sizeof(int) * shape_length);
    int* tmp_strides = (int*)malloc(sizeof(int) * shape_length);
    for (i = 0; i < shape_length; i++)
    {
        length_c *= (*shape);
        now_pos[i] = 1;
        max_pos[i] = (*shape);
        tmp_strides[i] = (*strides);
        shape += 2;
        strides += 2;
    }
    now_pos[shape_length - 1] = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    i1[pos++] = ((char*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    u1[pos++] = ((unsigned char*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    i2[pos++] = ((short*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    u2[pos++] = ((unsigned short*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    i4[pos++] = ((int*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    u4[pos++] = ((unsigned int*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    i8[pos++] = ((__int64*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    u8[pos++] = ((unsigned __int64*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    f4[pos++] = ((float*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    f8[pos++] = ((double*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < length_c; i++)
            {
                index = offset;
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                for (k = 0; k < shape_length; k++)
                    index += tmp_strides[k] * (now_pos[k] - 1);
                for (j = 0; j < axis_length; j++, index += jump_step)
                    bool_[pos++] = ((bool*)NDArray)[index];
            }
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return (int*)bool_;
        }
        default:
        {
            free(now_pos);
            free(max_pos);
            free(tmp_strides);
            return 0;
        }
    }
}

NUMAHK_API int* NDArray_Dot(int* NDArray1, int* NDArray2, __int64* shape1, __int64* shape2, __int64* strides1, __int64* strides2, int shape_length1, int shape_length2, int jump_step1, int jump_step2, int arr_length, int type1, int type2, int new_type)
{
    int i, j, k, index1, index2, index = 0, length1 = 1, length2 = 1;
    int* now_pos1 = (int*)malloc(sizeof(int) * shape_length1);
    int* now_pos2 = (int*)malloc(sizeof(int) * shape_length2);
    int* max_pos1 = (int*)malloc(sizeof(int) * shape_length1);
    int* max_pos2 = (int*)malloc(sizeof(int) * shape_length2);
    int* tmp_strides1 = (int*)malloc(sizeof(int) * shape_length1);
    int* tmp_strides2 = (int*)malloc(sizeof(int) * shape_length2);
    for (i = 0; i < shape_length1; i++)
    {
        length1 *= (*shape1);
        now_pos1[i] = 1;
        max_pos1[i] = (*shape1);
        tmp_strides1[i] = (*strides1);
        shape1 += 2;
        strides1 += 2;
    }
    for (i = 0; i < shape_length2; i++)
    {
        length2 *= (*shape2);
        now_pos2[i] = 1;
        max_pos2[i] = (*shape2);
        tmp_strides2[i] = (*strides2);
        shape2 += 2;
        strides2 += 2;
    }
    int* tmp_ndarray1 = NDArray_Change(NDArray1, length1 * arr_length, type1, new_type);
    int* tmp_ndarray2 = NDArray_Change(NDArray2, length2 * arr_length, type2, new_type);
    now_pos1[shape_length1 - 1] = 0;
    now_pos2[shape_length2 - 1] = 0;
    switch (new_type)
    {
        case 0:
        {
            char ret;
            i1 = (char*)malloc(sizeof(char) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((char*)tmp_ndarray1)[index1 + k * jump_step1] * ((char*)tmp_ndarray2)[index2 + k * jump_step2];
                    i1[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i1;
        }
        case 1:
        {
            unsigned char ret;
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((unsigned char*)tmp_ndarray1)[index1 + k * jump_step1] * ((unsigned char*)tmp_ndarray2)[index2 + k * jump_step2];
                    u1[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u1;
        }
        case 2:
        {
            short ret;
            i2 = (short*)malloc(sizeof(short) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((short*)tmp_ndarray1)[index1 + k * jump_step1] * ((short*)tmp_ndarray2)[index2 + k * jump_step2];
                    i2[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i2;
        }
        case 3:
        {
            unsigned short ret;
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((unsigned short*)tmp_ndarray1)[index1 + k * jump_step1] * ((unsigned short*)tmp_ndarray2)[index2 + k * jump_step2];
                    u2[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u2;
        }
        case 4:
        {
            int ret;
            i4 = (int*)malloc(sizeof(int) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((int*)tmp_ndarray1)[index1 + k * jump_step1] * ((int*)tmp_ndarray2)[index2 + k * jump_step2];
                    i4[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i4;
        }
        case 5:
        {
            unsigned int ret;
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((unsigned int*)tmp_ndarray1)[index1 + k * jump_step1] * ((unsigned int*)tmp_ndarray2)[index2 + k * jump_step2];
                    u4[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u4;
        }
        case 6:
        {
            __int64 ret;
            i8 = (__int64*)malloc(sizeof(__int64) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((__int64*)tmp_ndarray1)[index1 + k * jump_step1] * ((__int64*)tmp_ndarray2)[index2 + k * jump_step2];
                    i8[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i8;
        }
        case 7:
        {
            unsigned __int64 ret;
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((unsigned __int64*)tmp_ndarray1)[index1 + k * jump_step1] * ((unsigned __int64*)tmp_ndarray2)[index2 + k * jump_step2];
                    u8[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u8;
        }
        case 9:
        {
            float ret;
            f4 = (float*)malloc(sizeof(float) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((float*)tmp_ndarray1)[index1 + k * jump_step1] * ((float*)tmp_ndarray2)[index2 + k * jump_step2];
                    f4[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)f4;
        }
        case 10:
        {
            double ret;
            f8 = (double*)malloc(sizeof(double) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((double*)tmp_ndarray1)[index1 + k * jump_step1] * ((double*)tmp_ndarray2)[index2 + k * jump_step2];
                    f8[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)f8;
        }
        case 15:
        {
            bool ret;
            bool_ = (bool*)malloc(sizeof(bool) * length1 * length2);
            for (i = 0; i < length1; i++)
            {
                NUMAHK_POS_MACHINE(now_pos1, max_pos1, shape_length1);
                index1 = 0;
                for (k = 0; k < shape_length1; k++)
                    index1 += tmp_strides1[k] * (now_pos1[k] - 1);
                for (j = 0; j < length2; j++)
                {
                    NUMAHK_POS_MACHINE(now_pos2, max_pos2, shape_length2);
                    index2 = 0;
                    ret = 0;
                    for (k = 0; k < shape_length2; k++)
                        index2 += tmp_strides2[k] * (now_pos2[k] - 1);
                    for (k = 0; k < arr_length; k++)
                        ret += ((bool*)tmp_ndarray1)[index1 + k * jump_step1] * ((bool*)tmp_ndarray2)[index2 + k * jump_step2];
                    bool_[index++] = ret;
                }
                for (k = 0; k < shape_length2; k++)
                    now_pos2[k] = 1;
                now_pos2[shape_length2 - 1] = 0;
            }
            free(now_pos1);
            free(now_pos2);
            free(max_pos1);
            free(max_pos2);
            free(tmp_strides1);
            free(tmp_strides2);
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Divide(int* NDArray1, int* NDArray2, int type1, int type2, int length, int new_type)
{
    int* tmp_ndarray1 = NDArray_Change(NDArray1, length, type1, new_type);
    int* tmp_ndarray2 = NDArray_Change(NDArray2, length, type2, new_type);
    switch (new_type)
    {
    case 0:
    {
        i1 = (char*)malloc(sizeof(char) * length);
        for (int i = 0; i < length; i++)
            i1[i] = ((char*)tmp_ndarray1)[i] / ((char*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i1;
    }
    case 1:
    {
        u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
        for (int i = 0; i < length; i++)
            u1[i] = ((unsigned char*)tmp_ndarray1)[i] / ((unsigned char*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u1;
    }
    case 2:
    {
        i2 = (short*)malloc(sizeof(short) * length);
        for (int i = 0; i < length; i++)
            i2[i] = ((short*)tmp_ndarray1)[i] / ((short*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i2;
    }
    case 3:
    {
        u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
        for (int i = 0; i < length; i++)
            u2[i] = ((unsigned short*)tmp_ndarray1)[i] / ((unsigned short*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u2;
    }
    case 4:
    {
        i4 = (int*)malloc(sizeof(int) * length);
        for (int i = 0; i < length; i++)
            i4[i] = ((int*)tmp_ndarray1)[i] / ((int*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i4;
    }
    case 5:
    {
        u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
        for (int i = 0; i < length; i++)
            u4[i] = ((unsigned int*)tmp_ndarray1)[i] / ((unsigned int*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u4;
    }
    case 6:
    {
        i8 = (__int64*)malloc(sizeof(__int64) * length);
        for (int i = 0; i < length; i++)
            i8[i] = ((__int64*)tmp_ndarray1)[i] / ((__int64*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i8;
    }
    case 7:
    {
        u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
        for (int i = 0; i < length; i++)
            u8[i] = ((unsigned __int64*)tmp_ndarray1)[i] / ((unsigned __int64*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u8;
    }
    case 9:
    {
        f4 = (float*)malloc(sizeof(float) * length);
        for (int i = 0; i < length; i++)
            f4[i] = ((float*)tmp_ndarray1)[i] / ((float*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)f4;
    }
    case 10:
    {
        f8 = (double*)malloc(sizeof(double) * length);
        for (int i = 0; i < length; i++)
            f8[i] = ((double*)tmp_ndarray1)[i] / ((double*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)f8;
    }
    case 15:
    {
        bool_ = (bool*)malloc(sizeof(bool) * length);
        for (int i = 0; i < length; i++)
            bool_[i] = ((bool*)tmp_ndarray1)[i] / ((bool*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)bool_;
    }
    default:
        return 0;
    }
}

NUMAHK_API void NDArray_Dump(int* NDArray, int length, int type, const char* filename)
{
    FILE* fid;
    fopen_s(&fid, filename, "wb");
    switch (type)
    {
        case 0:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%d ", ((char*)NDArray)[i]);
            break;
        }
        case 1:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%u ", ((unsigned char*)NDArray)[i]);
            break;
        }
        case 2:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%d ", ((short*)NDArray)[i]);
            break;
        }
        case 3:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%u ", ((unsigned short*)NDArray)[i]);
            break;
        }
        case 4:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%d ", ((int*)NDArray)[i]);
            break;
        }
        case 5:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%u ", ((unsigned int*)NDArray)[i]);
            break;
        }
        case 6:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%lld ", ((__int64*)NDArray)[i]);
            break;
        }
        case 7:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%llu ", ((unsigned __int64*)NDArray)[i]);
            break;
        }
        case 9:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%f ", ((float*)NDArray)[i]);
            break;
        }
        case 10:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%f ", ((double*)NDArray)[i]);
            break;
        }
        case 15:
        {
            for (int i = 0; i < length; i++)
                fprintf(fid, "%d ", ((bool*)NDArray)[i]);
            break;
        }
        default:
            break;
    }
    fclose(fid);
}

NUMAHK_API int* NDArray_Load(int length, int type, const char* filename)
{
    FILE* fid;
    fopen_s(&fid, filename, "rb");
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%d ", &((char*)i1)[i]);
            fclose(fid);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%u ", &((unsigned char*)u1)[i]);
            fclose(fid);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%d ", &((short*)i2)[i]);
            fclose(fid);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%u ", &((unsigned short*)u2)[i]);
            fclose(fid);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%d ", &((int*)i4)[i]);
            fclose(fid);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%u ", &((unsigned int*)u4)[i]);
            fclose(fid);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%lld ", &((__int64*)i8)[i]);
            fclose(fid);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%llu ", &((unsigned __int64*)u8)[i]);
            fclose(fid);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%f ", &((float*)f4)[i]);
            fclose(fid);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%lf ", &((double*)f8)[i]);
            fclose(fid);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (int i = 0; i < length; i++)
                fscanf_s(fid, "%d ", &((bool*)bool_)[i]);
            fclose(fid);
            return (int*)bool_;
        }
        default:
        {
            fclose(fid);
            return 0;
        }
    }
}

NUMAHK_API int* NDArray_Max_(int* NDArray, __int64* shape, int shape_length, int type)
{
    int i, max_index;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((char*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i1[0] = max_num;
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            unsigned char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned char*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u1[0] = max_num;
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((short*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i2[0] = max_num;
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            unsigned short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned short*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u2[0] = max_num;
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((int*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i4[0] = max_num;
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            unsigned int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned int*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u4[0] = max_num;
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((__int64*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i8[0] = max_num;
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            unsigned __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned __int64*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u8[0] = max_num;
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            float max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((float*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            f4[0] = max_num;
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            double max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((double*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            f8[0] = max_num;
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool));
            bool max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((bool*)NDArray)[i];
                if (i == 0 || ret > max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            bool_[0] = max_num;
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Max(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    int i, j, max_index;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * loop_times);
            char max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((char*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i1[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * loop_times);
            unsigned char max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned char*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                u1[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * loop_times);
            short max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((short*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i2[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * loop_times);
            unsigned short max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned short*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                    index = (index + index / length) % length;
                }
                u2[i] = max_num;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * loop_times);
            int max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((int*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i4[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * loop_times);
            unsigned int max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned int*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                u4[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
            __int64 max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((__int64*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                i8[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * loop_times);
            unsigned __int64 max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned __int64*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                u8[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * loop_times);
            float max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((float*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                f4[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * loop_times);
            double max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((double*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                f8[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * loop_times);
            bool max_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((bool*)NDArray)[index];
                    if (j == 0 || ret > max_num)
                    {
                        max_index = j;
                        max_num = ret;
                    }
                }
                bool_[i] = max_num;
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Mean_(int* NDArray, __int64* shape, int shape_length, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            char mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((char*)NDArray)[i];
            i1[0] = mean_num / length;
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            unsigned char mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned char*)NDArray)[i];
            u1[0] = mean_num / length;
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            short mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((short*)NDArray)[i];
            i2[0] = mean_num / length;
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            unsigned short mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned short*)NDArray)[i];
            u2[0] = mean_num / length;
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            int mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((int*)NDArray)[i];
            i4[0] = mean_num / length;
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            unsigned int mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned int*)NDArray)[i];
            u4[0] = mean_num / length;
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            __int64 mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((__int64*)NDArray)[i];
            i8[0] = mean_num / length;
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            unsigned __int64 mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned __int64*)NDArray)[i];
            u8[0] = mean_num / length;
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            float mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((float*)NDArray)[i];
            f4[0] = mean_num / length;
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            double mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((double*)NDArray)[i];
            f8[0] = mean_num / length;
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool));
            bool mean_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((bool*)NDArray)[i];
            bool_[0] = mean_num / length;
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Mean(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * loop_times);
            char mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((char*)NDArray)[index];
                i1[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * loop_times);
            unsigned char mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned char*)NDArray)[index];
                u1[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * loop_times);
            short mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((short*)NDArray)[index];
                i2[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * loop_times);
            unsigned short mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned short*)NDArray)[index];
                u2[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * loop_times);
            int mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((int*)NDArray)[index];
                i4[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * loop_times);
            unsigned int mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned int*)NDArray)[index];
                u4[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
            __int64 mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((__int64*)NDArray)[index];
                i8[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * loop_times);
            unsigned __int64 mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned __int64*)NDArray)[index];
                u8[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * loop_times);
            float mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((float*)NDArray)[index];
                f4[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * loop_times);
            double mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((double*)NDArray)[index];
                f8[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * loop_times);
            bool mean_num;
            for (i = 0; i < loop_times; i++)
            {
                mean_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((bool*)NDArray)[index];
                bool_[i] = mean_num / (length / loop_times);
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Min_(int* NDArray, __int64* shape, int shape_length, int type)
{
    int i, max_index;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((char*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i1[0] = max_num;
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            unsigned char max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned char*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u1[0] = max_num;
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((short*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i2[0] = max_num;
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            unsigned short max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned short*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u2[0] = max_num;
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((int*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i4[0] = max_num;
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            unsigned int max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned int*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u4[0] = max_num;
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((__int64*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            i8[0] = max_num;
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            unsigned __int64 max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((unsigned __int64*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            u8[0] = max_num;
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            float max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((float*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            f4[0] = max_num;
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            double max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((double*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            f8[0] = max_num;
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool));
            bool max_num, ret;
            for (i = 0; i < length; i++)
            {
                ret = ((bool*)NDArray)[i];
                if (i == 0 || ret < max_num)
                {
                    max_index = i;
                    max_num = ret;
                }
            }
            bool_[0] = max_num;
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Min(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    int i, j, min_index;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * loop_times);
            char min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((char*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                i1[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * loop_times);
            unsigned char min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned char*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                u1[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * loop_times);
            short min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((short*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                i2[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * loop_times);
            unsigned short min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned short*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                u2[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * loop_times);
            int min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((int*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                i4[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * loop_times);
            unsigned int min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned int*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                u4[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
            __int64 min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((__int64*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                i8[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * loop_times);
            unsigned __int64 min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((unsigned __int64*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                u8[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * loop_times);
            float min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((float*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                f4[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * loop_times);
            double min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((double*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                f8[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * loop_times);
            bool min_num, ret;
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                {
                    ret = ((bool*)NDArray)[index];
                    if (j == 0 || ret < min_num)
                    {
                        min_index = j;
                        min_num = ret;
                    }
                }
                bool_[i] = min_num;
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Multiply(int* NDArray1, int* NDArray2, int type1, int type2, int length, int new_type)
{
    int* tmp_ndarray1 = NDArray_Change(NDArray1, length, type1, new_type);
    int* tmp_ndarray2 = NDArray_Change(NDArray2, length, type2, new_type);
    switch (new_type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (int i = 0; i < length; i++)
                i1[i] = ((char*)tmp_ndarray1)[i] * ((char*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (int i = 0; i < length; i++)
                u1[i] = ((unsigned char*)tmp_ndarray1)[i] * ((unsigned char*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (int i = 0; i < length; i++)
                i2[i] = ((short*)tmp_ndarray1)[i] * ((short*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (int i = 0; i < length; i++)
                u2[i] = ((unsigned short*)tmp_ndarray1)[i] * ((unsigned short*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (int i = 0; i < length; i++)
                i4[i] = ((int*)tmp_ndarray1)[i] * ((int*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (int i = 0; i < length; i++)
                u4[i] = ((unsigned int*)tmp_ndarray1)[i] * ((unsigned int*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (int i = 0; i < length; i++)
                i8[i] = ((__int64*)tmp_ndarray1)[i] * ((__int64*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (int i = 0; i < length; i++)
                u8[i] = ((unsigned __int64*)tmp_ndarray1)[i] * ((unsigned __int64*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (int i = 0; i < length; i++)
                f4[i] = ((float*)tmp_ndarray1)[i] * ((float*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (int i = 0; i < length; i++)
                f8[i] = ((double*)tmp_ndarray1)[i] * ((double*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (int i = 0; i < length; i++)
                bool_[i] = ((bool*)tmp_ndarray1)[i] * ((bool*)tmp_ndarray2)[i];
            NDArray_Free(tmp_ndarray1, new_type);
            NDArray_Free(tmp_ndarray2, new_type);
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Partition(int* NDArray, __int64* shape, int shape_length, int jump_step, int kth, int axis, int type)
{
    int i, j, max_index;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        else
            kth = (kth > (*shape)) ? kth : (*shape) - 1;
        shape += 2;
    }
    int index = 0;
    int new_index = 0;
    __int64 _loop_times = length / loop_times;
    __int64* tmp_index = (__int64*)NUMAHK_RANGE(0, _loop_times, 1, 6);
    __int64* _index = (__int64*)malloc(sizeof(__int64) * _loop_times);
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * _loop_times);
            char* partition = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    i1[j] = ((char*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)i1, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = i1[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(i1);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * _loop_times);
            unsigned char* partition = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    u1[j] = ((unsigned char*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)u1, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = u1[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(u1);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * _loop_times);
            short* partition = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    i2[j] = ((short*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)i2, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = i2[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(i2);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * _loop_times);
            unsigned short* partition = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    u2[j] = ((unsigned short*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)u2, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = u2[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(u2);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * _loop_times);
            int* partition = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    i4[j] = ((int*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)i4, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = i4[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(i4);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * _loop_times);
            unsigned int* partition = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    u4[j] = ((unsigned int*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)u4, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = u4[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(u4);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * _loop_times);
            __int64* partition = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    i8[j] = ((__int64*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)i8, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = i8[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(i8);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * _loop_times);
            unsigned __int64* partition = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    u8[j] = ((unsigned __int64*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)u8, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = u8[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(u8);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * _loop_times);
            float* partition = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    f4[j] = ((float*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)f4, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = f4[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(f4);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * _loop_times);
            double* partition = (double*)malloc(sizeof(double) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    f8[j] = ((double*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)f8, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = f8[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(f8);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * _loop_times);
            bool* partition = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < loop_times; i++)
            {
                for (j = 0; j < _loop_times; j++, index += jump_step)
                {
                    bool_[j] = ((bool*)NDArray)[index];
                    _index[j] = tmp_index[j];
                }
                partitionSort((int*)bool_, _index, 0, kth, type);
                for (j = 0; j < _loop_times; j++, new_index += jump_step)
                    partition[new_index] = bool_[j];
                index = (index + index / length) % length;
                new_index = (new_index + new_index / length) % length;
            }
            free(bool_);
            free(tmp_index);
            free(_index);
            return (int*)partition;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Prod_(int* NDArray, __int64* shape, int shape_length, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            char prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((char*)NDArray)[i];
            i1[0] = prod_num;
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            unsigned char prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((unsigned char*)NDArray)[i];
            u1[0] = prod_num;
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            short prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((short*)NDArray)[i];
            i2[0] = prod_num;
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            unsigned short prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((unsigned short*)NDArray)[i];
            u2[0] = prod_num;
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            int prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((int*)NDArray)[i];
            i4[0] = prod_num;
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            unsigned int prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((unsigned int*)NDArray)[i];
            u4[0] = prod_num;
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            __int64 prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((__int64*)NDArray)[i];
            i8[0] = prod_num;
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            unsigned __int64 prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((unsigned __int64*)NDArray)[i];
            u8[0] = prod_num;
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            float prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((float*)NDArray)[i];
            f4[0] = prod_num;
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            double prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((double*)NDArray)[i];
            f8[0] = prod_num;
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool));
            bool prod_num = 1;
            for (i = 0; i < length; i++)
                prod_num *= ((bool*)NDArray)[i];
            bool_[0] = prod_num;
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Prod(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * loop_times);
            char prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((char*)NDArray)[index];
                i1[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * loop_times);
            unsigned char prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((unsigned char*)NDArray)[index];
                u1[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * loop_times);
            short prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((short*)NDArray)[index];
                i2[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * loop_times);
            unsigned short prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((unsigned short*)NDArray)[index];
                u2[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * loop_times);
            int prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((int*)NDArray)[index];
                i4[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * loop_times);
            unsigned int prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((unsigned int*)NDArray)[index];
                u4[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
            __int64 prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((__int64*)NDArray)[index];
                i8[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * loop_times);
            unsigned __int64 prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((unsigned __int64*)NDArray)[index];
                u8[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * loop_times);
            float prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((float*)NDArray)[index];
                f4[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * loop_times);
            double prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((double*)NDArray)[index];
                f8[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * loop_times);
            bool prod_num;
            for (i = 0; i < loop_times; i++)
            {
                prod_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    prod_num *= ((bool*)NDArray)[index];
                bool_[i] = prod_num;
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API void NDArray_Print(int* NDArray, __int64* shape, int shape_length, int jump_step, int length, int type, const char* DIMS_INTERVAL, const char* IN_DIMS_INTERVAL)
{
    int i, j, change_times;
    int* now_pos = (int*)malloc(sizeof(int) * shape_length);
    int* max_pos = (int*)malloc(sizeof(int) * shape_length);
    for (i = 0; i < shape_length; i++)
    {
        now_pos[i] = 1;
        max_pos[i] = (*shape);
        shape += 2;
    }
    FILE* fid;
    fopen_s(&fid, "NUMAHK_NDArray_Print.tmp", "w");
    int index = 0;
    for (i = 0; i < shape_length; i++)
        fprintf(fid, "%s", "[");
    switch (type)
    {
        case 0:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%d", ((char*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 1:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%u", ((unsigned char*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 2:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%d", ((short*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 3:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%u", ((unsigned short*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 4:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%d", ((int*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 5:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%u", ((unsigned int*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 6:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%lld", ((__int64*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 7:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%llu", ((unsigned __int64*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 9:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%f", ((float*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 10:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%f", ((double*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
        case 15:
        {
            for (i = 0; i < length; i++, index += jump_step)
            {
                change_times = NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                fprintf(fid, "%d", ((bool*)NDArray)[index]);
                for (j = 0; j < change_times; j++)
                    fprintf(fid, "%s", "]");
                if (i != length - 1)
                {
                    fprintf(fid, "%s", change_times ? DIMS_INTERVAL : IN_DIMS_INTERVAL);
                    for (j = 0; j < change_times; j++)
                        fprintf(fid, "%s", "[");
                }
                index = (index + index / length) % length;
            }
            break;
        }
    }
    free(now_pos);
    free(max_pos);
    fclose(fid);
}

NUMAHK_API int NDArray_Searchsorted(int* NDArray, double value, int return_type, int length, int type)
{
    f8 = (double*)NDArray_Change(NDArray, length, type, 10);
    int ret = searchInsert(f8, value, length, return_type);
    free(f8);
    return ret;
}

NUMAHK_API int* NDArray_Std_(int* NDArray, __int64* shape, int shape_length, int ddof, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            char mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((char*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((char*)NDArray)[i] - mean_num, 2);
            i1[0] = sqrt(std_num / (length - ddof));
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            unsigned char mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned char*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned char*)NDArray)[i] - mean_num, 2);
            u1[0] = sqrt(std_num / (length - ddof));
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            short mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((short*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((short*)NDArray)[i] - mean_num, 2);
            i2[0] = sqrt(std_num / (length - ddof));
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            unsigned short mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned short*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned short*)NDArray)[i] - mean_num, 2);
            u2[0] = sqrt(std_num / (length - ddof));
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            int mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((int*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((int*)NDArray)[i] - mean_num, 2);
            i4[0] = sqrt(std_num / (length - ddof));
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            unsigned int mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned int*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned int*)NDArray)[i] - mean_num, 2);
            u4[0] = sqrt(std_num / (length - ddof));
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            __int64 mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((__int64*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((__int64*)NDArray)[i] - mean_num, 2);
            i8[0] = sqrt(std_num / (length - ddof));
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            unsigned __int64 mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned __int64*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned __int64*)NDArray)[i] - mean_num, 2);
            u8[0] = sqrt(std_num / (length - ddof));
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            float mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((float*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((float*)NDArray)[i] - mean_num, 2);
            f4[0] = sqrt(std_num / (length - ddof));
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            double mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((double*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((double*)NDArray)[i] - mean_num, 2);
            f8[0] = sqrt(std_num / (length - ddof));
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool));
            bool mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((bool*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((bool*)NDArray)[i] - mean_num, 2);
            bool_[0] = sqrt(std_num / (length - ddof));
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Std(int* NDArray, __int64* shape, int shape_length, int ddof, int jump_step, int axis, int type)
{
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0, tmp_index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * loop_times);
            char mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((char*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((char*)NDArray)[index] - mean_num, 2);
                i1[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * loop_times);
            unsigned char mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned char*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned char*)NDArray)[index] - mean_num, 2);
                u1[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * loop_times);
            short mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((short*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((short*)NDArray)[index] - mean_num, 2);
                i2[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * loop_times);
            unsigned short mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned short*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned short*)NDArray)[index] - mean_num, 2);
                u2[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * loop_times);
            int mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((int*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((int*)NDArray)[index] - mean_num, 2);
                i4[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * loop_times);
            unsigned int mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned int*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned int*)NDArray)[index] - mean_num, 2);
                u4[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
            __int64 mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((__int64*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((__int64*)NDArray)[index] - mean_num, 2);
                i8[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * loop_times);
            unsigned __int64 mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned __int64*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned __int64*)NDArray)[index] - mean_num, 2);
                u8[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * loop_times);
            float mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((float*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((float*)NDArray)[index] - mean_num, 2);
                f4[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * loop_times);
            double mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((double*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((double*)NDArray)[index] - mean_num, 2);
                f8[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * loop_times);
            bool mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((bool*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((bool*)NDArray)[index] - mean_num, 2);
                bool_[i] = sqrt(std_num / (length - ddof));
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Subtract(int* NDArray1, int* NDArray2, int type1, int type2, int length, int new_type)
{
    int* tmp_ndarray1 = NDArray_Change(NDArray1, length, type1, new_type);
    int* tmp_ndarray2 = NDArray_Change(NDArray2, length, type2, new_type);
    switch (new_type)
    {
    case 0:
    {
        i1 = (char*)malloc(sizeof(char) * length);
        for (int i = 0; i < length; i++)
            i1[i] = ((char*)tmp_ndarray1)[i] - ((char*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i1;
    }
    case 1:
    {
        u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
        for (int i = 0; i < length; i++)
            u1[i] = ((unsigned char*)tmp_ndarray1)[i] - ((unsigned char*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u1;
    }
    case 2:
    {
        i2 = (short*)malloc(sizeof(short) * length);
        for (int i = 0; i < length; i++)
            i2[i] = ((short*)tmp_ndarray1)[i] - ((short*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i2;
    }
    case 3:
    {
        u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
        for (int i = 0; i < length; i++)
            u2[i] = ((unsigned short*)tmp_ndarray1)[i] - ((unsigned short*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u2;
    }
    case 4:
    {
        i4 = (int*)malloc(sizeof(int) * length);
        for (int i = 0; i < length; i++)
            i4[i] = ((int*)tmp_ndarray1)[i] - ((int*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i4;
    }
    case 5:
    {
        u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
        for (int i = 0; i < length; i++)
            u4[i] = ((unsigned int*)tmp_ndarray1)[i] - ((unsigned int*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u4;
    }
    case 6:
    {
        i8 = (__int64*)malloc(sizeof(__int64) * length);
        for (int i = 0; i < length; i++)
            i8[i] = ((__int64*)tmp_ndarray1)[i] - ((__int64*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)i8;
    }
    case 7:
    {
        u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
        for (int i = 0; i < length; i++)
            u8[i] = ((unsigned __int64*)tmp_ndarray1)[i] - ((unsigned __int64*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)u8;
    }
    case 9:
    {
        f4 = (float*)malloc(sizeof(float) * length);
        for (int i = 0; i < length; i++)
            f4[i] = ((float*)tmp_ndarray1)[i] - ((float*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)f4;
    }
    case 10:
    {
        f8 = (double*)malloc(sizeof(double) * length);
        for (int i = 0; i < length; i++)
            f8[i] = ((double*)tmp_ndarray1)[i] - ((double*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)f8;
    }
    case 15:
    {
        bool_ = (bool*)malloc(sizeof(bool) * length);
        for (int i = 0; i < length; i++)
            bool_[i] = ((bool*)tmp_ndarray1)[i] - ((bool*)tmp_ndarray2)[i];
        NDArray_Free(tmp_ndarray1, new_type);
        NDArray_Free(tmp_ndarray2, new_type);
        return (int*)bool_;
    }
    default:
        return 0;
    }
}

NUMAHK_API int* NDArray_Sum_(int* NDArray, __int64* shape, int shape_length, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            char sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((char*)NDArray)[i];
            i1[0] = sum_num;
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            unsigned char sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((unsigned char*)NDArray)[i];
            u1[0] = sum_num;
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            short sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((short*)NDArray)[i];
            i2[0] = sum_num;
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            unsigned short sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((unsigned short*)NDArray)[i];
            u2[0] = sum_num;
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            int sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((int*)NDArray)[i];
            i4[0] = sum_num;
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            unsigned int sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((unsigned int*)NDArray)[i];
            u4[0] = sum_num;
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            __int64 sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((__int64*)NDArray)[i];
            i8[0] = sum_num;
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            unsigned __int64 sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((unsigned __int64*)NDArray)[i];
            u8[0] = sum_num;
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            float sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((float*)NDArray)[i];
            f4[0] = sum_num;
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            double sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((double*)NDArray)[i];
            f8[0] = sum_num;
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool));
            bool sum_num = 1;
            for (i = 0; i < length; i++)
                sum_num += ((bool*)NDArray)[i];
            bool_[0] = sum_num;
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Sum(int* NDArray, __int64* shape, int shape_length, int jump_step, int axis, int type)
{
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * loop_times);
            char sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((char*)NDArray)[index];
                i1[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * loop_times);
            unsigned char sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((unsigned char*)NDArray)[index];
                u1[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * loop_times);
            short sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((short*)NDArray)[index];
                i2[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * loop_times);
            unsigned short sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((unsigned short*)NDArray)[index];
                u2[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * loop_times);
            int sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((int*)NDArray)[index];
                i4[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * loop_times);
            unsigned int sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((unsigned int*)NDArray)[index];
                u4[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
            __int64 sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((__int64*)NDArray)[index];
                i8[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * loop_times);
            unsigned __int64 sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((unsigned __int64*)NDArray)[index];
                u8[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * loop_times);
            float sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((float*)NDArray)[index];
                f4[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * loop_times);
            double sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((double*)NDArray)[index];
                f8[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * loop_times);
            bool sum_num;
            for (i = 0; i < loop_times; i++)
            {
                sum_num = 1;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    sum_num += ((bool*)NDArray)[index];
                bool_[i] = sum_num;
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Transpose(int* NDArray, __int64* shape, int shape_length, int jump_step, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < length; i++)
            {
                i1[i] = ((char*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < length; i++)
            {
                u1[i] = ((unsigned char*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < length; i++)
            {
                i2[i] = ((short*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < length; i++)
            {
                u2[i] = ((unsigned short*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < length; i++)
            {
                i4[i] = ((int*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < length; i++)
            {
                u4[i] = ((unsigned int*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < length; i++)
            {
                i8[i] = ((__int64*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < length; i++)
            {
                u8[i] = ((unsigned __int64*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < length; i++)
            {
                f4[i] = ((float*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (i = 0; i < length; i++)
            {
                f8[i] = ((double*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < length; i++)
            {
                bool_[i] = ((bool*)NDArray)[index];
                index += jump_step;
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Var_(int* NDArray, __int64* shape, int shape_length, int ddof, int type)
{
    int i;
    __int64 length = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        shape += 2;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char));
            char mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((char*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((char*)NDArray)[i] - mean_num, 2);
            i1[0] = std_num / (length - ddof);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char));
            unsigned char mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned char*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned char*)NDArray)[i] - mean_num, 2);
            u1[0] = std_num / (length - ddof);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short));
            short mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((short*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((short*)NDArray)[i] - mean_num, 2);
            i2[0] = std_num / (length - ddof);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short));
            unsigned short mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned short*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned short*)NDArray)[i] - mean_num, 2);
            u2[0] = std_num / (length - ddof);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int));
            int mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((int*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((int*)NDArray)[i] - mean_num, 2);
            i4[0] = std_num / (length - ddof);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int));
            unsigned int mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned int*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned int*)NDArray)[i] - mean_num, 2);
            u4[0] = std_num / (length - ddof);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64));
            __int64 mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((__int64*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((__int64*)NDArray)[i] - mean_num, 2);
            i8[0] = std_num / (length - ddof);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64));
            unsigned __int64 mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((unsigned __int64*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((unsigned __int64*)NDArray)[i] - mean_num, 2);
            u8[0] = std_num / (length - ddof);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float));
            float mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((float*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((float*)NDArray)[i] - mean_num, 2);
            f4[0] = std_num / (length - ddof);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double));
            double mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((double*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((double*)NDArray)[i] - mean_num, 2);
            f8[0] = std_num / (length - ddof);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool));
            bool mean_num = 0, std_num = 0;
            for (i = 0; i < length; i++)
                mean_num += ((bool*)NDArray)[i];
            mean_num = mean_num / length;
            for (i = 0; i < length; i++)
                std_num += pow(((bool*)NDArray)[i] - mean_num, 2);
            bool_[0] = std_num / (length - ddof);
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NDArray_Var(int* NDArray, __int64* shape, int shape_length, int ddof, int jump_step, int axis, int type)
{
    int i, j;
    __int64 length = 1;
    __int64 loop_times = 1;
    for (i = 0; i < shape_length; i++)
    {
        length *= (*shape);
        if (i != axis)
            loop_times *= (*shape);
        shape += 2;
    }
    int index = 0, tmp_index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * loop_times);
            char mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((char*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((char*)NDArray)[index] - mean_num, 2);
                i1[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * loop_times);
            unsigned char mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned char*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned char*)NDArray)[index] - mean_num, 2);
                u1[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * loop_times);
            short mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((short*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((short*)NDArray)[index] - mean_num, 2);
                i2[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * loop_times);
            unsigned short mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned short*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned short*)NDArray)[index] - mean_num, 2);
                u2[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * loop_times);
            int mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((int*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((int*)NDArray)[index] - mean_num, 2);
                i4[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * loop_times);
            unsigned int mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned int*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned int*)NDArray)[index] - mean_num, 2);
                u4[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * loop_times);
            __int64 mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((__int64*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((__int64*)NDArray)[index] - mean_num, 2);
                i8[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * loop_times);
            unsigned __int64 mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((unsigned __int64*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((unsigned __int64*)NDArray)[index] - mean_num, 2);
                u8[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * loop_times);
            float mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((float*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((float*)NDArray)[index] - mean_num, 2);
                f4[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * loop_times);
            double mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((double*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((double*)NDArray)[index] - mean_num, 2);
                f8[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * loop_times);
            bool mean_num, std_num;
            for (i = 0; i < loop_times; i++)
            {
                tmp_index = index;
                mean_num = 0;
                std_num = 0;
                for (j = 0; j < length / loop_times; j++, index += jump_step)
                    mean_num += ((bool*)NDArray)[index];
                mean_num = mean_num / (length / loop_times);
                for (j = 0; j < length / loop_times; j++, tmp_index += jump_step)
                    std_num += pow(((bool*)NDArray)[index] - mean_num, 2);
                bool_[i] = std_num / (length - ddof);
                index = (index + index / length) % length;
                tmp_index = (tmp_index + tmp_index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

// Global
NUMAHK_API int* NUMAHK_BROADCAST(int* NDArray, __int64* shape, __int64* new_shape, __int64* strides, int shape_length, int type, int clean)
{
    int i, j, index, tmp, length = 1;
    int* flag = (int*)malloc(sizeof(int) * shape_length);
    int* pos_strides = (int*)malloc(sizeof(int) * shape_length);
    int* now_pos = (int*)malloc(sizeof(int) * shape_length);
    int* max_pos = (int*)malloc(sizeof(int) * shape_length);
    for (i = 0; i < shape_length; i++)
    {
        length *= (*new_shape);
        pos_strides[i] = (*strides);
        now_pos[i] = 1;
        max_pos[i] = (*new_shape);
        flag[i] = ((*shape) == (*new_shape)) ? 1 : 0;
        new_shape += 2;
        shape += 2;
        strides += 2;
    }
    now_pos[shape_length - 1] = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                i1[i] = ((char*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                u1[i] = ((unsigned char*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                i2[i] = ((short*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                u2[i] = ((unsigned short*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                i4[i] = ((int*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                u4[i] = ((unsigned int*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                i8[i] = ((__int64*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                u8[i] = ((unsigned __int64*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                f4[i] = ((float*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                f8[i] = ((double*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < length; i++)
            {
                NUMAHK_POS_MACHINE(now_pos, max_pos, shape_length);
                index = 0;
                for (j = 0; j < shape_length; j++)
                {
                    tmp = (flag[j] == 1) ? now_pos[j] - 1 : 0;
                    index += pos_strides[j] * tmp;
                }
                bool_[i] = ((bool*)NDArray)[index];
            }
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return (int*)bool_;
        }
        default:
        {
            free(flag);
            free(pos_strides);
            free(now_pos);
            free(max_pos);
            if (clean == 1)
                NDArray_Free(NDArray, type);
            return 0;
        }
    }
}

NUMAHK_API void NUMAHK_FLAT(int* NDArray, __int64* arr, int arr_length, int length, int type)
{
    int i, flag;
    switch (type)
    {
        case 0:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((char*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (char)(*(arr + flag)) : (char)(*((double*)arr + flag));
            }
            break;
        }
        case 1:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((unsigned char*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (unsigned char)(*(arr + flag)) : (unsigned char)(*((double*)arr + flag));
            }
            break;
        }
        case 2:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((short*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (short)(*(arr + flag)) : (short)(*((double*)arr + flag));
            }
            break;
        }
        case 3:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((unsigned short*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (unsigned short)(*(arr + flag)) : (unsigned short)(*((double*)arr + flag));
            }
            break;
        }
        case 4:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((int*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (int)(*(arr + flag)) : (int)(*((double*)arr + flag));
            }
            break;
        }
        case 5:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((unsigned int*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (unsigned int)(*(arr + flag)) : (unsigned int)(*((double*)arr + flag));
            }
            break;
        }
        case 6:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((__int64*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (__int64)(*(arr + flag)) : (__int64)(*((double*)arr + flag));
            }
            break;
        }
        case 7:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((unsigned __int64*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (unsigned __int64)(*(arr + flag)) : (unsigned __int64)(*((double*)arr + flag));
            }
            break;
        }
        case 9:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((float*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (float)(*(arr + flag)) : (float)(*((double*)arr + flag));
            }
            break;
        }
        case 10:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((double*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (double)(*(arr + flag)) : (double)(*((double*)arr + flag));
            }
            break;
        }
        case 15:
        {
            for (i = 0; i < length; i++)
            {
                flag = 2 * (i % arr_length);
                ((bool*)NDArray)[i] = (*(((int*)(arr + flag)) + 2) == 1) ? (bool)(*(arr + flag)) : (bool)(*((double*)arr + flag));
            }
            break;
        }
    }
    return;
}

NUMAHK_API int* NUMAHK_NUMS(int number, int length, int type)
{
    int i;
    NDArray_Length = length;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < length; i++)
                i1[i] = (char)number;
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < length; i++)
                u1[i] = (unsigned char)number;
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < length; i++)
                i2[i] = (short)number;
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < length; i++)
                u2[i] = (unsigned short)number;
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < length; i++)
                i4[i] = (int)number;
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < length; i++)
                u4[i] = (unsigned int)number;
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < length; i++)
                i8[i] = (__int64)number;
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < length; i++)
                u8[i] = (unsigned __int64)number;
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < length; i++)
                f4[i] = (float)number;
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (i = 0; i < length; i++)
                f8[i] = (double)number;
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < length; i++)
                bool_[i] = (bool)number;
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API bool NUMAHK_NEWSHAPE(__int64* shape1, __int64* shape2, __int64* new_shape, int shape1_length, int shape2_length)
{
    __int64 cmp1, cmp2;
    int max_shape_length = (shape1_length > shape2_length) ? shape1_length : shape2_length;
    for (int i = max_shape_length - 1; i >= 0; i--)
    {
        if (shape1_length > 0)
        {
            cmp1 = *(shape1 + 2 * (shape1_length - 1));
            shape1_length--;
        }
        else
            cmp1 = 1;
        if (shape2_length > 0)
        {
            cmp2 = *(shape2 + 2 * (shape2_length - 1));
            shape2_length--;
        }
        else
            cmp2 = 1;
        if (cmp1 == cmp2 || cmp1 == 1 || cmp2 == 1)
            *(new_shape + 2 * i) = max(cmp1, cmp2);
        else
            return 0;
    }
    return 1;
}

NUMAHK_API int NUMAHK_POS_MACHINE(int* now_pos, int* max_pos, int length)
{
    int flag = 0;
    int point = length - 1;
    while (point >= 0)
    {
        now_pos[point] += 1;
        if (now_pos[point] < (max_pos[point] + 1))
            break;
        now_pos[point] = 1;
        point--;
        flag += 1;
    }
    return flag;
}

NUMAHK_API int* NUMAHK_RANGE(double start, double end, double step, int type)
{
    int i;
    int length = floor((end - start) / step);
    f8 = (double*)malloc(sizeof(double) * length);
    for (i = 0; i < length; i++)
    {
        f8[i] = start;
        start += step;
    }
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < length; i++)
                i1[i] = (char)f8[i];
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < length; i++)
                u1[i] = (unsigned char)f8[i];
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < length; i++)
                i2[i] = (short)f8[i];
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < length; i++)
                u2[i] = (unsigned short)f8[i];
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < length; i++)
                i4[i] = (int)f8[i];
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < length; i++)
                u4[i] = (unsigned int)f8[i];
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < length; i++)
                i8[i] = (__int64)f8[i];
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < length; i++)
                u8[i] = (unsigned __int64)f8[i];
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < length; i++)
                f4[i] = (float)f8[i];
            return (int*)f4;
        }
        case 10:
        {
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < length; i++)
                bool_[i] = (bool)f8[i];
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

NUMAHK_API int* NUMAHK_RESHAPE(int* NDArray, int length, int jump_step, int type)
{
    int index = 0;
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                i1[i] = ((char*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                u1[i] = ((unsigned char*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                i2[i] = ((short*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                u2[i] = ((unsigned short*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                i4[i] = ((int*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                u4[i] = ((unsigned int*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                i8[i] = ((__int64*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                u8[i] = ((unsigned __int64*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                f4[i] = ((float*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                f8[i] = ((double*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (int i = 0; i < length; i++, index += jump_step)
            {
                bool_[i] = ((bool*)NDArray)[index];
                index = (index + index / length) % length;
            }
            return (int*)bool_;
        }
        default:
            return 0;
    }
}

// Random
NUMAHK_API int* Random_Choice(int* NDArray, int arr_length, int length, int type)
{
    int i;
    int* tmp = (int*)malloc(sizeof(int) * length);
    std::uniform_int_distribution<> dis(0, arr_length - 1);
    switch (type)
    {
        case 0:
        {
            i1 = (char*)malloc(sizeof(char) * length);
            for (i = 0; i < length; i++)
                i1[i] = ((char*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)i1;
        }
        case 1:
        {
            u1 = (unsigned char*)malloc(sizeof(unsigned char) * length);
            for (i = 0; i < length; i++)
                u1[i] = ((unsigned char*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)u1;
        }
        case 2:
        {
            i2 = (short*)malloc(sizeof(short) * length);
            for (i = 0; i < length; i++)
                i2[i] = ((short*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)i2;
        }
        case 3:
        {
            u2 = (unsigned short*)malloc(sizeof(unsigned short) * length);
            for (i = 0; i < length; i++)
                u2[i] = ((unsigned short*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)u2;
        }
        case 4:
        {
            i4 = (int*)malloc(sizeof(int) * length);
            for (i = 0; i < length; i++)
                i4[i] = ((int*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)i4;
        }
        case 5:
        {
            u4 = (unsigned int*)malloc(sizeof(unsigned int) * length);
            for (i = 0; i < length; i++)
                u4[i] = ((unsigned int*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)u4;
        }
        case 6:
        {
            i8 = (__int64*)malloc(sizeof(__int64) * length);
            for (i = 0; i < length; i++)
                i8[i] = ((__int64*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)i8;
        }
        case 7:
        {
            u8 = (unsigned __int64*)malloc(sizeof(unsigned __int64) * length);
            for (i = 0; i < length; i++)
                u8[i] = ((unsigned __int64*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)u8;
        }
        case 9:
        {
            f4 = (float*)malloc(sizeof(float) * length);
            for (i = 0; i < length; i++)
                f4[i] = ((float*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)f4;
        }
        case 10:
        {
            f8 = (double*)malloc(sizeof(double) * length);
            for (i = 0; i < length; i++)
                f8[i] = ((double*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)f8;
        }
        case 15:
        {
            bool_ = (bool*)malloc(sizeof(bool) * length);
            for (i = 0; i < length; i++)
                bool_[i] = ((bool*)NDArray)[dis(Random_Generator)];
            free(tmp);
            return (int*)bool_;
        }
    }
}

NUMAHK_API double* Random_Normal(double loc, double scale, int length)
{
    f8 = (double*)malloc(sizeof(double) * length);
    std::normal_distribution<> dis{loc, scale};
    for (int i = 0; i < length; i++)
        f8[i] = dis(Random_Generator);
    return f8;
}

NUMAHK_API double* Random_Rand(int length)
{
    f8 = (double*)malloc(sizeof(double) * length);
    std::uniform_real_distribution<> dis(0, 1);
    for (int i = 0; i < length; i++)
        f8[i] = dis(Random_Generator);
    return f8;
}

NUMAHK_API int* Random_Randint(int start, int end, int length)
{
    i4 = (int*)malloc(sizeof(int) * length);
    std::uniform_int_distribution<> dis(start, end);
    for (int i = 0; i < length; i++)
        i4[i] = dis(Random_Generator);
    return i4;
}

NUMAHK_API double* Random_Randn(int length)
{
    f8 = (double*)malloc(sizeof(double) * length);
    std::normal_distribution<> dis{0, 1};
    for (int i = 0; i < length; i++)
        f8[i] = dis(Random_Generator);
    return f8;
}

NUMAHK_API void Random_Seed(double seed)
{
    Random_Seeds = seed;
    Random_Generator.seed(Random_Seeds);
}

// Extra
NUMAHK_API void swap(__int64* index, int* arr, int a, int b, int type)
{
    switch (type)
    {
        case 0:
        {
            char tmp = ((char*)arr)[a];
            ((char*)arr)[a] = ((char*)arr)[b];
            ((char*)arr)[b] = tmp;
            break;
        }
        case 1:
        {
            unsigned char tmp = ((unsigned char*)arr)[a];
            ((unsigned char*)arr)[a] = ((unsigned char*)arr)[b];
            ((unsigned char*)arr)[b] = tmp;
            break;
        }
        case 2:
        {
            short tmp = ((short*)arr)[a];
            ((short*)arr)[a] = ((short*)arr)[b];
            ((short*)arr)[b] = tmp;
            break;
        }
        case 3:
        {
            unsigned short tmp = ((unsigned short*)arr)[a];
            ((unsigned short*)arr)[a] = ((unsigned short*)arr)[b];
            ((unsigned short*)arr)[b] = tmp;
            break;
        }
        case 4:
        {
            int tmp = ((int*)arr)[a];
            ((int*)arr)[a] = ((int*)arr)[b];
            ((int*)arr)[b] = tmp;
            break;
        }
        case 5:
        {
            unsigned int tmp = ((unsigned int*)arr)[a];
            ((unsigned int*)arr)[a] = ((unsigned int*)arr)[b];
            ((unsigned int*)arr)[b] = tmp;
            break;
        }
        case 6:
        {
            __int64 tmp = ((__int64*)arr)[a];
            ((__int64*)arr)[a] = ((__int64*)arr)[b];
            ((__int64*)arr)[b] = tmp;
            break;
        }
        case 7:
        {
            unsigned __int64 tmp = ((unsigned __int64*)arr)[a];
            ((unsigned __int64*)arr)[a] = ((unsigned __int64*)arr)[b];
            ((unsigned __int64*)arr)[b] = tmp;
            break;
        }
        case 9:
        {
            float tmp = ((float*)arr)[a];
            ((float*)arr)[a] = ((float*)arr)[b];
            ((float*)arr)[b] = tmp;
            break;
        }
        case 10:
        {
            double tmp = ((double*)arr)[a];
            ((double*)arr)[a] = ((double*)arr)[b];
            ((double*)arr)[b] = tmp;
            break;
        }
        case 15:
        {
            bool tmp = ((bool*)arr)[a];
            ((bool*)arr)[a] = ((bool*)arr)[b];
            ((bool*)arr)[b] = tmp;
            break;
        }
    }
    __int64 tmp64 = index[a];
    index[a] = index[b];
    index[b] = tmp64;
}

NUMAHK_API int partition(int* arr, __int64* index, int low, int high, int type)
{
    int i = low - 1, j = high + 1;
    switch (type)
    {
        case 0:
        {
            char pivot = ((char*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((char*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((char*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 1:
        {
            unsigned char pivot = ((unsigned char*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((unsigned char*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((unsigned char*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 2:
        {
            short pivot = ((short*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((short*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((short*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 3:
        {
            unsigned short pivot = ((unsigned short*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((unsigned short*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((unsigned short*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 4:
        {
            int pivot = ((int*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((int*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((int*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 5:
        {
            unsigned int pivot = ((unsigned int*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((unsigned int*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((unsigned int*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 6:
        {
            __int64 pivot = ((__int64*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((__int64*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((__int64*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 7:
        {
            unsigned __int64 pivot = ((unsigned __int64*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((unsigned __int64*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((unsigned __int64*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 9:
        {
            float pivot = ((float*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((float*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((float*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 10:
        {
            double pivot = ((double*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((double*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((double*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        case 15:
        {
            bool pivot = ((bool*)arr)[low];
            while (1)
            {
                do
                {
                    i++;
                } while (((bool*)arr)[i] < pivot);
                do
                {
                    j--;
                } while (((bool*)arr)[j] > pivot);
                if (i >= j)
                    return j;
                swap(index, arr, i, j, type);
            }
            break;
        }
        default:
            return 0;
    }
}

NUMAHK_API void partitionSort(int* arr, __int64* index, int low, int high, int type)
{
    if (low < high)
    {
        int value = partition(arr, index, low, high, type);
        partitionSort(arr, index, low, value, type);
        partitionSort(arr, index, value + 1, high, type);
    }
}

NUMAHK_API int searchInsert(double* nums, int target, int length, int return_type)
{
    int left = 0;
    int right = length - 1;
    int mid = 0;
    while (left <= right)
    {
        mid = (left + right) / 2;
        if (fabs(nums[mid] - target) < 1e-15)
            return mid;
        else if (nums[mid] < target)
            left = mid + 1;
        else if (nums[mid] > target)
            right = mid - 1;
    }
    return left;
}