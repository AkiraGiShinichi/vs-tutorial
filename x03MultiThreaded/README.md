# Win32 Thread and Event

4 main steps of a thread:
 - declaration: `HANDLE myHandle;`
 - assign function to thread: `myHandle = (HANDLE)_beginthreadex(0, 0, &FUNCTION_NAME, (void*)0, 0, 0);`
 - run thread(wait thread finish): `WaitForSingleObject(myHandle, INFINITE)`
 - close thread: `CloseHandle(myHandle)`

4 main steps of an event:
 - declaration: `HANDLE myEvent;`
 - assign function to thread: `myEvent = CreateEvent(0, 0, 0, 0);`
 - interact with event:
    - wait event occur before doing smt: `WaitForSingleObject(myEvent, INFINITE)`
    - set event manually: `SetEvent(myEvent);`
 - close thread: `CloseHandle(myEvent)`

*!Notice*: Event acknowledgement(operation when event happens) should be run inside a thread.

## Reference source:
 - [Native Thread for Win32 (B) - Synchronization/Resource Sharing](https://www.bogotobogo.com/cplusplus/multithreading_win32B.phphttps://www.bogotobogo.com/cplusplus/multithreading_win32B.php)