#pragma once

#include "engine/defines.h"

#include <vector>

// Mesh
/////////////////////////////////////////////////////////////////////////////////
struct Mesh {
  std::vector<f32> vertices; 
  std::vector<u32> indices;

  u32 vao, vbo, ebo;
};
/////////////////////////////////////////////////////////////////////////////////

// Public functions
/////////////////////////////////////////////////////////////////////////////////
Mesh* mesh_create();
void mesh_destroy(Mesh* mesh);
/////////////////////////////////////////////////////////////////////////////////