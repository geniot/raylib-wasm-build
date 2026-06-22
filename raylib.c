#include <emscripten/emscripten.h>

#define RLAPI EMSCRIPTEN_KEEPALIVE
#define RAYGUIAPI EMSCRIPTEN_KEEPALIVE
#define RAYGUI_IMPLEMENTATION
#define EASEDEF EMSCRIPTEN_KEEPALIVE

#include "raygui.h"
#include "raylib.h"
#include "raymath.h"
#include "rlgl.h"

