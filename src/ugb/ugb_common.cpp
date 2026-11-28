#include "ugb/ugb_common.h"

namespace ugb
{
    //create a hit box on the sprites current location
    bn::rect create_bounding_box(bn::sprite_ptr sprite, bn::size box_size)
    {
        //get a clean x and y coord, then create a sprite sized box centered there
        return bn::rect(sprite.x().round_integer(),
                        sprite.y().round_integer(),
                        box_size.width(),
                        box_size.height());
    };
}