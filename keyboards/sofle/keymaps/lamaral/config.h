#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#undef MANUFACTURER
#undef PRODUCT

#define MANUFACTURER    "LAmaral"
#define PRODUCT         "Sofle"

/* Fix the encoder resolution */
#ifdef ENCODER_RESOLUTION
    #undef ENCODER_RESOLUTION
#endif
#define ENCODER_RESOLUTION 4

/* Enable Caps Word by pushing both shifts */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
