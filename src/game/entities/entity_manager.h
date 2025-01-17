#pragma once 

#include "game/entities/player.h"
#include "game/entities/obsticle.h"
#include "game/entities/obsticle.h"

#include <glm/vec3.hpp>
#include <glm/vec4.hpp>

// DEFS
/////////////////////////////////////////////////////////////////////////////////
#define OBSTICLES_MAX 64
/////////////////////////////////////////////////////////////////////////////////

// EntityManager
/////////////////////////////////////////////////////////////////////////////////
struct EntityManager {
  Player player; 

  Obsticle base_platform;
  Obsticle obsticles[OBSTICLES_MAX];

  f32 spawn_timer, spawn_timer_max;
  bool can_spawn;
};
/////////////////////////////////////////////////////////////////////////////////

// Public functions
/////////////////////////////////////////////////////////////////////////////////
EntityManager* entities_create();
void entities_destroy(EntityManager* entities); 
void entities_update(EntityManager* entities);
void entities_render(EntityManager* entities);
void entities_reset(EntityManager* entities);
/////////////////////////////////////////////////////////////////////////////////
