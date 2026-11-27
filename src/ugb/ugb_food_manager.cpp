#include "ugb/ugb_food_manager.h"
#include "bn_sound_items.h"

namespace ugb {
    FoodManager::FoodManager() {

    }

    //check player box for collision, remove collected food, return point
    int FoodManager::collect_food(bn::vector<Food, constants::MAX_ENTITIES>& food, const bn::rect& player_box) {
    for (int i = 0; i < food.size(); i++) {
        if (player_box.intersects(food[i].bounding_box())) {
            food.erase(food.begin() + i);

            //add sound effect when you eat a food
            bn::sound_items::ugb_power_up.play();

            return 1;
        }
    }
    return 0;
}
}