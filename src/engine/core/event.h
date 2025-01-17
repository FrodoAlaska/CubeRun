#pragma once

#include "engine/defines.h"
#include "engine/audio/sound_type.h"
#include "engine/audio/music_type.h"
#include "game/physics/collider.h"
#include "game/scenes/scene_overlay.h"

#include <glm/vec2.hpp>

// Event type
/////////////////////////////////////////////////////////////////////////////////
enum EventType {
  /* Game events */ 
  EVENT_GAME_QUIT = 0,
  
  /* Keyboard events */ 
  EVENT_KEY_PRESSED,
  EVENT_KEY_RELEASED,

  /* Mouse events */ 
  EVENT_MOUSE_BUTTON_PRESSED,
  EVENT_MOUSE_BUTTON_RELEASED,
  EVENT_MOUSE_MOVED,
  EVENT_CURSOR_CHANGED,

  /* Gameplay events */ 
  EVENT_SOUND_PLAY, 
  EVENT_MUSIC_PLAY, 
  EVENT_MUSIC_STOP, 
  EVENT_OVERLAY_CHANGE,
  EVENT_COLLISION,
};
/////////////////////////////////////////////////////////////////////////////////

// Event desc
/////////////////////////////////////////////////////////////////////////////////
struct EventDesc {
  // Keyboard desc
  i32 key_pressed, key_released;

  // Mouse desc
  i32 button_pressed, button_released;
  bool cursor_shown;
  glm::vec2 mouse_pos;

  // Audio desc 
  SoundType sound_type; 
  MusicType music_type;

  // Scenes desc 
  OverlayType overlay_type;

  // Collision desc 
  ColliderData collision;
};
/////////////////////////////////////////////////////////////////////////////////

// Callback
/////////////////////////////////////////////////////////////////////////////////
typedef bool (*EventFunc)(const EventType, const EventDesc&);  
/////////////////////////////////////////////////////////////////////////////////

// Public functions
/////////////////////////////////////////////////////////////////////////////////
void event_listen(const EventType type, const EventFunc func);
bool event_dispatch(const EventType type, const EventDesc& desc);
/////////////////////////////////////////////////////////////////////////////////
