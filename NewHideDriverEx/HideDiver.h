#ifndef _HIDE_DRIVER_H_
#define _HIDE_DRIVER_H_ 1

//#include <ntifs.h>
#include <ntddk.h>


NTSTATUS HideDriverWin10(PDRIVER_OBJECT pTargetDriverObject);

BOOLEAN HideDriverWin7(PDRIVER_OBJECT pTargetDriverObject);

#endif // end _HIDE_DRIVER_H_



