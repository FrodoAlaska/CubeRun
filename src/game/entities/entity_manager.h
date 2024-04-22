#pragma once 

#include "game/entities/player.h"
#include "engine/graphics/mesh.h"
#include "game/physics/collider.h"

#include <glm/vec3.hpp>
#include <glm/vec4.hpp>

#include <vector>

//@TEMP 
struct Platform {
  glm::vec3 position, scale; 
  glm::vec4 color; 
  Mesh* mesh; 
  Collider* collider;
};

// EntityManager
/////////////////////////////////////////////////////////////////////////////////
struct EntityManager {
  Player player; 
  std::vector<Platform> platforms;
};
/////////////////////////////////////////////////////////////////////////////////

// Public functions
/////////////////////////////////////////////////////////////////////////////////
EntityManager* entities_create();
void entities_destroy(EntityManager* entities); 
void entities_update(EntityManager* entities);
void entities_render(EntityManager* entities);

void entities_platform_add(EntityManager* entities, const glm::vec3& pos);
/////////////////////////////////////////////////////////////////////////////////
