#pragma once

#ifdef TCPSERVER_EXPORTS
#define APIENTRY __declspec(dllexport)
#else
#define APIENTRY __declspec(dllimport)
#endif

#define EXTERN_APIENTRY extern "C" APIENTRY

