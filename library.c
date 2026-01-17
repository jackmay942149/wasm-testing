#include <stdio.h>
#include <emscripten/emscripten.h>

int
main() {
  printf("Initialised Emscripten\n");
}

static int node_id = 11;

EMSCRIPTEN_KEEPALIVE
int
get_id() {
  node_id++;
  return node_id;
}
