#pragma once 

#include "game/ui/text.h"

#include <vector>

// OverlayType
/////////////////////////////////////////////////////////////////////////////////
enum OverlayType {
  OVERLAY_MENU = 0, 
  OVERLAY_OVER, 

  OVERLAYS_MAX = OVERLAY_OVER + 1,
};
/////////////////////////////////////////////////////////////////////////////////

// SceneOverlay 
//////////////////////////////////////////////////////////////////////////////////
struct SceneOverlay {
  OverlayType type; 
  void* user_data;
  std::vector<UIText> texts;
  bool is_active;

  void(*create)(SceneOverlay*);
  void(*destroy)(SceneOverlay*);
  void(*update)(SceneOverlay*);
  void(*render)(SceneOverlay*);
};
/////////////////////////////////////////////////////////////////////////////////

// Public functions
/////////////////////////////////////////////////////////////////////////////////
void menu_overlay_create(SceneOverlay* overlay);
void menu_overlay_destroy(SceneOverlay* overlay);
void menu_overlay_update(SceneOverlay* overlay);
void menu_overlay_render(SceneOverlay* overlay);
/////////////////////////////////////////////////////////////////////////////////
