#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/
#undef MANUFACTURER
#undef PRODUCT

#define MANUFACTURER    "LAmaral"
#define PRODUCT         "Sofle"

/* Enable Caps Word by pushing both shifts */
#define BOTH_SHIFTS_TURNS_ON_CAPS_WORD
