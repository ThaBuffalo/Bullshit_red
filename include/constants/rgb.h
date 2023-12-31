#ifndef GUARD_RGB_H
#define GUARD_RGB_H

#define RGB(r, g, b) ((r) | ((g) << 5) | ((b) << 10))
#define RGB2(r, g, b) (((b) << 10) | ((g) << 5) | (r))
#define _RGB(r, g, b) ((((b) & 0x1F) << 10) + (((g) & 0x1F) << 5) + ((r) & 0x1F))

#define RGB_BLACK RGB(0, 0, 0)
#define RGB_WHITE RGB(31, 31, 31)
#define RGB_RED RGB(31, 0, 0)
#define RGB_GREEN RGB(0, 31, 0)
#define RGB_BLUE RGB(0, 0, 31)
#define RGB_YELLOW RGB(31, 31, 0)
#define RGB_MAGENTA RGB(31, 0, 31)
#define RGB_CYAN RGB(0, 31, 31)
#define RGB_WHITEALPHA (RGB_WHITE | 0x8000)

// gGlobalFieldTintMode
#define GLOBAL_FIELD_TINT_NONE              0
#define GLOBAL_FIELD_TINT_GRAYSCALE         1
#define GLOBAL_FIELD_TINT_SEPIA             2

#endif // GUARD_RGB_H
