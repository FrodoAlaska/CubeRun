#pragma once

#include "game/ui/text.h"
#include "game/entities/entity_manager.h"
#include "engine/graphics/camera.h"

// GameScene
/////////////////////////////////////////////////////////////////////////////////
struct GameScene {
  EntityManager* entities = nullptr; 
  UIText pause_text, score_text, tries_text; 
  Camera camera;

  bool is_paused, is_active; 
  u32 score, high_score;
};
/////////////////////////////////////////////////////////////////////////////////

// Public functions
/////////////////////////////////////////////////////////////////////////////////
GameScene* game_scene_create();
void game_scene_destroy(GameScene* game);
void game_scene_update(GameScene* game);
void game_scene_render(GameScene* game);
/////////////////////////////////////////////////////////////////////////////////
