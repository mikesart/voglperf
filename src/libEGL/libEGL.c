//
// Fake libEGL.so just so we can get a DT_NEEDED libEGL.so section in libvoglperf.so...
//
// gcc -m32 -fPIC -g -fvisibility=hidden -fno-exceptions -g -O0 -Wl,--no-undefined -shared -Wl,-soname,libEGL.so -o i386-linux-gnu/libEGL.so libEGL.c
// gcc -fPIC -g -fvisibility=hidden -fno-exceptions -g -O0 -Wl,--no-undefined -shared -Wl,-soname,libEGL.so -o x86_64-linux-gnu/libEGL.so libEGL.c
//

static int blah()
{
}

